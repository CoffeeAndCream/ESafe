#ifndef SAFETYWIDGET_H
#define SAFETYWIDGET_H
#include "ui_safetyform.h"
#include <QWidget>

namespace Ui {
class SafetyWidget;
}

class SafetyWidget : public QWidget{
    Q_OBJECT
public:
    explicit SafetyWidget(QWidget *parent = 0);
    ~SafetyWidget();
private:
    Ui::SafetyForm *ui;
};

#endif // SAFETYWIDGET_H
