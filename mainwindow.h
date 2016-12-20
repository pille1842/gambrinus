#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    QPushButton *apply;
    ~MainWindow();

private:
    Ui::MainWindow *ui;
private slots:
    void processApply();
};

#endif // MAINWINDOW_H
