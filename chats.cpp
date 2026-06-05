#include "chats.h"
#include "ui_chats.h"

Chats::Chats(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Chats)
{
    ui->setupUi(this);


}

Chats::~Chats()
{
    delete ui;
}

void Chats::LoadChats(){

}
