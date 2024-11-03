#ifndef GAMESTATE_H
#define GAMESTATE_H
#include <string>
#include <list>
#include <iostream>

using namespace std;
class GameState
{

    private:
        list<string> m_state;
        int m_getStates;
        /* const string*/
        string m_allStates[7];
        void state(){
        m_allStates[0] = "PLATFORM";
        m_allStates[1] = "HEAD";
        m_allStates[2] = "BODY";
        m_allStates[3] = "LEFT_ARM";
        m_allStates[4] = "RIGHT_ARM";
        m_allStates[5] = "LEFT_LEG";
        m_allStates[6] = "RIGHT_LEG";
        }






    public:
        GameState(){
            m_getStates = 0;
            state();


    }


    void addState(){
        m_state.push_back(getState());
        m_getStates++;



    }

    string getState(){
        if (m_getStates < 7){
            return m_allStates[m_getStates];

        }else {
            return "";

        }

    }

    bool gameOver(){
        return m_getStates >= 7;



        }

};

#endif // GAMESTATE_H
