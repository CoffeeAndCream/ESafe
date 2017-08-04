#include <QLabel>
#include <QApplication>
#include "turtle.h"

int main (int argc, char **argv) {
    QApplication app(argc,argv);
    Turtle turtle_dude;
    QImage *turtle = new QImage(":/Resources/Edu.png");
    *turtle = turtle->scaled(200, 200, Qt::KeepAspectRatio);
    turtle_dude.setAttribute(Qt::WA_NoSystemBackground);
    turtle_dude.setAttribute(Qt::WA_TranslucentBackground);
    turtle_dude.setPixmap(QPixmap::fromImage(*turtle));
    turtle_dude.show();
    delete turtle;
    return app.exec();
}
