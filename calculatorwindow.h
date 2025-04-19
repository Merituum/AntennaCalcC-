#ifndef CALCULATORWINDOW_H
#define CALCULATORWINDOW_H
#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QGroupBox>
#include <QHBoxLayout>

class CalculatorWindow : public QDialog {
    Q_OBJECT

public:
    explicit CalculatorWindow(QWidget *parent = nullptr);
    ~CalculatorWindow();
private slots:
    void onCalculateButtonClicked();
    void onClearButtonClicked();
private:
    QPushButton *calculateButton;
    void setupUI();

};

#endif // CALCULATORWINDOW_H
