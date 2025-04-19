#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTranslator>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    // void switchLanguage(const QString &Language);

protected:
    // void changeEvent(QEvent *event) override;

private slots:
    void onCalculatorButtonClicked();
    void onCreditsButtonClicked();
    void onOptionsButtonClicked();
    void onExitButtonClicked();

private:
    Ui::MainWindow *ui;
    QTranslator translator;
};
#endif // MAINWINDOW_H
