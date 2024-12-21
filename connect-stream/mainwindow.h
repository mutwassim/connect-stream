#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "LinkedList.h"
#include "Stack.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onLoginButtonClicked();

    void onSignupButtonClicked();

private:
    Ui::MainWindow *ui;
    LinkedList users;
    Stack navigationStack;
};
#endif // MAINWINDOW_H
