// LoginDialog.h
#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include "LinkedList.h"
#include "Stack.h"

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog {
    Q_OBJECT

public:
    explicit LoginDialog(QWidget* parent = nullptr);
    ~LoginDialog();

private slots:
    void onLoginButtonClicked();
    void onSignupButtonClicked();

private:
    Ui::LoginDialog *ui;
    LinkedList users;  // To store user data
    Stack navigationStack;  // To handle navigation history
};

#endif // LOGINDIALOG_H
