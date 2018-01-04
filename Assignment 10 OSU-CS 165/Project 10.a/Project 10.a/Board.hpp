

/*
 
 Author: Benjamin Fondell
 
 Date: 3/16/2017
 
 Description: Project 9.a  Board.hpp
 
 */
#ifndef Board_hpp
#define Board_hpp

#include <stdio.h>

enum State{x_won,o_won,draw,still_in_progress};

class Board
{
private:
    
    char board [3][3];
    int turn;

public:
    
    Board();
    int gameState();
    bool makeMove (int, int, char);
    void print();
    
};

#endif

/*
 Description: Project 9.a  Board.hpp
*/
