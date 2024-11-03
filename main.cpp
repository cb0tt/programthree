/*
Colin Bottrill
Professor Vermilyer
11/1/2024


this program uses classes and lists to make a hangman game.
How the game works is the player has a limited amount of chances to
guess the word. If the letter guessed is in the word it will be marked
and the user wont lose a life, if it is not the user will lose a life */








#include <iostream>
#include "word.h"
#include "guessedLetters.h"
#include "gameState.h"

using namespace std;

int main()
{
    Word word("JUGGLE");
    GuessedLetters guessed = GuessedLetters();
    GameState state = GameState();
    char letter;

    do {
       cout << "Game state: " << state.getState() << endl;
       cout << "Guessed letters: " << guessed.getLetters() << endl;
       cout << "Guess this word: " << word.getWord() << endl << endl;
       cout << "Guess a letter: ";
       cin >> letter;

       letter = toupper(letter);
       if (word.findLetter(letter)) {
          word.addLetter(letter);
       }
       else {
          guessed.addLetter(letter);
          state.addState();
       }
    } while ( (!state.gameOver()) && (!word.solved()) );

    if (state.gameOver()) {
       cout << endl << "Game state: " << state.getState() << endl;
       cout << "Sorry you lose"  << endl;
       cout << "The word was: JUGGLE" << endl;
    }
    else {
        cout << endl << "Congratulations, you guessed the word: " <<  word.getWord() << endl;
    }

    return 0;
}
