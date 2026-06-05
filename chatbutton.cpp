#include "chatbutton.h"
#include "ui_chatbutton.h"

ChatButton::ChatButton(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ChatButton)
{
    ui->setupUi(this);
}

ChatButton::~ChatButton()
{
    delete ui;
}
