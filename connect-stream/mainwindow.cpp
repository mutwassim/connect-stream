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

    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::on_pushButton_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

    QString name[] = {"abc", "def", "ghi"};
    QString password[] = {"123", "123", "123"};


    QString uName = ui->lineEdit->text();
    QString uPassword = ui->lineEdit_2->text();


    if (uName.isEmpty() || uPassword.isEmpty()) {
        QMessageBox::information(this, "Error", "Please enter both username and password.");
        return;
    }

    bool found = false;
    int arraySize = sizeof(name) / sizeof(name[0]);


    for (int i = 0; i < arraySize; ++i) {
        if (uName == name[i] && uPassword == password[i]) {
            QMessageBox::information(this, "Welcome", "User: " + uName + "\nWelcome to the logging management system");
            found = true;
            break;
        }
    }


    if (!found) {
        QMessageBox::information(this, "Error", "Invalid username or password.");
    }
}
