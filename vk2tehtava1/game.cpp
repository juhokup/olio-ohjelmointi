#include "Game.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

Game::Game() : numOfGuesses(0) //alustetaan numOfGuesses suorituksen alussa nollaan
{
  //ohjeissa ei ollut maxNumber kysyntää tulostettuna näytölle,
  //joten ajattelin lisätä sen selkeyden vuoksi
  //loppukäyttäjää ajatellen
  //***************************************
  cout << "Welcome to The Number Guessing Game!" << endl << "Enter a maximum value for the guess: " << endl;
  //***************************************
  cin >> maxNumber;
  cout << "GAME CONSTRUCTOR: object initialized with " << maxNumber << " as a maximum value" << endl;

  srand(time(0));                           //arvotaan numero ajan perusteella
  randomNumber = rand() % maxNumber + 1;    //randomNumber arvotaan 1 - (maxNumber+1) väliltä
}

Game::~Game() //tyhjätään varattu pinomuisti
{
  cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

void Game::play() //pelin suoritus
{
  do{
    cout << "Give your guess between 1-" << maxNumber << endl;

    //tallennetaan arvaus vertailua varten
    cin >> playerGuess;

    //Lisäyksenä myös tämä tulostus,
    //joka kertoo pelaajalle arvauksen olevan
    //arvattavien numeroiden "ulkopuolella"
    //eikä kasvata numOfGuesses arvoa
    //***************************************
    if (playerGuess < 1 || playerGuess > maxNumber) {
      cout << "Invalid guess. Your guess is outside of number range 1-"
           << maxNumber << endl;
      continue; //palataan do-silmukan alkuun (rivi 29)
    }
    //***************************************

    numOfGuesses++; //lisätään +1 arvauksiin

    //arvaus liian pieni
    if (playerGuess < randomNumber) {
      cout << "Your guess is too small" << endl;
    }

    //arvaus liian suuri
    else if (playerGuess > randomNumber) {
      cout << "Your guess is too big" << endl;
    }

    //arvaus oikein
    else {
      cout << "Your guess is right = " << randomNumber << endl;
      printGameResult();
      return;
    }
  } while (true);   //peli jatkuu kunnes pelaaja arvaa oikein (do-while loop)
}

void Game::printGameResult() //pelin lopputulos
{
  cout << "You guessed the right answer = " << randomNumber << " with "
       << numOfGuesses << " guesses" << endl;
}
