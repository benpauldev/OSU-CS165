
/*
 
 Author: Benjamin Fondell
 
 Date: 3/16/2017
 
 Description: Project 9.a  TictacToe.cpp
 
 */
#include "TicTacToe.hpp"
#include <iostream>

using namespace std;

TicTacToe::TicTacToe(char first)
{
    player = first;
}

void TicTacToe::play()
{
    int thisGame = gameboard.gameState();
    
    int x;
    int y;
    
    do
    {
        cout<<"Player using "<<static_cast<char>(toupper(player))<<", enter your move."<<endl;
        
        cin >> x >> y;
        
        if (gameboard.makeMove(x, y, player))
        {
            gameboard.makeMove(x, y, player);
            
            gameboard.print();
            
            thisGame = gameboard.gameState();
            
            if(player == 'x')
            {
                player = 'o';
            }
            else if (player == 'o')
            {
                player = 'x';
            }
        }
        else
        {
            cout<<"That space is occupied"<<endl;
        }
    }
    while (thisGame == still_in_progress);
    
    if (thisGame == x_won)
    {
        cout<<"X is the winner!"<<endl;
    }
    else if (thisGame == o_won)
    {
        cout<<"O is the winner!"<<endl;
    }
    else if (thisGame == draw)
    {
        cout<<"This game is a draw."<<endl;
    }
}

int main()
{
   
    
    Board newboard;
    
    char firstplayer;
    
    cout<<"Which player will go first?"<<endl;
    
    cin>>firstplayer;
    
    newboard.print();
    
    TicTacToe Game(firstplayer);
    
    Game.play();
    
    return 0;
    
}
/*
  Description: Project 9.a  TictacToe.cpp
 */
