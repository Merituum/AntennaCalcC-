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
#include <QLabel>
#include "./ui_calculatorwindow.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class CalculatorWindow;
}
QT_END_NAMESPACE


class CalculatorWindow : public QDialog {
    Q_OBJECT

public:
    explicit CalculatorWindow(QWidget *parent = nullptr);
    ~CalculatorWindow();
private slots:
    void onReturnButtonClicked();
    void onYagiButtonClicked();
    void onLpdaButtonClicked();
    void onPatchButtonClicked();
    void onDipoleButtonClicked();
private:
    QPushButton *returnButton;
    QPushButton *yagiButton;
    QPushButton *lpdaButton;
    QPushButton *dipoleButton;
    QPushButton *patchButton;
    QLabel *selectLabel;
    void setupUI();
    Ui::Dialog *ui;





};

#endif // CALCULATORWINDOW_H
