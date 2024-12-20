// LoginDialog.cpp
#include "LoginDialog.h"
#include "ui_Logindialog.h"
#include <QMessageBox>

LoginDialog::LoginDialog(QWidget* parent) : QDialog(parent), ui(new Ui::LoginDialog) {
    ui->setupUi(this);
    connect(ui->loginButton, &QPushButton::clicked, this, &LoginDialog::onLoginButtonClicked);
    connect(ui->signupButton, &QPushButton::clicked, this, &LoginDialog::onSignupButtonClicked);
}

LoginDialog::~LoginDialog() {
    delete ui;
}

void LoginDialog::onLoginButtonClicked() {
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if (users.isUserExist(username, password)) {
        QMessageBox::information(this, "Login", "Login Successful!");
        // Redirect to the main page or dashboard
    } else {
        QMessageBox::warning(this, "Login", "Invalid Username or Password!");
    }
}

void LoginDialog::onSignupButtonClicked() {
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    // If username already exists, show a warning
    if (users.isUserExist(username, password)) {
        QMessageBox::warning(this, "Signup", "Username already exists.");
    } else {
        users.addUser(username, password);
        QMessageBox::information(this, "Signup", "Account created successfully.");
    }
}
