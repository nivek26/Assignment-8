#include "fibonacci.h"
#include <QApplication>
#include <QTextEdit>

int main(int argc, char* argv[]){

    QApplication app(argc,argv);

    QList<int> list;
    fibonacci fib;
    fib.getSecquence(list);


    return app.exec();
}
