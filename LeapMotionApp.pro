QT = core

CONFIG += c++17 cmdline

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += "C:\Users\Alejandro Cambronero\Documents\LeapMotionApp\LeapSDK\include"
#INCLUDEPATH += "C:\Users\Alejandro Cambronero\Documents\LeapMotionApp\LeapSDK\lib\x64"

#LIBS += "C:\Users\Alejandro Cambronero\Documents\LeapMotionApp\LeapSDK\lib\x64\Leap.lib"

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../LeapMotionApp/LeapSDK/lib/x64/ -lLeap
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../LeapMotionApp/LeapSDK/lib/x64/ -lLeap
else:unix: LIBS += -L$$PWD/../../../LeapMotionApp/LeapSDK/lib/x64/ -lLeap

INCLUDEPATH += $$PWD/../../../LeapMotionApp/LeapSDK/lib/x64
DEPENDPATH += $$PWD/../../../LeapMotionApp/LeapSDK/lib/x64

SOURCES += \
        lmchandler.cpp \
        main.cpp

HEADERS += \
    lmchandler.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target




