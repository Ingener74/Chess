#include <iostream>

#include <QtWidgets/QApplication>
#include <QtWidgets/QMessageBox>

#include "ChessWindow.h"

using namespace std;

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    try
    {
        ChessWindow window;
        window.show();

        return app.exec();
    }
    catch (const exception& e)
    {
        QMessageBox::critical(nullptr, "Chess application", QString("Fatal error: %1").arg(e.what()));
    }
}