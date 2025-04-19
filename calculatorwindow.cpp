#include "calculatorwindow.h"
#include <QMessageBox>

CalculatorWindow::CalculatorWindow(QWidget *parent) : QDialog(parent) {
    setupUI();
    connect(calculateButton, &QPushButton::clicked, this, &CalculatorWindow::onCalculateButtonClicked);
}

CalculatorWindow::~CalculatorWindow() {}

void CalculatorWindow::setupUI() {
    setWindowTitle(tr("Antenna calculator - menu"));
}

void CalculatorWindow::onClearButtonClicked() {}

void CalculatorWindow::onCalculateButtonClicked() {}
