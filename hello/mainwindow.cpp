#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <vector>
#include <QRegularExpression>
#include <QStringList>
#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>
#include <QDir>
#include <stdio.h>
#include <QStyleFactory>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    qApp->setStyle(QStyleFactory::create("Fusion"));

    QPalette lightPalette;
    lightPalette.setColor(QPalette::Window, QColor(220, 220, 220));             // Background color
    lightPalette.setColor(QPalette::WindowText, QColor(9, 38, 66));            // Text color
    lightPalette.setColor(QPalette::Base, QColor(255, 255, 255));              // Base color
    lightPalette.setColor(QPalette::AlternateBase, QColor(173, 216, 255));     // Alternate background color
    lightPalette.setColor(QPalette::ToolTipBase, QColor(255, 255, 255));       // Tooltip background color
    lightPalette.setColor(QPalette::ToolTipText, QColor(9, 38, 66));           // Tooltip text color
    lightPalette.setColor(QPalette::Text, QColor(9, 38, 66));                  // Text color
    lightPalette.setColor(QPalette::Button, QColor(200, 200, 200));            // Button color
    lightPalette.setColor(QPalette::ButtonText, QColor(9, 38, 66));            // Button text color
    lightPalette.setColor(QPalette::BrightText, QColor(255, 0, 0));            // Bright text color
    lightPalette.setColor(QPalette::Link, QColor(35, 90, 159));                // Link color

    lightPalette.setColor(QPalette::Highlight, QColor(23, 66, 118));           // Highlight color
    lightPalette.setColor(QPalette::HighlightedText, QColor(255, 255, 255));  // Highlighted text color

    qApp->setPalette(lightPalette);

    qApp->setStyleSheet("QToolTip { color: #ffffff; background-color: #2a82da; border: 1px solid white; }");



    ui->setupUi(this);
    connect(ui->clear_btn, SIGNAL(clicked()), this, SLOT(clear()));
    connect(ui->enter_btn, SIGNAL(clicked()), this, SLOT(enter()));
    connect(ui->manageClasses_btn, SIGNAL(clicked()), this, SLOT(manageClasses()));
    connect(ui->groups_btn, SIGNAL(clicked()), this, SLOT(groups()));
    connect(ui->save_btn, SIGNAL(clicked()), this, SLOT(save()));
    connect(ui->classes_list_2, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(displayNamesInEditor()));
    connect(ui->saveChanges_btn, SIGNAL(clicked()), this, SLOT(saveChanges()));
    connect(ui->removeClass_btn, SIGNAL(clicked()), this, SLOT(removeClass()));
    connect(ui->makeGroups_btn, SIGNAL(clicked()), this, SLOT(makeGroups()));

    refreshLists();

    ui->className_txt->setPlaceholderText("Enter Class Name...");
    ui->inputText_txt->setPlaceholderText("Paste Classlist Here...");

    ui->groupsTable_tbl->setRowCount(0);
    ui->groupsTable_tbl->setColumnCount(1);
    ui->classesBar->setVisible(false);
    ui->groupsBar->setVisible(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clear(){
    ui->inputText_txt->clear();
    ui->className_txt->clear();
}

void MainWindow::enter(){

    const QString pattern = R"(, (?!First)([A-Z][a-zA-Z]*))";
    QRegularExpression rx(pattern);

    QRegularExpressionMatchIterator myMatches = rx.globalMatch(ui->inputText_txt->toPlainText());
    QStringList firstNames;
    QString name;
    QRegularExpressionMatch match;

    while (myMatches.hasNext()){
        match = myMatches.next();
        name = match.captured(1);
        firstNames << name;
    }

    QString textToDisplay = firstNames.join("\n");
    ui->inputText_txt->setPlainText(textToDisplay);
}


void MainWindow::manageClasses(){
    ui->stackedWidget->setCurrentIndex(0);
    ui->classesBar->setVisible(true);
    ui->groupsBar->setVisible(false);


}

void MainWindow::groups(){
    ui->stackedWidget->setCurrentIndex(1);
    ui->manageClasses_btn->setStyleSheet("");
    ui->classesBar->setVisible(false);
    ui->groupsBar->setVisible(true);

}

void MainWindow::save(){

    QString projectDir = QCoreApplication::applicationDirPath();
    QString classesDir = projectDir + "/Classes/";
    QDir().mkpath(classesDir);

    std::ofstream outStream;
    std::string fileName = classesDir.toStdString();
    fileName += ui->className_txt->text().toStdString() + ".txt";
    outStream.open(fileName, std::ios::app);
    outStream << ui->inputText_txt->toPlainText().toStdString();
    outStream.close();
    refreshLists();
    clear();
}


void MainWindow::displayNamesInEditor(){
    QString className = ui->classes_list_2->currentItem()->text();
    QString projectDir = QCoreApplication::applicationDirPath();
    QString classesDir = projectDir + "/Classes/" + className + ".txt";
    QFile file(classesDir);
    QTextStream in(&file);

    file.open(QIODevice::ReadOnly | QIODevice::Text);

    QString fileContent = in.readAll();
    ui->names_list_2->setPlainText(fileContent);

    file.close();
}

void MainWindow::saveChanges(){

    QString className = ui->classes_list_2->currentItem()->text();
    QString projectDir = QCoreApplication::applicationDirPath();
    QString classesDir = projectDir + "/Classes/" + className + ".txt";

    std::ofstream outStream;
    std::string fileName = classesDir.toStdString();
    outStream.open(fileName, std::ofstream::out | std::ofstream::trunc);
    outStream << ui->names_list_2->toPlainText().toStdString();
    outStream.close();
}

void MainWindow::refreshLists(){
    ui->classes_list->clear();
    ui->classes_list_2->clear();
    QString projectDir = QCoreApplication::applicationDirPath();
    QString classesDir = projectDir + "/Classes";
    QDir directory(classesDir);
    QStringList fileNames = directory.entryList(QDir::Files);

    foreach (const QString &fileName, fileNames) {
        QString choppedFileName = fileName;
        choppedFileName.chop(4);
        ui->classes_list->addItem(choppedFileName);
        ui->classes_list_2->addItem(choppedFileName);

    }
}

void MainWindow::removeClass(){
    QString className = ui->classes_list_2->currentItem()->text();
    QString projectDir = QCoreApplication::applicationDirPath();
    QString classesDir = projectDir + "/Classes/" + className + ".txt";
    std::string fileName = classesDir.toStdString();
    QFile file(classesDir);
    file.remove();
    refreshLists();
    ui->names_list_2->clear();

}

void MainWindow::makeGroups(){
    ui->groupsTable_tbl->clear();
    QString className = ui->classes_list->currentItem()->text();
    QString projectDir = QCoreApplication::applicationDirPath();
    QString classesDir = projectDir + "/Classes/" + className + ".txt";
    QFile file(classesDir);
    QTextStream in(&file);
    QStringList nameList;
    int numPeople = 0;
    file.open(QIODevice::ReadOnly | QIODevice::Text);

    while (!in.atEnd()) {
        QString line = in.readLine();
        nameList.append(line);
        numPeople++;
    }

    int numGroups = ui->spinBox->value();
    ui->groupsTable_tbl->setRowCount(numGroups);

    int groupSize = numPeople / numGroups;
    int numOversizedGroups = numPeople % numGroups;
    int currGroupSize;
    int namesIndex = 0;
    for (int i = 0; i < numGroups; i++){
        QString currGroup = "";
        currGroupSize = (i < numOversizedGroups) ? groupSize + 1 : groupSize;
        for (int j = 0; j < currGroupSize; j++){
            currGroup += nameList[namesIndex] + "\n";
            namesIndex++;
        }
        QTableWidgetItem *item = new QTableWidgetItem(currGroup);
        ui->groupsTable_tbl->setItem(i, 0, item);
        ui->groupsTable_tbl->resizeRowToContents(i);
    }


}
