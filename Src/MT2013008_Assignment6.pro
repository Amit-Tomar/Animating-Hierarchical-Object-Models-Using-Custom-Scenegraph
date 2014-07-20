HEADERS       = \
                GLRenderer.h \
                Window.h \
    Quaternions.h \
    Scene.h \
    RobotBase.h \
    Transform.h \
    Node.h \
    RobotArm.h \
    Belt.h \
    TransformTypes.h \
    Box.h \
    Joint.h \
    BeltLining.h


SOURCES       = main.cpp \
                Window.cpp \
                GLRenderer.cpp \
    Quaternions.cpp \
    Scene.cpp \
    RobotBase.cpp \
    Transform.cpp \
    Node.cpp \
    RobotArm.cpp \
    Belt.cpp \
    Box.cpp \
    Joint.cpp \
    BeltLining.cpp


QT           += opengl widgets

LIBS += -lassimp -lGL -lGLU -lGLEW -lglut

OTHER_FILES += \
    vshader.glsl \
    fshader.glsl

INSTALLS += ../Build

