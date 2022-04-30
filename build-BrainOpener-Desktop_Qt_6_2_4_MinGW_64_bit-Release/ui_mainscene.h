/********************************************************************************
** Form generated from reading UI file 'mainscene.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSCENE_H
#define UI_MAINSCENE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainScene
{
public:
    QAction *actionExit;
    QAction *actionAbout;
    QWidget *centralwidget;
    QLabel *gamename;
    QPushButton *StartButton;
    QPushButton *BackgroundStory;
    QLabel *label_2;
    QMenuBar *menubar;
    QMenu *About;

    void setupUi(QMainWindow *MainScene)
    {
        if (MainScene->objectName().isEmpty())
            MainScene->setObjectName(QString::fromUtf8("MainScene"));
        MainScene->resize(960, 640);
        MainScene->setMinimumSize(QSize(960, 640));
        MainScene->setMaximumSize(QSize(960, 640));
        MainScene->setCursor(QCursor(Qt::CrossCursor));
        MainScene->setMouseTracking(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../res/HappyDog.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainScene->setWindowIcon(icon);
        MainScene->setStyleSheet(QString::fromUtf8(""));
        actionExit = new QAction(MainScene);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionAbout = new QAction(MainScene);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralwidget = new QWidget(MainScene);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gamename = new QLabel(centralwidget);
        gamename->setObjectName(QString::fromUtf8("gamename"));
        gamename->setGeometry(QRect(10, 20, 341, 241));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gamename->sizePolicy().hasHeightForWidth());
        gamename->setSizePolicy(sizePolicy);
        gamename->setCursor(QCursor(Qt::CrossCursor));
        gamename->setTextFormat(Qt::RichText);
        gamename->setScaledContents(true);
        StartButton = new QPushButton(centralwidget);
        StartButton->setObjectName(QString::fromUtf8("StartButton"));
        StartButton->setGeometry(QRect(330, 70, 211, 171));
        StartButton->setStyleSheet(QString::fromUtf8("background:transparent"));
        StartButton->setFlat(true);
        BackgroundStory = new QPushButton(centralwidget);
        BackgroundStory->setObjectName(QString::fromUtf8("BackgroundStory"));
        BackgroundStory->setGeometry(QRect(730, 300, 171, 71));
        BackgroundStory->setFlat(false);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 450, 271, 91));
        MainScene->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainScene);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 960, 26));
        About = new QMenu(menubar);
        About->setObjectName(QString::fromUtf8("About"));
        MainScene->setMenuBar(menubar);

        menubar->addAction(About->menuAction());
        About->addAction(actionExit);
        About->addSeparator();
        About->addAction(actionAbout);

        retranslateUi(MainScene);
        QObject::connect(actionExit, &QAction::triggered, MainScene, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainScene);
    } // setupUi

    void retranslateUi(QMainWindow *MainScene)
    {
        MainScene->setWindowTitle(QCoreApplication::translate("MainScene", "\350\204\221\346\264\236\345\244\247\345\274\200\346\250\241\346\213\237\345\231\250-\347\210\261\347\254\221\347\232\204\347\224\267\345\255\251\350\277\220\346\260\224\344\270\215\344\274\232\345\244\252\345\267\256", nullptr));
        actionExit->setText(QCoreApplication::translate("MainScene", "\351\200\200\345\207\272", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainScene", "\345\205\263\344\272\216", nullptr));
        gamename->setText(QCoreApplication::translate("MainScene", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt; font-weight:700; color:#00aaff;\">\346\254\242\350\277\216\346\235\245\345\210\260</span></p><p align=\"center\"><span style=\" font-size:28pt; font-weight:700; color:#00aaff;\">\350\204\221\346\264\236\345\244\247\345\274\200\346\250\241\346\213\237\345\231\250</span></p></body></html>", nullptr));
        StartButton->setText(QString());
        BackgroundStory->setText(QCoreApplication::translate("MainScene", "\350\203\214\346\231\257\346\225\205\344\272\213", nullptr));
        label_2->setText(QCoreApplication::translate("MainScene", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700; color:#00ff00;\">\345\274\200\345\247\213\346\214\211\351\222\256\350\257\267\350\207\252\345\267\261\345\257\273\346\211\276</span></p></body></html>", nullptr));
        About->setTitle(QCoreApplication::translate("MainScene", "\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainScene: public Ui_MainScene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSCENE_H
