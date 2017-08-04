#ifndef TURTLE_H
#define TURTLE_H

#include <QLabel>
#include <QWidget>
#include <Qt>
#include "safetywindow.h"

class Turtle : public QLabel {
    Q_OBJECT

public:
    explicit Turtle(QWidget* parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags());
    ~Turtle();

public slots:

signals:
    void clicked();

protected:
    void mousePressEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);
    void mouseDoubleClickEvent(QMouseEvent* event);
    void enterEvent(QEvent*);
    void leaveEvent(QEvent*);

private slots:

private:
    QPoint offset;
    SafetyWindow safety_window;
};

#endif // TURTLE_H
