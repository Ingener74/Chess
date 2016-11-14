#pragma once

#include <memory>
#include <QtWidgets/QWidget>

class Ui_ChessWindow;

class ChessWindow: public QWidget
{
    Q_OBJECT
public:
    ChessWindow();
    virtual ~ChessWindow();

private:
    std::unique_ptr<Ui_ChessWindow> _ui;
};