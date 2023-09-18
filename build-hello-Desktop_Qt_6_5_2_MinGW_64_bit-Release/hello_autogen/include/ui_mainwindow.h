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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
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
    QPushButton *enter_btn;
    QPushButton *save_btn;
    QLineEdit *className_txt;
    QListWidget *classes_list_2;
    QTextEdit *names_list_2;
    QLabel *label;
    QLabel *label_5;
    QPushButton *saveChanges_btn;
    QPushButton *removeClass_btn;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QWidget *page_2;
    QListWidget *classes_list;
    QLabel *label_2;
    QSpinBox *spinBox;
    QLabel *label_4;
    QTableWidget *groupsTable_tbl;
    QPushButton *makeGroups_btn;
    QPushButton *groups_btn;
    QPushButton *manageClasses_btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(775, 617);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(-30, 30, 821, 631));
        stackedWidget->setFrameShape(QFrame::Box);
        page = new QWidget();
        page->setObjectName("page");
        inputText_txt = new QTextEdit(page);
        inputText_txt->setObjectName("inputText_txt");
        inputText_txt->setGeometry(QRect(501, 80, 281, 331));
        clear_btn = new QPushButton(page);
        clear_btn->setObjectName("clear_btn");
        clear_btn->setGeometry(QRect(501, 50, 80, 24));
        enter_btn = new QPushButton(page);
        enter_btn->setObjectName("enter_btn");
        enter_btn->setGeometry(QRect(660, 50, 121, 24));
        save_btn = new QPushButton(page);
        save_btn->setObjectName("save_btn");
        save_btn->setGeometry(QRect(660, 420, 121, 24));
        className_txt = new QLineEdit(page);
        className_txt->setObjectName("className_txt");
        className_txt->setGeometry(QRect(501, 420, 141, 24));
        classes_list_2 = new QListWidget(page);
        classes_list_2->setObjectName("classes_list_2");
        classes_list_2->setGeometry(QRect(50, 80, 191, 331));
        classes_list_2->setEditTriggers(QAbstractItemView::CurrentChanged|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        names_list_2 = new QTextEdit(page);
        names_list_2->setObjectName("names_list_2");
        names_list_2->setGeometry(QRect(250, 80, 191, 331));
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 60, 49, 16));
        label_5 = new QLabel(page);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(250, 60, 49, 16));
        saveChanges_btn = new QPushButton(page);
        saveChanges_btn->setObjectName("saveChanges_btn");
        saveChanges_btn->setGeometry(QRect(350, 420, 91, 24));
        removeClass_btn = new QPushButton(page);
        removeClass_btn->setObjectName("removeClass_btn");
        removeClass_btn->setGeometry(QRect(49, 420, 191, 24));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(490, 20, 301, 441));
        groupBox_2 = new QGroupBox(page);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(40, 20, 411, 441));
        stackedWidget->addWidget(page);
        groupBox->raise();
        groupBox_2->raise();
        inputText_txt->raise();
        clear_btn->raise();
        enter_btn->raise();
        save_btn->raise();
        className_txt->raise();
        classes_list_2->raise();
        names_list_2->raise();
        label->raise();
        label_5->raise();
        saveChanges_btn->raise();
        removeClass_btn->raise();
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        classes_list = new QListWidget(page_2);
        classes_list->setObjectName("classes_list");
        classes_list->setGeometry(QRect(110, 70, 191, 331));
        classes_list->setEditTriggers(QAbstractItemView::CurrentChanged|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        label_2 = new QLabel(page_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 50, 61, 21));
        spinBox = new QSpinBox(page_2);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(120, 430, 71, 51));
        label_4 = new QLabel(page_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(120, 410, 71, 16));
        groupsTable_tbl = new QTableWidget(page_2);
        groupsTable_tbl->setObjectName("groupsTable_tbl");
        groupsTable_tbl->setGeometry(QRect(470, 30, 221, 511));
        groupsTable_tbl->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        groupsTable_tbl->horizontalHeader()->setVisible(false);
        makeGroups_btn = new QPushButton(page_2);
        makeGroups_btn->setObjectName("makeGroups_btn");
        makeGroups_btn->setGeometry(QRect(210, 430, 91, 51));
        stackedWidget->addWidget(page_2);
        groups_btn = new QPushButton(centralwidget);
        groups_btn->setObjectName("groups_btn");
        groups_btn->setGeometry(QRect(0, 0, 91, 31));
        groups_btn->setCheckable(true);
        groups_btn->setChecked(true);
        manageClasses_btn = new QPushButton(centralwidget);
        manageClasses_btn->setObjectName("manageClasses_btn");
        manageClasses_btn->setGeometry(QRect(90, 0, 91, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 775, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Group Manager", nullptr));
        clear_btn->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        enter_btn->setText(QCoreApplication::translate("MainWindow", "Strip Formatting", nullptr));
        save_btn->setText(QCoreApplication::translate("MainWindow", "Save New Class", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Classes", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Names", nullptr));
        saveChanges_btn->setText(QCoreApplication::translate("MainWindow", "Save Changes", nullptr));
        removeClass_btn->setText(QCoreApplication::translate("MainWindow", "Remove Class", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Add Classes", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Class Editor", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Select Class", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "# Groups", nullptr));
        makeGroups_btn->setText(QCoreApplication::translate("MainWindow", "Make Groups", nullptr));
        groups_btn->setText(QCoreApplication::translate("MainWindow", "Groups", nullptr));
        manageClasses_btn->setText(QCoreApplication::translate("MainWindow", "Manage Classes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
