#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QImage>
#include <QDebug>

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <math.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setGeometry(50,50,1700,900);

    QImage myImage;

    //Image 1
    //#######################################################

    myImage.load("jpg.jpg");
    //is really copying the image
    ui->label_image1->setPixmap(QPixmap::fromImage(myImage));
    ui->label_image1->show();

    //Image 2
    //#######################################################

    myImage.load("png.png");
    ui->label_image2->setPixmap(QPixmap::fromImage(myImage));
    ui->label_image2->show();


    //Image 3
    //#######################################################

    myImage.load("monochromBitMap.bmp");
    ui->label_image3->setPixmap(QPixmap::fromImage(myImage));
    ui->label_image3->show();


    //Image 4
    //#######################################################

    {
        using namespace std;

        string name = "grayValues.txt";
        fstream f;
        f << fixed;

        f.open(name, fstream::out | fstream::trunc); //Empty file
        f.close();
        f.open(name, fstream::out | fstream::app);

        myImage.load("jpg.jpg");
        QRgb grayColor;

        for(int x = 0; x < myImage.width(); x++)
        {
            for(int y = 0; y < myImage.height(); y++)
            {
                grayColor = qGray(myImage.pixel(x,y));
                myImage.setPixel(x,y,qRgb(grayColor,grayColor,grayColor));

                f << grayColor<<"\t";
            }

            f<<endl;
        }

        f.close();
    }

    ui->label_image4->setPixmap(QPixmap::fromImage(myImage));
    ui->label_image4->show();



    //Image 5
    //#######################################################


    //http://stackoverflow.com/questions/184537/in-what-cases-do-i-use-malloc-vs-new
    //http://stackoverflow.com/questions/1598397/creating-array-of-objects-on-the-stack-and-heap

    //the computer screen can (of course) only display rgb colors

    //initialize matrix. vector is automatically initialized on the heap.
    //Using for example an array on the stack, would probably cause a stack overflow and the program crashes.
    std::vector<std::vector<int>> matrix(512,std::vector<int>(512));

    qDebug()<<matrix.size();
    qDebug()<<matrix[0].size();

    for(int x = 0; x < matrix[0].size(); x++)
    {
        for(int y = 0; y < matrix.size(); y++)
        {
            matrix[y][x]=x*255/matrix[0].size();
            //matrix[y][x]=255*exp(-0.0001*(x-matrix[0].size()/2.0)*(x-matrix[0].size()/2.0)-0.001*(y-matrix.size()/2.0)*(y-matrix.size()/2.0));
        }
    }


    QImage imageFromMatrix = QImage(matrix[0].size(),matrix.size(),QImage::Format_RGB888);

    for(int x = 0; x < matrix[0].size(); x++)
    {
        for(int y = 0; y < matrix.size() ; y++)
        {
            imageFromMatrix.setPixel(x,y,qRgb(matrix[y][x],matrix[y][x],matrix[y][x]));
        }
    }

    ui->label_image5->setPixmap(QPixmap::fromImage(imageFromMatrix));
    ui->label_image5->show();

    //just for education

    QImage imageFromMatrixQtRGB32 = QImage(matrix.size(),matrix[0].size(),QImage::Format_RGB32);

    for(int x = 0; x < matrix[0].size(); x++)
    {
        for(int y = 0; y < matrix.size() ; y++)
        {
            imageFromMatrixQtRGB32.setPixel(x,y,qRgb(matrix[y][x],matrix[y][x],matrix[y][x]));
        }
    }

    qDebug()<<"imageFromMatrix :: "         <<imageFromMatrix.byteCount();
    qDebug()<<"imageFromMatrixQtRGB32 :: "  <<imageFromMatrixQtRGB32.byteCount();

    //Image 6
    //###################################################################################
    /// Here we generate the gray scale values of an RGB image and copy them to a matrix.
    /// Then we turn the matrix into a RGB image again and display it.


        myImage.load("jpg.jpg");

        matrix.resize(myImage.height());
        //each element of the vector has to get resized
        for(int i = 0; i<matrix.size() ; i++)
            matrix[i].resize(myImage.width());


        qDebug()<<matrix[0].size();
        qDebug()<<matrix.size();

        for(int x = 0; x < myImage.width(); x++)
        {
            for(int y = 0; y < myImage.height(); y++)
            {
                matrix[y][x] = qGray(myImage.pixel(x,y));
            }
        }


        imageFromMatrix = QImage(matrix[0].size(),matrix.size(),QImage::Format_RGB888);

        qDebug()<<imageFromMatrix.width();
        qDebug()<<imageFromMatrix.height();


    for(int x = 0; x < myImage.width(); x++)
    {
        for(int y = 0; y < myImage.height() ; y++)
        {
            imageFromMatrix.setPixel(x,y,qRgb(matrix[y][x],matrix[y][x],matrix[y][x]));
        }
    }

    QGraphicsScene * scene = new QGraphicsScene(this);
    QGraphicsView * view = ui->graphicsView;
    view->setScene(scene);

    scene->addPixmap(QPixmap::fromImage(imageFromMatrix));


    qDebug()<<sizeof(unsigned int); //4Byte on my computer
}

MainWindow::~MainWindow()
{
    delete ui;
}
