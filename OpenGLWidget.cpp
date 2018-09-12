

#include <qopenglext.h>
#include "OpenGLWidget.h"

OpenGLWidget::OpenGLWidget(QWidget* parent /*= nullptr*/) : QOpenGLWidget(parent)
{

}

void OpenGLWidget::initializeGL()
{
	initializeOpenGLFunctions();
}

void OpenGLWidget::resizeGL(int w, int h)
{
	glViewport(0, 0, w, h);
}

void OpenGLWidget::paintGL()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(.0, .0, .0, .0); GL_BGR;
}
