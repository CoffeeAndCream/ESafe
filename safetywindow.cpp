#include "safetywindow.h"
#include <QDesktopWidget>
SafetyWindow::SafetyWindow(QWidget *parent) : QWidget(parent) {
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setGeometry(QStyle::alignedRect(Qt::LeftToRight, Qt::AlignCenter, this->size(), qApp->desktop()->availableGeometry()));
    safety_ui.setupUi(this);
}
SafetyWindow::~SafetyWindow() {
    delete screencover;
}

void SafetyWindow::on_CancelButton_clicked()
{
    this->hide();
}

void SafetyWindow::on_ScreenCoverButton_clicked()
{
    screencover = new QDockWidget();
    screencover_ui.setupUi(screencover);
    screencover->showFullScreen();
}
