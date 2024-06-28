#include "mainwindow.h"
#include "baseclass.h"
#include "derivedclass.h"
#include "furtherderivedclass.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

void showUs(BaseClass a) {
    a.display();
}

void check() {
    FurtherDerivedClass a;
    showUs(a);
}
