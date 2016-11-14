
#include <ui_mainwindow.h>
#include "ChessWindow.h"

ChessWindow::ChessWindow()
{
    _ui.reset(new Ui_ChessWindow);
    _ui->setupUi(this);
}

ChessWindow::~ChessWindow()
{
    
}

