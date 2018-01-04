
/*
 
 Author: Benjamin Fondell
 
 Date: 3/16/2017
 
 Description: Project 9.a  Board.cpp
 
 */
#include "Board.hpp"
#include <iostream>

using namespace std;

Board :: Board()
{
    turn = 0;
    
    for (int i = 0; i<3; i++)
    {
        for (int ii = 0; ii < 3; ii++)
        {
            board[i][ii] = '.';
        }
    }
}

bool Board::makeMove(int posx, int posy, char player)
{
    if (board[posx][posy] == '.')
    {
        board[posx][posy] = player;
        return true;
    }
    else return false;
}

int Board::gameState()
{
    turn++;
    char winner = '.';
    
    if ((board[0][0] == 'x' || board[0][0] == 'o')
        && (board[0][1] == board[0][0])
        && (board[0][2] == board[0][0]))
    {
        winner = board[0][0];
    }
    else if ((board[0][0] == 'x' || board[0][0] == 'o')
             && (board[1][0] == board[0][0])
             && (board[2][0] == board[0][0]))
    {
        winner = board[0][0];
    }
    else if ((board[1][0] == 'x' || board[1][0] == 'o')
             && (board[1][1] == board[1][0])
             && (board[1][2] == board[1][0]))
    {
        winner = board[1][0];
    }
    else if ((board[0][1] == 'x' || board[0][1] == 'o')
             && (board[1][1] == board[0][1])
             && (board[2][1] == board[0][1]))
    {
        winner = board[0][1];
    }
    else if ((board[2][0] == 'x' || board[2][0] == 'o')
             && (board[2][1] == board[2][0])
             && (board[2][2] == board[2][0]))
    {
        winner = board[2][0];
    }
    else if ((board[0][2] == 'x' || board[0][2] == 'o')
             && (board[1][2] == board[0][2])
             && (board[2][2] == board[0][2]))
    {
        winner = board[0][2];
    }
    else if ((board[0][0] == 'x' || board[0][0] == 'o')
             && (board[1][1] == board[0][0])
             && (board[2][2] == board[0][0]))
    {
        winner = board[0][0];
    }
    else if ((board[2][0] == 'x' || board[2][0] == 'o')
             && (board[1][1] == board[2][0])
             && (board[0][2] == board[2][0]))
    {
        winner = board[2][0];
    }
   
    if (winner == 'x')
    {
       
        return x_won;
    }
    else if (winner == 'o')
    {
        
        return o_won;
    }
    else if (turn == 9)
    {
        
        return draw;
    }
    else return still_in_progress;
}

void Board::print()
{
    cout<<endl;
    
    cout<<"  0 1 2"<<endl;
    
    for (int i = 0; i<3; i++)
    {
        for (int ii = 0; ii < 3; ii++)
        {
            if (ii == 0)
            {
                cout<<i;
            }
            if (board[i][ii] == '.')
            {
                cout<<" .";
            }
            else if(board[i][ii] == 'o')
            {
                cout<<" O";
            }
            else if(board[i][ii] == 'x')
            {
                cout<<" X";
            }
            if (ii == 2)
            {
                cout<< endl;
            }
            
        }
    }
}

/*
 
 Description: Project 9.a  Board.cpp
 
 */
    
    
    
    
    
    
    
    
    

