#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QImage>
#include <QPainter>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    cameraTimer = new QTimer(this);
    connect(cameraTimer, &QTimer::timeout, this, &MainWindow::updateCamera);
    cameraTimer->start(30);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_trainButton_clicked() {
    ui->progressBar->setValue(0);
    model.trainModel(dataset);
    QMessageBox::information(this, "Training", "Model Training Completed!");
}

void MainWindow::on_testButton_clicked() {
    std::vector<float> testInput = dataset.getSample();
    std::vector<float> prediction = model.predict(testInput);
    
    QString result = QString("Prediction: %1").arg(prediction[0]);
    ui->predictionLabel->setText(result);
}

void MainWindow::updateCamera() {
    QImage frame(200, 200, QImage::Format_RGB32);
    frame.fill(Qt::black);
    QPainter painter(&frame);
    painter.setBrush(Qt::white);
    painter.drawEllipse(50, 50, 100, 100);
    ui->cameraLabel->setPixmap(QPixmap::fromImage(frame));
}
