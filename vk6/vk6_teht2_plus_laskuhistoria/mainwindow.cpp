#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    qDebug() << "MainWindow constructor";

    ui->setupUi(this);  // Luodaan käyttöliittymä

    // Liitetään numeropainikkeet (num0-num9) digitPressed-metodiin
    connect(ui->num0, &QPushButton::clicked, this, &MainWindow::digitPressed);
    connect(ui->num1, &QPushButton::clicked, this, &MainWindow::digitPressed);
    connect(ui->num2, &QPushButton::clicked, this, &MainWindow::digitPressed);
    connect(ui->num3, &QPushButton::clicked, this, &MainWindow::digitPressed);
    connect(ui->num4, &QPushButton::clicked, this, &MainWindow::digitPressed);
    connect(ui->num5, &QPushButton::clicked, this, &MainWindow::digitPressed);
    connect(ui->num6, &QPushButton::clicked, this, &MainWindow::digitPressed);
    connect(ui->num7, &QPushButton::clicked, this, &MainWindow::digitPressed);
    connect(ui->num8, &QPushButton::clicked, this, &MainWindow::digitPressed);
    connect(ui->num9, &QPushButton::clicked, this, &MainWindow::digitPressed);

    // Liitetään operaattoripainikkeet
    // (+, -, *, /) operatorPressed-metodiin
    connect(ui->btnAdd, &QPushButton::clicked, this, &MainWindow::operatorPressed);
    connect(ui->btnSub, &QPushButton::clicked, this, &MainWindow::operatorPressed);
    connect(ui->btnMul, &QPushButton::clicked, this, &MainWindow::operatorPressed);
    connect(ui->btnDiv, &QPushButton::clicked, this, &MainWindow::operatorPressed);

    // Liitetään (btnClear) clearPressed-metodiin
    // ja (btnEnter) calculate-metodiin
    connect(ui->btnClear, &QPushButton::clicked, this, &MainWindow::clearPressed);
    connect(ui->btnEnter, &QPushButton::clicked, this, &MainWindow::calculate);

    historyTextEdit = new QTextEdit();
    ui->History->addWidget(historyTextEdit);
}

//******************************************************************************
//******************************************************************************

void MainWindow::digitPressed() {
    // Hakee lähettäjän (QPushButton-olio) signaalin
    QPushButton *button = qobject_cast<QPushButton*>(sender());

    // Hakee painikkeen numeron
    QString number = button->text();

    // Annetaan *EditLine osoitin QLineEdit-oliolle
    QLineEdit *EditLine;

    // Odottaa kunnes operaattori lisätty
    if (!Operand.isEmpty()) {
        EditLine = ui->lineSecond; // Jos operaattoria painettu, lisätään numero toiseen kenttään
    } else {
        EditLine = ui->lineFirst;  // Muulloin lisätään numero ensimmäiseen kenttään
    }
    // Lisää valitun numeron käytettävään lineEdit-olioon
    EditLine->setText(EditLine->text() + number);

    qDebug() << "Pressed digit " << number; //tulostaa debug tietoa
}

//******************************************************************************
//******************************************************************************

void MainWindow::operatorPressed() {

    // Hakee lähettäjän (QPushButton-olio) signaalin
    QPushButton *button = qobject_cast<QPushButton*>(sender());

    // Hakee operaattorin
    QString pressedOperand = button->text();

    // Annetaan *EditLine osoitin QLineEdit-oliolle
    QLineEdit *EditLine;

    // Hakee firstNum:n tekstikentästä ja muuttaa sen liukuluvuksi
    firstNum = ui->lineFirst->text().toDouble();

    // Asettaa operaattorin
    Operand = pressedOperand;

    // Asettaa EditLine-osoittimen osoittamaan operandikenttään
    EditLine = ui->lineOperand;

    // Lisää operaattorin operandikenttään
    EditLine->setText(EditLine->text() + Operand);

    //tulostaa debug tietoa
    qDebug() << "Pressed operator" << pressedOperand;
}

//******************************************************************************
//******************************************************************************

void MainWindow::clearPressed() {

    // Tyhjennetään kaikki tekstikentät
    ui->lineFirst->clear();
    ui->lineSecond->clear();
    ui->lineOperand->clear();
    ui->lineResult->clear();

    // Asettaa result ja Num-muuttujat nollaksi
    result = 0.0;
    firstNum = 0.0;
    secondNum = 0.0;

    // Tyhjentää operaattorin
    Operand.clear();

    qDebug() << "Pressed clear"; //tulostaa debug tietoa

}

//******************************************************************************
//******************************************************************************

void MainWindow::calculate() {
    // Muuntaa toisen numeron tekstikentän sisällön liukuluvuksi
    secondNum = ui->lineSecond->text().toDouble();

    // Tarkistaa, mikä operaattori on valittu
    if (Operand == "+") {
        result = firstNum + secondNum;
    } else if (Operand == "-") {
        result = firstNum - secondNum;
    } else if (Operand == "*") {
        result = firstNum * secondNum;
    } else if (Operand == "/") {
        if (secondNum != 0.0) {
            result = firstNum / secondNum;
        } else {
            // jos jakaja on 0 tulostetaan teksti resultkenttään
            ui->lineResult->setText("Error");
            return;
        }
    }

    // Päivitetään laskuhistoria
    historyTextEdit->append(QString("%1 %2 %3 = %4").arg(firstNum).arg(Operand).arg(secondNum).arg(result));

    //näytetään tulos
    ui->lineResult->setText(QString::number(result));

    qDebug() << "Calculated result" << result; //tulostaa debug tietoa

}

//******************************************************************************
//******************************************************************************

MainWindow::~MainWindow()
{
    // Tuhoaa käyttöliittymän objektin
    // ja vapauttaa sille varatun muistialueen
    qDebug() << "MainWindow destructor";
    delete ui;
}
