#include <QApplication>
#include <QDesktopWidget>
#include <QWidget>
#include <QPushButton>
#include "GLRenderer.h"
#include "Window.h"
#include <QFileDialog>
#include "Node.h"
#include "Scene.h"
#include "Transform.h"
#include "RobotArm.h"
#include "RobotBase.h"

QString fileName;

int main(int argc, char *argv[])
{
    glutInit(&argc, argv); //initialize glut
    QApplication app(argc, argv);
    Window window;
    window.resize(window.sizeHint());
    window.show();
    //window.glWidget->initShaders();
    return app.exec();
}
