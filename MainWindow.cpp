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
	//Ϊ�˱�����OpenGLWidget�Զ���丸���ڣ�����Ϊ������������һ������
	QVBoxLayout* centralLayout = new QVBoxLayout();
	centralLayout->addWidget(openGLWidget);
	ui->centralWidget->setLayout(centralLayout);
}

MainWindow::~MainWindow()
{
  delete ui;
}
