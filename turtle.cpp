#include "turtle.h"
#include <QDebug>
#include <QMouseEvent>
#include <QGraphicsOpacityEffect>
#include <QPropertyAnimation>
#include <QThread>


Turtle::Turtle(QWidget* parent, Qt::WindowFlags f)
    : QLabel(parent) {
    setWindowFlags( Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    setMouseTracking(true); // this is how we know when the Turtle is being hovered over
}

Turtle::~Turtle() {
}

void Turtle::mousePressEvent(QMouseEvent* event) {
    // tracks when Turtle is clicked
    emit clicked();
    offset = event->pos();
    qDebug() << "Turtle wants to move";
}

void Turtle::mouseMoveEvent(QMouseEvent* event) {
    // tracks dragging the turtle
    if(event->buttons() & Qt::LeftButton) {
        safety_window.hide();
        this->move(mapToParent(event->pos() - offset));
    }
}

void Turtle::mouseDoubleClickEvent(QMouseEvent* event) {
    safety_window.show();
}

void Turtle::leaveEvent(QEvent *event) {
    // unused function
}

void Turtle::enterEvent(QEvent *event) {
    //safety_window.show();
}
