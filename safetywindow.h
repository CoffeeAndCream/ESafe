#ifndef SAFETYWINDOW_H
#define SAFETYWINDOW_H
#include "ui_safetyform.h"
#include "ui_screencover.h"
#include <QObject>
#include <QWidget>

class SafetyWindow : public QWidget
{
    Q_OBJECT
public:
    explicit SafetyWindow(QWidget *parent = 0);
    ~SafetyWindow();

signals:

public slots:

private slots:
    void on_CancelButton_clicked();

    void on_ScreenCoverButton_clicked();

private:
    Ui::SafetyForm safety_ui;
    Ui::ScreenCover screencover_ui;
    QDockWidget* screencover;
};

#endif // SAFETYWINDOW_H
