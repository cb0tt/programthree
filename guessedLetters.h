#ifndef GUESSEDLETTERS_H
#define GUESSEDLETTERS_H
#include <string>
#include <list>
#include <iostream>

using namespace std;

class GuessedLetters
{
    private:
        list<char> m_guessed;


    public:


    GuessedLetters(){

    }

    string getLetters(){
        string s;
        for (char letter : m_guessed) {
            s += letter;
            s += " ";
        }
        return s;


    }

    void addLetter(char letter){
    m_guessed.push_back(letter);

    }

};

#endif // GUESSEDLETTERS_H
