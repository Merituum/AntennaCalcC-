#include "calculatorwindow.h"
#include "mainwindow.h"
#include "./ui_calculatorwindow.h" // ← to musi być przed użyciem Ui::CalculatorWindow

#include <QMessageBox>

CalculatorWindow::CalculatorWindow(QWidget *parent)
    : QDialog(parent), ui(new Ui::Dialog)

{
    ui->setupUi(this);

    connect(ui->returnButton, &QPushButton::clicked, this, &CalculatorWindow::onReturnButtonClicked);
    connect(ui->yagiButton, &QPushButton::clicked, this, &CalculatorWindow::onYagiButtonClicked);
    connect(ui->patchButton, &QPushButton::clicked, this, &CalculatorWindow::onPatchButtonClicked);
    connect(ui->lpdaButton, &QPushButton::clicked, this, &CalculatorWindow::onLpdaButtonClicked);
}

CalculatorWindow::~CalculatorWindow() {
    delete ui;
}

void CalculatorWindow::setupUI() {
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    setWindowTitle(tr("Antenna calculator - menu"));
    returnButton = new QPushButton(tr("Close"), this);
    yagiButton = new QPushButton(tr("YAGI"), this);
    patchButton = new QPushButton(tr("Patch antenna"),this);
    lpdaButton = new QPushButton(tr("LPDA"), this);




    //*/ mainLayout->addWidget(logoLabel);
    // mainLayout->addWidget(closeButton);
    // mainLayout->addWidget(returnButton);
    // setLayout(mainLayout);*/
    // mainLay
    setLayout(mainLayout);

}

// void CalculatorWindow::onClearButtonClicked() {}

// void CalculatorWindow::onCalculateButtonClicked() {}

void CalculatorWindow::onReturnButtonClicked() {
    this->close();
}

void CalculatorWindow::onLpdaButtonClicked() {}


void CalculatorWindow::onDipoleButtonClicked() {}

void CalculatorWindow::onPatchButtonClicked() {}

void CalculatorWindow::onYagiButtonClicked() {}
