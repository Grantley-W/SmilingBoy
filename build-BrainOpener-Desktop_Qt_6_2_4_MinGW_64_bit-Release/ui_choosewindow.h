/********************************************************************************
** Form generated from reading UI file 'choosewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEWINDOW_H
#define UI_CHOOSEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChooseWindow
{
public:
    QAction *actionClose_Choose;
    QAction *actionAbout_Choose;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGraphicsView *graphicsView;
    QVBoxLayout *verticalLayout;
    QLCDNumber *lcdNumber;
    QSpacerItem *verticalSpacer;
    QPushButton *StartGame;
    QSpacerItem *verticalSpacer_3;
    QPushButton *EndGame;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *ChooseWindow)
    {
        if (ChooseWindow->objectName().isEmpty())
            ChooseWindow->setObjectName(QString::fromUtf8("ChooseWindow"));
        ChooseWindow->resize(960, 640);
        ChooseWindow->setMinimumSize(QSize(960, 640));
        ChooseWindow->setMaximumSize(QSize(960, 640));
        ChooseWindow->setCursor(QCursor(Qt::CrossCursor));
        actionClose_Choose = new QAction(ChooseWindow);
        actionClose_Choose->setObjectName(QString::fromUtf8("actionClose_Choose"));
        actionAbout_Choose = new QAction(ChooseWindow);
        actionAbout_Choose->setObjectName(QString::fromUtf8("actionAbout_Choose"));
        centralwidget = new QWidget(ChooseWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        horizontalLayout->addWidget(graphicsView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        verticalLayout->addWidget(lcdNumber);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        StartGame = new QPushButton(centralwidget);
        StartGame->setObjectName(QString::fromUtf8("StartGame"));

        verticalLayout->addWidget(StartGame);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        EndGame = new QPushButton(centralwidget);
        EndGame->setObjectName(QString::fromUtf8("EndGame"));

        verticalLayout->addWidget(EndGame);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout);

        ChooseWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ChooseWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 960, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        ChooseWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionClose_Choose);
        menu->addSeparator();
        menu->addAction(actionAbout_Choose);

        retranslateUi(ChooseWindow);
        QObject::connect(actionClose_Choose, &QAction::triggered, ChooseWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(ChooseWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ChooseWindow)
    {
        ChooseWindow->setWindowTitle(QCoreApplication::translate("ChooseWindow", "\347\201\253\345\212\233\345\205\250\345\274\200\357\274\201", nullptr));
        actionClose_Choose->setText(QCoreApplication::translate("ChooseWindow", "\351\200\200\345\207\272", nullptr));
        actionAbout_Choose->setText(QCoreApplication::translate("ChooseWindow", "\345\205\263\344\272\216", nullptr));
        StartGame->setText(QCoreApplication::translate("ChooseWindow", "\345\274\200\345\247\213", nullptr));
        EndGame->setText(QCoreApplication::translate("ChooseWindow", "\345\201\234\346\255\242", nullptr));
        menu->setTitle(QCoreApplication::translate("ChooseWindow", "\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseWindow: public Ui_ChooseWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEWINDOW_H
