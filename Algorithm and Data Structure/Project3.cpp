#include <iostream>
using namespace std;
char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char Player = 'X';
void printBoard()
{
    cout << "Current Board: \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}
bool checkWin()
{
    for (int i = 0; i < 3; i++)
    {
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) || (board[0][i] == board[1][i] && board[1][i] == board[2][i]))
        {
            return true;
        }
    }

    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) || (board[0][2] == board[1][1] && board[1][1] == board[2][0]))
    {
        return false;
    }
}
void aiMove()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != 'X' && board[i][j] != 'O')
            {
                char temp = board[i][j];
                board[i][j] = 'O';
                if (checkWin())
                    return;
                board[i][j] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != 'X' && board[i][j] != 'O')
            {
                board[i][j] = 'O';
                return;
            }
        }
    }
}
void PlayerMoves()
{
    int move;
    cout << "Enter the Number of the spot you want to mark: ";
    cin >> move;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == move + 'O')
            {
                board[i][j] = Player;
                return;
            }
        }
    }
}

int main()
{
    int moves = 0;
    while (moves < 9)
    {
        printBoard();
        PlayerMoves();
        moves++;
        if (checkWin())
        {
            printBoard();
            cout << "Player Wins!\n";
            return 0;
        }
        if (moves < 9)
        {
            aiMove();
            moves++;
            if (checkWin())
            {
                printBoard();
                cout << "AI Wins!\n";
                return 0;
            }
        }
    }
    printBoard();
    cout << "It's a Draw!\n";

    return 0;
}