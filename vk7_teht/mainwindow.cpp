#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    qDebug()<<"MainWindow Constructor";
    ui->setupUi(this);
    gameTimer = new QTimer(this);   //luodaan kello
    qDebug()<<"Timer constructed";
    setGameInfoText("Select game time",20);
}

MainWindow::~MainWindow()
{
    delete ui;
    qDebug()<<"MainWindow Destructor";

    delete gameTimer;
    gameTimer = nullptr;  //tuhotaan kello D:
    qDebug()<<"Timer destructed";

}
void MainWindow::timeout_func()
{
    //qDebug()<<"timeout_func:";

//pelaaja 1
    if(currentPlayer == 1 && P1Time > 0){
        P1Time--;

        //jos pelin pituus 2min (gameLength[0])
        if(gameTime == gameLength[0]){
            P1_ProgBarTime -= 0.83; //ProgressBar päivittyy tässä suhteessa kun peliaika on 2min (timer = 1000ms)
        }

        //jos pelin pituus 5min (gameLength[1])
        else if (gameTime == gameLength[1]){
            P1_ProgBarTime -= 0.33; //ProgressBar päivittyy tässä suhteessa kun peliaika on 5min (timer = 1000ms)
        }
        ui->PB_P1->setValue(P1_ProgBarTime); //Asetetaan päivitetty arvo progresBar-olioon
        qDebug() << "Player 1 time left: " << P1Time;
    }

//pelaaja 2
    if (currentPlayer == 2 && P2Time > 0){
        P2Time--;

        //jos pelin pituus 2min (gameLength[0])
        if(gameTime == gameLength[0]){
            P2_ProgBarTime -= 0.83; //ProgressBar päivittyy tässä suhteessa kun peliaika on 2min. (timer = 1000ms)
        }

        //jos pelin pituus 5min (gameLength[1])
        else if (gameTime == gameLength[1]){
            P2_ProgBarTime -= 0.33; //ProgressBar päivittyy tässä suhteessa kun peliaika on 5min. (timer = 1000ms)
        }
        ui->PB_P2->setValue(P2_ProgBarTime); //Asetetaan päivitetty arvo progresBar-olioon
        qDebug() << "Player 2 time left: " << P2Time;

    }

    if(P1Time==0 || P2Time==0){
        gameOngoing=false;
        gameTimerReset();
        if(P2Time==0) { setGameInfoText("Player 1 WON!! Press the stop button",14);}
        else { setGameInfoText("Player 2 WON!! Press the stop button",14);}
    }
}


void MainWindow::on_btnP1_pressed()
{
    qDebug()<<"Current player is 2.";
    currentPlayer = 2;
}


void MainWindow::on_btnP2_pressed()
{
    qDebug()<<"Current player is 1.";
    currentPlayer = 1;
}


void MainWindow::on_btn2MIN_pressed()
{
    //qDebug()<<"2min playtime selceted";
    if (gameOngoing==false){

        gameTime = gameLength[0]; //gameLength[0] = 2 minuuttia
        P1Time = gameTime;
        P2Time = gameTime;

        setGameInfoText("2min selected. Press start to begin.",14);
        ui->PB_P1->setValue(100); ui->PB_P2->setValue(100);   //Alustaa pelaajien kellot 100:n prosenttiin
    }
    if (gameOngoing==true){
        qDebug()<<"Stop the game before changing the time";
    }
    timeSelected=true;
}


void MainWindow::on_btn5MIN_pressed()
{
    //qDebug()<<"5min playtime selected";
    if (gameOngoing==false){

        gameTime = gameLength[1]; //gameLength[1] = 5 minuuttia
        P1Time = gameTime;
        P2Time = gameTime;

        setGameInfoText("5min selected. Press start to begin.",14);
        ui->PB_P1->setValue(100); ui->PB_P2->setValue(100);  //Alustaa pelaajien kellot 100:n prosenttiin
    }
    if (gameOngoing==true){
        qDebug()<<"Stop the game before changing the time";
    }
    timeSelected=true;
}


void MainWindow::on_btnStartGame_pressed()
{
    if (timeSelected==true){
        gameOngoing=true;
        connect(gameTimer, SIGNAL (timeout()), this, SLOT (timeout_func()));
        gameTimer->setInterval(1000);
        gameTimer->start();
        currentPlayer = 1;  //Pelaaja 1 = valkoiset pelinappulat

        if (gameTime == gameLength[0]) { setGameInfoText("2min game ongoing.",20); }
        else if (gameTime == gameLength[1]) { setGameInfoText("5min game ongoing.",20); }

        P1_ProgBarTime = 100.00;    //Annetaan alkuarvot float muuttujille joita päivitetään pelaajien progressBar olioille
        P2_ProgBarTime = 100.00;
    }
    if (timeSelected==false){
        setGameInfoText("Select a game time before starting.",14);
        //qDebug()<<"Select a game time before attempting to start the game";
    }
}


void MainWindow::on_btnStopGame_pressed()
{
    if (timeSelected==true){
        gameOngoing=false;
        ui->PB_P1->setValue(0); //Pelaajien progressBar oliot = 0
        ui->PB_P2->setValue(0);
        gameTimerReset();
        setGameInfoText("Select game time",20);
    }
    if (timeSelected==false){
        setGameInfoText("No ongoing game. Select game time.",14);
        //qDebug()<<"Select a game time before attempting to stop the game";
    }
    timeSelected=false;
}

void MainWindow::gameTimerReset()
{
    gameTimer->stop();
    gameTimer->disconnect(); //Pysäytetään kello ja poistetaan "on_btnStartGame_pressed()" metodissa luotu yhteys
}


void MainWindow::setGameInfoText(QString text, short FontSize)
{
   //qDebug()<<text;
   ui->labelGameState->setText(text);
   QFont FONT;
   FONT.setPointSize(FontSize);
   ui->labelGameState->setFont(FONT);
}

