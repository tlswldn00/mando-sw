#include <iostream>
#include <string>
#include "TicTacToe.h"
using namespace std;

int main()
{
    TicTacToe game;
    int x, y, k, i = 0, j = 0;
    

    for (k = 0; k < 9; k++)
    {
        
        cout << "(x,y) 좌표 : ";
        cin >> x >> y;
        
        game.input(x, y, k);
        
        game.printBoard();
        
        game.GameWin(i, j);
        if (j == 1)
            break;
        
        game.GameDraw(k);

    }
    return 0;
}
