#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "times.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    Times *t = new Times(0);

    ~MainWindow();

private slots:
    void on_label_linkActivated();
    

    //void on_label_2_linkActivated();

    void on_label_4_linkActivated();

    void on_label_5_linkActivated();

    void on_pushButton_minus_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
