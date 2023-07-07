#include <QPushButton>
#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPushButton button;
    PageHome homepage = new PageHome(this);
    this->ui->mainframe_tab->addTab(PageHome, "HomePage");
}

MainWindow::~MainWindow()
{
    delete ui;
}

