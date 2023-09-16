/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *inputText_txt;
    QLabel *label;
    QPushButton *clear_btn;
    QPushButton *enter_btn;
    QPushButton *save_btn;
    QLineEdit *className_txt;
    QTextEdit *outputText_txt;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        inputText_txt = new QTextEdit(centralwidget);
        inputText_txt->setObjectName("inputText_txt");
        inputText_txt->setGeometry(QRect(100, 60, 281, 331));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 30, 101, 31));
        clear_btn = new QPushButton(centralwidget);
        clear_btn->setObjectName("clear_btn");
        clear_btn->setGeometry(QRect(200, 30, 80, 24));
        enter_btn = new QPushButton(centralwidget);
        enter_btn->setObjectName("enter_btn");
        enter_btn->setGeometry(QRect(420, 40, 80, 24));
        save_btn = new QPushButton(centralwidget);
        save_btn->setObjectName("save_btn");
        save_btn->setGeometry(QRect(300, 400, 80, 24));
        className_txt = new QLineEdit(centralwidget);
        className_txt->setObjectName("className_txt");
        className_txt->setGeometry(QRect(100, 400, 113, 24));
        outputText_txt = new QTextEdit(centralwidget);
        outputText_txt->setObjectName("outputText_txt");
        outputText_txt->setGeometry(QRect(410, 60, 281, 331));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Input Raw Text", nullptr));
        clear_btn->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        enter_btn->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        save_btn->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
