#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_lab5.h"

class lab5 : public QMainWindow
{
    Q_OBJECT

public:
    lab5(QWidget *parent = nullptr);
    ~lab5();

private:
    Ui::lab5Class ui;
};

