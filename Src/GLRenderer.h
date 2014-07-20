#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QGLWidget>
#include <QMatrix4x4>
#include <QVector2D>
#include <QGLShaderProgram>
#include "Quaternions.h"
#include "GL/freeglut.h"
#include "Node.h"
#include "Scene.h"
#include "Transform.h"
#include "RobotArm.h"
#include "RobotBase.h"
#include "Belt.h"
#include "Box.h"
#include "Joint.h"
#include "BeltLining.h"

class GLRenderer : public QGLWidget
{
    Q_OBJECT

public:
    GLRenderer(QWidget *parent = 0);
    ~GLRenderer();

    QSize minimumSizeHint() const;
    QSize sizeHint() const;
    void initShaders();

public slots:
    void setXRotation(int angle);
    void setYRotation(int angle);
    void setZRotation(int angle);
    void timerTriggered();


signals:
    void xRotationChanged(int angle);
    void yRotationChanged(int angle);
    void zRotationChanged(int angle);


protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int width, int height);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event) ;
    void keyPressEvent(QKeyEvent *);

private:
    int xRot;
    int yRot;
    int zRot;
    QPoint lastPos;
    QColor qtGreen;
    QColor qtPurple;
    float scale;
    float translateX;
    float translateY;
    float translateZ;
    float lightPositionX;
    float lightPositionY;
    float lightPositionZ;
    bool  lightMovementEnabled;

    Quaternions quaternion;
    QGLShaderProgram program;
    QTimer * timer;
};

#endif
