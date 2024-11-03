#ifndef WORD_H
#define WORD_H
#include <string>
#include <list>
#include<iostream>

using namespace std;

class Word
{

    private:
        list<char> m_currentWord;
        string m_word;



    public:
        Word(string word){
            m_word = word;
            size_t length = m_word.length();// length of the provided word
            for (size_t i = 0; i < word.length(); ++i) {
                m_currentWord.push_back('_');
    }

        }

        string getWord(){
            string letters;
            for (char letter : m_currentWord) {
                letters += letter;
                letters += " ";
            }
            return letters;

        }


        void addLetter(char letter){

           for (size_t i = 0; i < m_word.length(); ++i) {
                if (m_word[i] == letter) {
                    auto it = m_currentWord.begin();
                    advance(it, i);
                    *it = letter;
                }
            }



        }


        bool findLetter(char letter){
            size_t position = m_word.find(letter); // find letter in the give string, size_t has the location in string
            return position != string::npos; // returns npos, max possible value for size t



        }


        bool solved(){
            for (char w : m_currentWord) { // Iterate over each char in current word
                if (w == '_') {
                return false;
            }
        }
        return true; // All characters are filled in, the word is solved
    }




};

#endif // WORD_H
