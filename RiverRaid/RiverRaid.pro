#-------------------------------------------------
#
# Project created by QtCreator 2017-02-04T17:20:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RiverRaid
TEMPLATE = app


SOURCES += main.cpp \
    player.cpp \
    gameengine.cpp \
    enemy.cpp \
    bullet.cpp \
    score.cpp \
    health.cpp \
    ship.cpp \
    enemyspawner.cpp \
    explosionhandler.cpp

HEADERS  += \
    player.h \
    gameengine.h \
    enemy.h \
    bullet.h \
    score.h \
    health.h \
    ship.h \
    enemyspawner.h \
    explosionhandler.h
FORMS    +=

RESOURCES += \
    res.qrc
