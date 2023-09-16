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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTextEdit *inputText_txt;
    QPushButton *clear_btn;
    QLabel *label;
    QPushButton *enter_btn;
    QPushButton *save_btn;
    QLineEdit *className_txt;
    QWidget *page_2;
    QListWidget *classes_list;
    QLabel *label_2;
    QPlainTextEdit *names_list;
    QLabel *label_3;
    QSpinBox *spinBox;
    QLabel *label_4;
    QPushButton *groups_btn;
    QPushButton *addClass_btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(-10, 30, 811, 551));
        stackedWidget->setFrameShape(QFrame::Box);
        page = new QWidget();
        page->setObjectName("page");
        inputText_txt = new QTextEdit(page);
        inputText_txt->setObjectName("inputText_txt");
        inputText_txt->setGeometry(QRect(30, 40, 281, 331));
        clear_btn = new QPushButton(page);
        clear_btn->setObjectName("clear_btn");
        clear_btn->setGeometry(QRect(130, 10, 80, 24));
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 10, 101, 31));
        enter_btn = new QPushButton(page);
        enter_btn->setObjectName("enter_btn");
        enter_btn->setGeometry(QRect(230, 10, 80, 24));
        save_btn = new QPushButton(page);
        save_btn->setObjectName("save_btn");
        save_btn->setGeometry(QRect(230, 380, 80, 24));
        className_txt = new QLineEdit(page);
        className_txt->setObjectName("className_txt");
        className_txt->setGeometry(QRect(30, 380, 113, 24));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        classes_list = new QListWidget(page_2);
        classes_list->setObjectName("classes_list");
        classes_list->setGeometry(QRect(90, 80, 191, 271));
        classes_list->setEditTriggers(QAbstractItemView::CurrentChanged|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        label_2 = new QLabel(page_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 60, 61, 21));
        names_list = new QPlainTextEdit(page_2);
        names_list->setObjectName("names_list");
        names_list->setGeometry(QRect(290, 80, 181, 271));
        label_3 = new QLabel(page_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(290, 60, 81, 16));
        spinBox = new QSpinBox(page_2);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(480, 80, 71, 51));
        label_4 = new QLabel(page_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(480, 60, 71, 16));
        stackedWidget->addWidget(page_2);
        groups_btn = new QPushButton(centralwidget);
        groups_btn->setObjectName("groups_btn");
        groups_btn->setGeometry(QRect(0, 0, 91, 31));
        addClass_btn = new QPushButton(centralwidget);
        addClass_btn->setObjectName("addClass_btn");
        addClass_btn->setGeometry(QRect(90, 0, 91, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        clear_btn->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Input Raw Text", nullptr));
        enter_btn->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        save_btn->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Select Class", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Names on File", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "# Groups", nullptr));
        groups_btn->setText(QCoreApplication::translate("MainWindow", "Groups", nullptr));
        addClass_btn->setText(QCoreApplication::translate("MainWindow", "Add Class", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
