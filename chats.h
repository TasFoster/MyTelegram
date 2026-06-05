#ifndef CHATS_H
#define CHATS_H

#include <QWidget>
#include <vector>
#include "chatbutton.h"
#include "chat.h"

namespace Ui {
class Chats;
}

class Chats : public QWidget
{
    Q_OBJECT

public:
    explicit Chats(QWidget *parent = nullptr);
    ~Chats();

private:
    Ui::Chats *ui;
    void LoadChats();
    std::vector<Chat> ListChats;
};

#endif // CHATS_H
