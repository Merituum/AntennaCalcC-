#ifndef CREDITSWINDOW_H
#define CREDITSWINDOW_H
#include <QDialog>
#include <QLabel>
#include <QVBoxLayout>
#include <QPushButton>
// #include <QTranslate>
class CreditsWindow : public QDialog
{    Q_OBJECT

public:
    explicit CreditsWindow(QWidget *parent = nullptr);
    ~CreditsWindow();
private:
    QLabel *logoLabel;
    QLabel *githubLabel;
    QLabel *linkedinLabel;
    QPushButton *closeButton;
    void setupUI();
};

#endif // CREDITSWINDOW_H
