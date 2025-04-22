#ifndef DIPOLE_WINDOW_H
#define DIPOLE_WINDOW_H
#include <QLabel>
#include <QDialog>
#include <QPushButton>
// #include "
#include "./ui_
QT_BEGIN_NAMESPACE
namespace Ui {
class Dipole_Window;
}
QT_END_NAMESPACE

class Dipole_Window : public QDialog
{
    Q_OBJECT
public:
    explicit Dipole_Window(QWidget *parent = nullptr);
    ~Dipole_Window();

private slots:
    void onCalculateDipoleClicked();
    void insertLenght();
private:
    QPushButton *calculateDipoleButton();
    void setupUI();
    Ui::Dialog *ui;
    QLabel *selectLabel;
};

#endif // DIPOLE_WINDOW_H
