#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "cnn.h"
#include "dataset.h"
#include "preprocess.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_trainButton_clicked();
    void on_testButton_clicked();
    void updateCamera();

private:
    Ui::MainWindow *ui;
    CNN model;
    Dataset dataset;
    QTimer *cameraTimer;
};

#endif // MAINWINDOW_H
