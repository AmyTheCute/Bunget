#include "Page_Home.h"
#include "./ui_Page_Home.h"

PageHome::PageHome(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Page_Home)
{
    ui->setupUi(this);
}

PageHome::~PageHome()
{
    delete ui;
}

