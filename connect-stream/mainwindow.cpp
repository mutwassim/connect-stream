#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::onLoginButtonClicked);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::onSignupButtonClicked);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onLoginButtonClicked()
{
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();

    if (users.isUserExist(username, password)) {
        QMessageBox::information(this, "Login", "Login Successful!");
        // Redirect to the main page or dashboard
    } else {
        QMessageBox::warning(this, "Login", "Invalid Username or Password!");
    }

    // QString name[] = {"abc", "def", "ghi"};
    // QString password[] = {"123", "123", "123"};


    // QString uName = ui->lineEdit->text();
    // QString uPassword = ui->lineEdit_2->text();


    // if (uName.isEmpty() || uPassword.isEmpty()) {
    //     QMessageBox::information(this, "Error", "Please enter both username and password.");
    //     return;
    // }

    // bool found = false;
    // int arraySize = sizeof(name) / sizeof(name[0]);


    // for (int i = 0; i < arraySize; ++i) {
    //     if (uName == name[i] && uPassword == password[i]) {
    //         QMessageBox::information(this, "Welcome", "User: " + uName + "\nWelcome to the logging management system");
    //         found = true;
    //         break;
    //     }
    // }


    // if (!found) {
    //     QMessageBox::information(this, "Error", "Invalid username or password.");
    // }
}

void MainWindow::onSignupButtonClicked()
{
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();

    // If username already exists, show a warning
    if (users.isUserExist(username, password)) {
        QMessageBox::warning(this, "Signup", "Username already exists.");
    } else {
        users.addUser(username, password);
        QMessageBox::information(this, "Signup", "Account created successfully.");
    }
}

