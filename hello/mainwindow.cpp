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


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->clear_btn, SIGNAL(clicked()), this, SLOT(clear()));
    connect(ui->enter_btn, SIGNAL(clicked()), this, SLOT(enter()));
    connect(ui->addClass_btn, SIGNAL(clicked()), this, SLOT(addClass()));
    connect(ui->groups_btn, SIGNAL(clicked()), this, SLOT(groups()));
    connect(ui->save_btn, SIGNAL(clicked()), this, SLOT(save()));
    connect(ui->load_btn, SIGNAL(clicked()), this, SLOT(load()));

    QString projectDir = QCoreApplication::applicationDirPath();
    QString classesDir = projectDir + "/Classes";
    QDir directory(classesDir);
    QStringList fileNames = directory.entryList(QDir::Files);

    foreach (const QString &fileName, fileNames) {
        QString choppedFileName = fileName;
        choppedFileName.chop(4);
        ui->listWidget->addItem(choppedFileName);
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clear(){
    ui->inputText_txt->clear();
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


void MainWindow::addClass(){
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
}

void MainWindow::load(){
    QString projectDir = QCoreApplication::applicationDirPath();
    QString classesDir = projectDir + "/Classes/poo.txt";
    QFile file(classesDir);
    QTextStream in(&file);

    file.open(QIODevice::ReadOnly | QIODevice::Text);

    QString fileContent = in.readAll();
    ui->outputText_txt->setPlainText(fileContent);

    file.close();



}



