#ifndef CHATBUTTON_H
#define CHATBUTTON_H

#include <QWidget>

namespace Ui {
class ChatButton;
}

class ChatButton : public QWidget
{
    Q_OBJECT

public:
    explicit ChatButton(QWidget *parent = nullptr);
    ~ChatButton();

private:
    Ui::ChatButton *ui;
};

#endif // CHATBUTTON_H
