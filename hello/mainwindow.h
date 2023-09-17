#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void clear();
    void enter();
    void manageClasses();
    void groups();
    void save();
    void displayNamesInEditor();
    void saveChanges();
    void removeClass();

private:
    Ui::MainWindow *ui;
    void refreshLists();


};
#endif // MAINWINDOW_H
