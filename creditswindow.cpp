#include "creditswindow.h"
#include <QPixmap>
#include <QDesktopServices>
#include <QUrl>
CreditsWindow::CreditsWindow(QWidget *parent): QDialog(parent) {
    setupUI();
    setWindowTitle(tr("Credits"));
    setFixedSize(1280, 720);
}


CreditsWindow::~CreditsWindow() {}

void CreditsWindow::setupUI() {
    QVBoxLayout *mainLayout = new QVBoxLayout(this);

    logoLabel = new QLabel(this);
    // QPixmap pixmap(":/images/PUT.png");
    QPixmap pixmap(":/images/PUT.png");
    if (pixmap.isNull()) {
        qDebug() << "Nie udało się załadować obrazu!";
        // Obsłuż błąd
    } else {
        // Teraz bezpiecznie możesz używać pixmap.scaled()
        // QPixmap scaledPixmap = pixmap.scaled(width, height);
    }

    logoLabel->setPixmap(pixmap.scaled(200,100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
    logoLabel->setAlignment(Qt::AlignCenter);
    /* kiedys reszte tutaj dopisze */

    closeButton = new QPushButton(tr("Close"), this);
    connect(closeButton, &QPushButton::clicked, this, &QDialog::accept);

    mainLayout->addWidget(logoLabel);
    mainLayout->addWidget(closeButton);

    setLayout(mainLayout);

}
