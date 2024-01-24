#ifndef GAME_H
#define GAME_H

class Game {
private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;

public:
    Game();
    ~Game();
    void play();
    void printGameResult();
};

#endif // GAME_H
