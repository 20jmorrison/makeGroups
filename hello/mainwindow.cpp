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


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->clear_btn, SIGNAL(clicked()), this, SLOT(clear()));
    connect(ui->enter_btn, SIGNAL(clicked()), this, SLOT(enter()));
    connect(ui->manageClasses_btn, SIGNAL(clicked()), this, SLOT(manageClasses()));
    connect(ui->groups_btn, SIGNAL(clicked()), this, SLOT(groups()));
    connect(ui->save_btn, SIGNAL(clicked()), this, SLOT(save()));
    connect(ui->classes_list, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(displayNames()));
    connect(ui->classes_list_2, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(displayNamesInEditor()));
    connect(ui->saveChanges_btn, SIGNAL(clicked()), this, SLOT(saveChanges()));
    connect(ui->removeClass_btn, SIGNAL(clicked()), this, SLOT(removeClass()));

    refreshLists();

    ui->className_txt->setPlaceholderText("Enter Class Name...");
    ui->inputText_txt->setPlaceholderText("Paste Classlist Here...");
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
}

void MainWindow::groups(){
    ui->stackedWidget->setCurrentIndex(1);

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

void MainWindow::displayNames(){
    QString className = ui->classes_list->currentItem()->text();
    QString projectDir = QCoreApplication::applicationDirPath();
    QString classesDir = projectDir + "/Classes/" + className + ".txt";
    QFile file(classesDir);
    QTextStream in(&file);

    file.open(QIODevice::ReadOnly | QIODevice::Text);

    QString fileContent = in.readAll();
    ui->names_list->setPlainText(fileContent);

    file.close();
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
