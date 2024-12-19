#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLabel>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);  // This sets up the UI defined in the .ui file

    // Create a new label
    QLabel *label = new QLabel("Hello, Qt!", this);

    // You can choose where to place it. Here we'll set it inside the central widget.
    QVBoxLayout *layout = new QVBoxLayout();  // Layout to arrange widgets
    layout->addWidget(label);  // Add the label to the layout

    // Set the layout for the central widget
    QWidget *centralWidget = new QWidget(this);
    centralWidget->setLayout(layout);
    setCentralWidget(centralWidget);  // Set the central widget with layout
}

MainWindow::~MainWindow()
{
    delete ui;
}
