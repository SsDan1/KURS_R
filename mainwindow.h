#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

public slots:
    void func1();
    void func2();
    void func3();
    void func4();
    void func5();
//private slots:
    //void on_pushButton_clicked();
   // void on_pushButton_2_clicked();
};

#endif // MAINWINDOW_H
