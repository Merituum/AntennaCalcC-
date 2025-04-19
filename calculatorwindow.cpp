#include "calculatorwindow.h"
#include <QMessageBox>

CalculatorWindow::CalculatorWindow(QWidget *parent) : QDialog(parent) {
    setupUI();
    connect(calculateButton, &QPushButton::clicked, this, &CalculatorWindow::onCalculateButtonClicked);
}

CalculatorWindow::~CalculatorWindow() {}

void CalculatorWindow::setupUI() {
    setWindowTitle(tr("Antenna calculator - menu"));
    returnButton = new QPushButton(tr("Close"), this);
    yagiButton = new QPushButton(tr("YAGI"), this);
    patchButton = new QPushButton(tr("Patch antenna"),this);
    lpdaButton = new QPushButton(tr("LPDA"), this);


    connect(returnButton, &QPushButton::clicked, this, &QDialog::accept);


}

void CalculatorWindow::onClearButtonClicked() {}

void CalculatorWindow::onCalculateButtonClicked() {}

void CalculatorWindow::onReturnButtonClicked() {

}
