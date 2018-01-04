

/*
 
 Author: Benjamin Fondell
 
 Date: 3/16/2017
 
 Description: Project 9.a  TictacToe.hpp
 
 */
#ifndef TicTacToe_hpp
#define TicTacToe_hpp

#include <stdio.h>
#include "Board.hpp"

class TicTacToe
{
private:
    
    Board gameboard;
    char player;
    
public:
    
    TicTacToe(char);
    void play();
};

#endif 

/*
 Description: Project 9.a  TictacToe.hpp
*/
