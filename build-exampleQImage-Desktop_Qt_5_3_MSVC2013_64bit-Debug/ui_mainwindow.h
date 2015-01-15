/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_image1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_image2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLabel *label_image3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLabel *label_image4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QLabel *label_image5;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QLabel *label_image6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1438, 797);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 0, 1451, 821));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_image1 = new QLabel(layoutWidget);
        label_image1->setObjectName(QStringLiteral("label_image1"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_image1->sizePolicy().hasHeightForWidth());
        label_image1->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label_image1);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_image2 = new QLabel(layoutWidget);
        label_image2->setObjectName(QStringLiteral("label_image2"));
        sizePolicy.setHeightForWidth(label_image2->sizePolicy().hasHeightForWidth());
        label_image2->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(label_image2);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        label_image3 = new QLabel(layoutWidget);
        label_image3->setObjectName(QStringLiteral("label_image3"));
        sizePolicy.setHeightForWidth(label_image3->sizePolicy().hasHeightForWidth());
        label_image3->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label_image3);


        gridLayout->addLayout(verticalLayout_3, 0, 2, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_4->addWidget(label_4);

        label_image4 = new QLabel(layoutWidget);
        label_image4->setObjectName(QStringLiteral("label_image4"));
        sizePolicy.setHeightForWidth(label_image4->sizePolicy().hasHeightForWidth());
        label_image4->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(label_image4);


        gridLayout->addLayout(verticalLayout_4, 1, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_5->addWidget(label_5);

        label_image5 = new QLabel(layoutWidget);
        label_image5->setObjectName(QStringLiteral("label_image5"));
        sizePolicy.setHeightForWidth(label_image5->sizePolicy().hasHeightForWidth());
        label_image5->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(label_image5);


        gridLayout->addLayout(verticalLayout_5, 1, 1, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_6->addWidget(label_6);

        label_image6 = new QLabel(layoutWidget);
        label_image6->setObjectName(QStringLiteral("label_image6"));
        sizePolicy.setHeightForWidth(label_image6->sizePolicy().hasHeightForWidth());
        label_image6->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(label_image6);


        gridLayout->addLayout(verticalLayout_6, 1, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1438, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "1 jpg ", 0));
        label_image1->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_2->setText(QApplication::translate("MainWindow", "2 png", 0));
        label_image2->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_3->setText(QApplication::translate("MainWindow", "3 monochrom bit map .bmp  ", 0));
        label_image3->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_4->setText(QApplication::translate("MainWindow", "4 256 Color Bitmap .bmp", 0));
        label_image4->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_5->setText(QApplication::translate("MainWindow", "5 grayScaleImage from matrix", 0));
        label_image5->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_6->setText(QApplication::translate("MainWindow", "6 jpg -> matrix -> grayscale ", 0));
        label_image6->setText(QApplication::translate("MainWindow", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
