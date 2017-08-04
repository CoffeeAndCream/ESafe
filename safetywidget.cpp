#include "safetywidget.h"

SafetyWidget::SafetyWidget(QWidget *parent) : QWidget(parent) {
    ui->setupUi(this);
}

SafetyWidget::~SafetyWidget() {
    delete ui;
}
