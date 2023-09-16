#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <vector>
#include <QRegularExpression>
#include <QStringList>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->clear_btn, SIGNAL(clicked()), this, SLOT(clear()));
    connect(ui->enter_btn, SIGNAL(clicked()), this, SLOT(enter()));
    connect(ui->addClass_btn, SIGNAL(clicked()), this, SLOT(addClass()));
    connect(ui->groups_btn, SIGNAL(clicked()), this, SLOT(groups()));



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
    ui->outputText_txt->setPlainText(textToDisplay);
}


void MainWindow::addClass(){
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::groups(){
    ui->stackedWidget->setCurrentIndex(1);

}



