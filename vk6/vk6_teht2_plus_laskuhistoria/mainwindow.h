#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QTextEdit>

QT_BEGIN_NAMESPACE
// Määritellään Ui-nimiavaruus ja siihen sisältyvä MainWindow-luokka
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT    // Makro, joka mahdollistaa signaalien ja slotien käytön

public:

    MainWindow(QWidget *parent = nullptr);  // Rakentaja, joka luo päänäkymän
    ~MainWindow();  //Dekontruktori vapauttaa varatun muistin

private slots:  // MainWindow -luokan jäsenfunktiot, jotka näkyvät vain tässä luokassa

    void digitPressed();    // Numeropainikkeiden käsittelymetodi
    void operatorPressed(); // Operaattoripainikkeiden käsittelymetodi
    void clearPressed();    // Clear-painikkeen käsittelymetodi
    void calculate();       // Laskutoimituksen käsittelymetodi

private:
    double firstNum = 0.0;  // Muuttuja johon tallennetaan ensimmäiseen lineEditiin lueteltu arvo (lineFirst)
    double secondNum = 0.0; // Sama kuin edellä, mutta lineSecond
    double result = 0.0;    // Sama kuin edellä, mutta lineResult

    Ui::MainWindow *ui; // Käyttöliittymän objekti

    QString Operand;    //Operaattori
    QTextEdit *historyTextEdit; //Laskuhistorian käsittely
};

#endif // MAINWINDOW_H
