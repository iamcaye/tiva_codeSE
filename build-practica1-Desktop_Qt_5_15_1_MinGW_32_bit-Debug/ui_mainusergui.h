/********************************************************************************
** Form generated from reading UI file 'mainusergui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINUSERGUI_H
#define UI_MAINUSERGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "analogwidgets/led.h"
#include "color_wheel.hpp"
#include "qwt_knob.h"
#include "qwt_text_label.h"

QT_BEGIN_NAMESPACE

class Ui_MainUserGUI
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QSplitter *splitter_2;
    QCheckBox *rojo;
    QCheckBox *verde;
    QCheckBox *azul;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QwtKnob *Knob;
    QLabel *label_2;
    color_widgets::ColorWheel *colorWheel;
    QWidget *tab_2;
    QPushButton *ADCButton;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLCDNumber *lcdCh1;
    QLCDNumber *lcdCh3;
    QLCDNumber *lcdCh2;
    QLCDNumber *lcdCh4;
    QWidget *tab_3;
    QWidget *gridLayoutWidget;
    QGridLayout *left_button;
    Led *left_button_led;
    QLabel *label_3;
    QWidget *gridLayoutWidget_2;
    QGridLayout *right_button;
    Led *right_button_led;
    QLabel *label_4;
    QPushButton *SondeoBTN;
    Led *sondeo_left;
    Led *sondeo_right;
    QwtTextLabel *sondeo_left_text;
    QwtTextLabel *sondeo_right_text;
    QSplitter *splitter_4;
    QSplitter *splitter;
    QLabel *serialPortLabel;
    QComboBox *serialPortComboBox;
    QSplitter *splitter_3;
    QPushButton *runButton;
    QPushButton *pingButton;
    QSplitter *splitter_5;
    QPushButton *pushButton;
    QLabel *statusLabel;

    void setupUi(QWidget *MainUserGUI)
    {
        if (MainUserGUI->objectName().isEmpty())
            MainUserGUI->setObjectName(QString::fromUtf8("MainUserGUI"));
        MainUserGUI->resize(708, 468);
        tabWidget = new QTabWidget(MainUserGUI);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 40, 711, 391));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        splitter_2 = new QSplitter(tab);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(60, 80, 97, 66));
        splitter_2->setOrientation(Qt::Vertical);
        rojo = new QCheckBox(splitter_2);
        rojo->setObjectName(QString::fromUtf8("rojo"));
        splitter_2->addWidget(rojo);
        verde = new QCheckBox(splitter_2);
        verde->setObjectName(QString::fromUtf8("verde"));
        splitter_2->addWidget(verde);
        azul = new QCheckBox(splitter_2);
        azul->setObjectName(QString::fromUtf8("azul"));
        splitter_2->addWidget(azul);
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(360, 40, 171, 243));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        Knob = new QwtKnob(layoutWidget);
        Knob->setObjectName(QString::fromUtf8("Knob"));
        Knob->setUpperBound(1.000000000000000);
        Knob->setValue(0.500000000000000);
        Knob->setSingleSteps(0u);
        Knob->setPageSteps(10u);

        gridLayout->addWidget(Knob, 1, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        colorWheel = new color_widgets::ColorWheel(layoutWidget);
        colorWheel->setObjectName(QString::fromUtf8("colorWheel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(colorWheel->sizePolicy().hasHeightForWidth());
        colorWheel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(colorWheel, 0, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        ADCButton = new QPushButton(tab_2);
        ADCButton->setObjectName(QString::fromUtf8("ADCButton"));
        ADCButton->setGeometry(QRect(260, 170, 75, 23));
        layoutWidget1 = new QWidget(tab_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(160, 30, 271, 131));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        lcdCh1 = new QLCDNumber(layoutWidget1);
        lcdCh1->setObjectName(QString::fromUtf8("lcdCh1"));
        lcdCh1->setFrameShape(QFrame::Box);
        lcdCh1->setFrameShadow(QFrame::Plain);
        lcdCh1->setSmallDecimalPoint(false);
        lcdCh1->setDigitCount(5);
        lcdCh1->setSegmentStyle(QLCDNumber::Flat);
        lcdCh1->setProperty("value", QVariant(0.000000000000000));

        gridLayout_2->addWidget(lcdCh1, 0, 0, 1, 1);

        lcdCh3 = new QLCDNumber(layoutWidget1);
        lcdCh3->setObjectName(QString::fromUtf8("lcdCh3"));
        lcdCh3->setFrameShape(QFrame::Box);
        lcdCh3->setFrameShadow(QFrame::Plain);
        lcdCh3->setSmallDecimalPoint(false);
        lcdCh3->setDigitCount(5);
        lcdCh3->setSegmentStyle(QLCDNumber::Flat);
        lcdCh3->setProperty("value", QVariant(0.000000000000000));

        gridLayout_2->addWidget(lcdCh3, 0, 1, 1, 1);

        lcdCh2 = new QLCDNumber(layoutWidget1);
        lcdCh2->setObjectName(QString::fromUtf8("lcdCh2"));
        lcdCh2->setFrameShape(QFrame::Box);
        lcdCh2->setFrameShadow(QFrame::Plain);
        lcdCh2->setSmallDecimalPoint(false);
        lcdCh2->setDigitCount(5);
        lcdCh2->setSegmentStyle(QLCDNumber::Flat);
        lcdCh2->setProperty("value", QVariant(0.000000000000000));

        gridLayout_2->addWidget(lcdCh2, 1, 0, 1, 1);

        lcdCh4 = new QLCDNumber(layoutWidget1);
        lcdCh4->setObjectName(QString::fromUtf8("lcdCh4"));
        lcdCh4->setFrameShape(QFrame::Box);
        lcdCh4->setFrameShadow(QFrame::Plain);
        lcdCh4->setSmallDecimalPoint(false);
        lcdCh4->setDigitCount(5);
        lcdCh4->setSegmentStyle(QLCDNumber::Flat);
        lcdCh4->setProperty("value", QVariant(0.000000000000000));

        gridLayout_2->addWidget(lcdCh4, 1, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayoutWidget = new QWidget(tab_3);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 10, 131, 41));
        left_button = new QGridLayout(gridLayoutWidget);
        left_button->setSpacing(6);
        left_button->setContentsMargins(11, 11, 11, 11);
        left_button->setObjectName(QString::fromUtf8("left_button"));
        left_button->setContentsMargins(0, 0, 0, 0);
        left_button_led = new Led(gridLayoutWidget);
        left_button_led->setObjectName(QString::fromUtf8("left_button_led"));
        left_button_led->setEnabled(true);
        left_button_led->setChecked(false);

        left_button->addWidget(left_button_led, 0, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        left_button->addWidget(label_3, 0, 1, 1, 1);

        gridLayoutWidget_2 = new QWidget(tab_3);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(170, 10, 131, 41));
        right_button = new QGridLayout(gridLayoutWidget_2);
        right_button->setSpacing(6);
        right_button->setContentsMargins(11, 11, 11, 11);
        right_button->setObjectName(QString::fromUtf8("right_button"));
        right_button->setContentsMargins(0, 0, 0, 0);
        right_button_led = new Led(gridLayoutWidget_2);
        right_button_led->setObjectName(QString::fromUtf8("right_button_led"));
        right_button_led->setEnabled(true);
        right_button_led->setChecked(false);

        right_button->addWidget(right_button_led, 0, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        right_button->addWidget(label_4, 0, 1, 1, 1);

        SondeoBTN = new QPushButton(tab_3);
        SondeoBTN->setObjectName(QString::fromUtf8("SondeoBTN"));
        SondeoBTN->setGeometry(QRect(510, 80, 93, 28));
        sondeo_left = new Led(tab_3);
        sondeo_left->setObjectName(QString::fromUtf8("sondeo_left"));
        sondeo_left->setGeometry(QRect(520, 40, 31, 31));
        sondeo_left->setChecked(false);
        sondeo_right = new Led(tab_3);
        sondeo_right->setObjectName(QString::fromUtf8("sondeo_right"));
        sondeo_right->setGeometry(QRect(570, 40, 31, 31));
        sondeo_right->setChecked(false);
        sondeo_left_text = new QwtTextLabel(tab_3);
        sondeo_left_text->setObjectName(QString::fromUtf8("sondeo_left_text"));
        sondeo_left_text->setGeometry(QRect(470, 10, 100, 20));
        sondeo_right_text = new QwtTextLabel(tab_3);
        sondeo_right_text->setObjectName(QString::fromUtf8("sondeo_right_text"));
        sondeo_right_text->setGeometry(QRect(550, 10, 100, 20));
        tabWidget->addTab(tab_3, QString());
        splitter_4 = new QSplitter(MainUserGUI);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setGeometry(QRect(20, 10, 641, 23));
        splitter_4->setOrientation(Qt::Horizontal);
        splitter = new QSplitter(splitter_4);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        serialPortLabel = new QLabel(splitter);
        serialPortLabel->setObjectName(QString::fromUtf8("serialPortLabel"));
        serialPortLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        splitter->addWidget(serialPortLabel);
        serialPortComboBox = new QComboBox(splitter);
        serialPortComboBox->setObjectName(QString::fromUtf8("serialPortComboBox"));
        splitter->addWidget(serialPortComboBox);
        splitter_4->addWidget(splitter);
        splitter_3 = new QSplitter(splitter_4);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        runButton = new QPushButton(splitter_3);
        runButton->setObjectName(QString::fromUtf8("runButton"));
        splitter_3->addWidget(runButton);
        pingButton = new QPushButton(splitter_3);
        pingButton->setObjectName(QString::fromUtf8("pingButton"));
        splitter_3->addWidget(pingButton);
        splitter_4->addWidget(splitter_3);
        splitter_5 = new QSplitter(MainUserGUI);
        splitter_5->setObjectName(QString::fromUtf8("splitter_5"));
        splitter_5->setGeometry(QRect(0, 440, 691, 23));
        splitter_5->setOrientation(Qt::Horizontal);
        pushButton = new QPushButton(splitter_5);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        splitter_5->addWidget(pushButton);
        statusLabel = new QLabel(splitter_5);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        splitter_5->addWidget(statusLabel);
        QWidget::setTabOrder(serialPortComboBox, pingButton);
        QWidget::setTabOrder(pingButton, runButton);

        retranslateUi(MainUserGUI);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainUserGUI);
    } // setupUi

    void retranslateUi(QWidget *MainUserGUI)
    {
        MainUserGUI->setWindowTitle(QCoreApplication::translate("MainUserGUI", "GUIPanel", nullptr));
        rojo->setText(QCoreApplication::translate("MainUserGUI", "Rojo", nullptr));
        verde->setText(QCoreApplication::translate("MainUserGUI", "Verde", nullptr));
        azul->setText(QCoreApplication::translate("MainUserGUI", "Azul", nullptr));
        label->setText(QCoreApplication::translate("MainUserGUI", "Color", nullptr));
        label_2->setText(QCoreApplication::translate("MainUserGUI", "Brillo", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainUserGUI", "LEDs", nullptr));
        ADCButton->setText(QCoreApplication::translate("MainUserGUI", "LeeADC", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainUserGUI", "ADC", nullptr));
#if QT_CONFIG(tooltip)
        left_button_led->setToolTip(QCoreApplication::translate("MainUserGUI", "Color Led component", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        left_button_led->setWhatsThis(QCoreApplication::translate("MainUserGUI", "Led indicator", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_3->setText(QCoreApplication::translate("MainUserGUI", "LEFT_BUTTON", nullptr));
#if QT_CONFIG(tooltip)
        right_button_led->setToolTip(QCoreApplication::translate("MainUserGUI", "Color Led component", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        right_button_led->setWhatsThis(QCoreApplication::translate("MainUserGUI", "Led indicator", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_4->setText(QCoreApplication::translate("MainUserGUI", "RIGHT_BUTTON", nullptr));
        SondeoBTN->setText(QCoreApplication::translate("MainUserGUI", "PushButton", nullptr));
#if QT_CONFIG(tooltip)
        sondeo_left->setToolTip(QCoreApplication::translate("MainUserGUI", "Color Led component", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        sondeo_left->setWhatsThis(QCoreApplication::translate("MainUserGUI", "Led indicator", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        sondeo_right->setToolTip(QCoreApplication::translate("MainUserGUI", "Color Led component", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        sondeo_right->setWhatsThis(QCoreApplication::translate("MainUserGUI", "Led indicator", nullptr));
#endif // QT_CONFIG(whatsthis)
        sondeo_left_text->setPlainText(QCoreApplication::translate("MainUserGUI", "LEFT BTN", nullptr));
        sondeo_right_text->setPlainText(QCoreApplication::translate("MainUserGUI", "RIGHT BTN", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainUserGUI", "Otro tab", nullptr));
        serialPortLabel->setText(QCoreApplication::translate("MainUserGUI", "Puerto Serie:", nullptr));
        runButton->setText(QCoreApplication::translate("MainUserGUI", "Inicio", nullptr));
        pingButton->setText(QCoreApplication::translate("MainUserGUI", "Ping", nullptr));
        pushButton->setText(QCoreApplication::translate("MainUserGUI", "Estado:", nullptr));
        statusLabel->setText(QCoreApplication::translate("MainUserGUI", "Detenido", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainUserGUI: public Ui_MainUserGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINUSERGUI_H
