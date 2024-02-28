#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void timeout_func();

private slots:
    void on_btnP1_pressed();
    void on_btnP2_pressed();

    void on_btn2MIN_pressed();
    void on_btn5MIN_pressed();

    void on_btnStartGame_pressed();
    void on_btnStopGame_pressed();

    void gameTimerReset();

    void setGameInfoText(QString,short);
private:
    Ui::MainWindow *ui;
    int P1Time=0, P2Time=0, gameTime=0, currentPlayer;
    float P1_ProgBarTime, P2_ProgBarTime;
    bool timeSelected=false;    //Otetaan start ja stop näppäimet käyttöön vain jos pelin pituus on valittu
    bool gameOngoing=false;     //Hyväksytään ajan vaihtaminen vain jos peli ei ole käynnissä
    int gameLength[2] = {120,300};
    QString textGameStage;
    QTimer *gameTimer;



};
#endif // MAINWINDOW_H
