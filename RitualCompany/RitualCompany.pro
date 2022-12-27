TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    product.cpp \
    productlist.cpp \
    productinputscreen.cpp \
    revenuerow.cpp \
    revenuerecord.cpp \
    sellsinputscreen.cpp \
    expenserecord.cpp \
    expenseinputscreen.cpp \
    annualreport.cpp \
    userinterface.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    product.h \
    productlist.h \
    productinputscreen.h \
    revenuerow.h \
    revenuerecord.h \
    sellsinputscreen.h \
    expense.h \
    expenserecord.h \
    expenseinputscreen.h \
    annualreport.h \
    userinterface.h

