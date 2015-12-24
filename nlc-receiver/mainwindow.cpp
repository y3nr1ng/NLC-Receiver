#include "mainwindow.hpp"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent), ui(new Ui::MainWindow) {
	ui->setupUi(this);
}

MainWindow::~MainWindow() {
	delete ui;
}

void MainWindow::on_actionStart_triggered() {

}

void MainWindow::on_actionStop_triggered() {

}

void MainWindow::on_actionRefresh_triggered() {

}

void MainWindow::on_actionSave_Image_triggered() {

}

void MainWindow::on_actionExit_triggered() {
    // TODO: Make sure the camera is stopped.
    ui->exit();
}
