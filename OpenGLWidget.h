#pragma once

#include <QOpenGLWidget>
#include <QOpenGLFunctions>

class OpenGLWidget 
	: public QOpenGLWidget
	, protected QOpenGLFunctions
{
public:
	OpenGLWidget(QWidget* parent = nullptr);

protected:
	virtual void initializeGL()override;
	virtual void resizeGL(int w, int h)override;
	virtual void paintGL()override;
};
