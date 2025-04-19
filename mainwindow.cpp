#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "calculatorwindow.h"
#include "creditswindow.h"
#include <QApplication>
#include <QEvent>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /* connection between signals and slots */
    connect(ui->calculateButton, &QPushButton::clicked, this, &MainWindow::onCalculatorButtonClicked);
    connect(ui->optionsButton, &QPushButton::clicked, this, &MainWindow::onOptionsButtonClicked);
    connect(ui->creditsButton, &QPushButton::clicked, this, &MainWindow::onCreditsButtonClicked);
    connect(ui->exitButton, &QPushButton::clicked, this, &MainWindow::onExitButtonClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onCalculatorButtonClicked() {
    CalculatorWindow calculator(this);
    calculator.exec();
}

void MainWindow::onExitButtonClicked() {
    this->close();
}

void MainWindow::onCreditsButtonClicked() {
    CreditsWindow credits(this);
    credits.exec();
}

void MainWindow::onOptionsButtonClicked(){}
