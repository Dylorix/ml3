#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <rect.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class Rect;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void mousePressEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);

private:
    Ui::MainWindow *ui;
    int tempX1, tempY1, tempX2, tempY2;
    int count = 1;
    Rect *rect;
};
#endif // MAINWINDOW_H
