#include "Page_Home.h"
#include "./ui_Page_Home.h"

PageHome::PageHome(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PageHome)
{
    ui->setupUi(this);
}

PageHome::~PageHome()
{
    delete ui;
}

