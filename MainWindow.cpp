#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "OpenGLWidget.h"
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	OpenGLWidget* openGLWidget = new OpenGLWidget();
	//为了便于让OpenGLWidget自动填充父窗口，这里为父窗口设置了一个布局
	QVBoxLayout* centralLayout = new QVBoxLayout();
	centralLayout->addWidget(openGLWidget);
	ui->centralWidget->setLayout(centralLayout);
}

MainWindow::~MainWindow()
{
  delete ui;
}
