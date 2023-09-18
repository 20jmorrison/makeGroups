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
#include <QtWidgets/QFrame>
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
    QSpinBox *spinBox;
    QLabel *label_4;
    QTableWidget *groupsTable_tbl;
    QPushButton *makeGroups_btn;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_4;
    QGroupBox *groupBox_5;
    QGroupBox *groupBox_6;
    QPushButton *groups_btn;
    QPushButton *manageClasses_btn;
    QFrame *line;
    QPushButton *groupsBar;
    QPushButton *classesBar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(775, 581);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(-30, 40, 821, 621));
        stackedWidget->setFrameShape(QFrame::NoFrame);
        page = new QWidget();
        page->setObjectName("page");
        inputText_txt = new QTextEdit(page);
        inputText_txt->setObjectName("inputText_txt");
        inputText_txt->setGeometry(QRect(501, 90, 281, 331));
        clear_btn = new QPushButton(page);
        clear_btn->setObjectName("clear_btn");
        clear_btn->setGeometry(QRect(501, 60, 80, 24));
        enter_btn = new QPushButton(page);
        enter_btn->setObjectName("enter_btn");
        enter_btn->setGeometry(QRect(660, 60, 121, 24));
        save_btn = new QPushButton(page);
        save_btn->setObjectName("save_btn");
        save_btn->setGeometry(QRect(660, 430, 121, 24));
        className_txt = new QLineEdit(page);
        className_txt->setObjectName("className_txt");
        className_txt->setGeometry(QRect(501, 430, 141, 24));
        classes_list_2 = new QListWidget(page);
        classes_list_2->setObjectName("classes_list_2");
        classes_list_2->setGeometry(QRect(50, 90, 191, 331));
        classes_list_2->setEditTriggers(QAbstractItemView::CurrentChanged|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        names_list_2 = new QTextEdit(page);
        names_list_2->setObjectName("names_list_2");
        names_list_2->setGeometry(QRect(250, 90, 191, 331));
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 70, 49, 16));
        label_5 = new QLabel(page);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(250, 70, 49, 16));
        saveChanges_btn = new QPushButton(page);
        saveChanges_btn->setObjectName("saveChanges_btn");
        saveChanges_btn->setGeometry(QRect(350, 430, 91, 24));
        removeClass_btn = new QPushButton(page);
        removeClass_btn->setObjectName("removeClass_btn");
        removeClass_btn->setGeometry(QRect(49, 430, 191, 24));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(490, 30, 301, 441));
        groupBox_2 = new QGroupBox(page);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(40, 30, 411, 441));
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
        classes_list->setGeometry(QRect(110, 60, 191, 341));
        classes_list->setEditTriggers(QAbstractItemView::CurrentChanged|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        spinBox = new QSpinBox(page_2);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(120, 430, 71, 51));
        spinBox->setValue(2);
        label_4 = new QLabel(page_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(120, 410, 71, 16));
        groupsTable_tbl = new QTableWidget(page_2);
        groupsTable_tbl->setObjectName("groupsTable_tbl");
        groupsTable_tbl->setGeometry(QRect(530, 60, 191, 421));
        groupsTable_tbl->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        groupsTable_tbl->horizontalHeader()->setVisible(false);
        makeGroups_btn = new QPushButton(page_2);
        makeGroups_btn->setObjectName("makeGroups_btn");
        makeGroups_btn->setGeometry(QRect(210, 430, 91, 51));
        groupBox_3 = new QGroupBox(page_2);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(100, 20, 211, 471));
        groupBox_4 = new QGroupBox(groupBox_3);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(230, 40, 231, 481));
        groupBox_5 = new QGroupBox(page_2);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(520, 20, 211, 471));
        groupBox_6 = new QGroupBox(groupBox_5);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setGeometry(QRect(230, 40, 231, 481));
        stackedWidget->addWidget(page_2);
        groupBox_3->raise();
        groupBox_5->raise();
        classes_list->raise();
        spinBox->raise();
        label_4->raise();
        groupsTable_tbl->raise();
        makeGroups_btn->raise();
        groups_btn = new QPushButton(centralwidget);
        groups_btn->setObjectName("groups_btn");
        groups_btn->setGeometry(QRect(0, 0, 91, 41));
        groups_btn->setCheckable(false);
        groups_btn->setChecked(false);
        groups_btn->setFlat(true);
        manageClasses_btn = new QPushButton(centralwidget);
        manageClasses_btn->setObjectName("manageClasses_btn");
        manageClasses_btn->setGeometry(QRect(90, 0, 91, 41));
        manageClasses_btn->setFlat(true);
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 30, 771, 21));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        groupsBar = new QPushButton(centralwidget);
        groupsBar->setObjectName("groupsBar");
        groupsBar->setEnabled(true);
        groupsBar->setGeometry(QRect(20, 30, 51, 5));
        QPalette palette;
        QBrush brush(QColor(85, 170, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        groupsBar->setPalette(palette);
        classesBar = new QPushButton(centralwidget);
        classesBar->setObjectName("classesBar");
        classesBar->setEnabled(true);
        classesBar->setGeometry(QRect(110, 30, 51, 5));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        classesBar->setPalette(palette1);
        MainWindow->setCentralWidget(centralwidget);
        groupsBar->raise();
        stackedWidget->raise();
        groups_btn->raise();
        manageClasses_btn->raise();
        line->raise();
        classesBar->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 775, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        makeGroups_btn->setDefault(true);
        manageClasses_btn->setDefault(false);


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
        label_4->setText(QCoreApplication::translate("MainWindow", "# Groups", nullptr));
        makeGroups_btn->setText(QCoreApplication::translate("MainWindow", "Make Groups", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Class Select", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Class Select", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "Generated Groups", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "Class Select", nullptr));
        groups_btn->setText(QCoreApplication::translate("MainWindow", "Groups", nullptr));
        manageClasses_btn->setText(QCoreApplication::translate("MainWindow", "Manage Classes", nullptr));
        groupsBar->setText(QString());
        classesBar->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
