#include <iostream>
#include <cstdlib>
#include "stackADT"
const int max_board = 9;
using namespace std;
struct Position
{
    int row;
    int col;
};
int getSize(void);
bool guarded(int board[][max_board], int chkrow, int chkCol, int boardSize);
void fillBoard(Stack<Position> &stack, int boardSize);
void PrintBoard(Stack<Position> &stack, int boardSize);
int getSize()
{
    int boardSize;
    cout << "\nWelcome to the Eight Queen Problem. you may\n"
         << "select a board size from 4X4 to 8X8. \n"
         << "We will position a queen in each row of \n"
         << "queen. Note: there are no solution for \n"
         << "board less than 4X4.\n";
    cout << "\nPlease enter the board size: ";
    cin >> boardSize;
    while (boardSize < 4 || boardSize > 8)
    {
        cout << "\nThe board size must be greater than 3\n"
             << "and less than 9. you entered " << boardSize << "\nPlease re-enter. Thank You!\a\a\n\n"
             << "your board size: ",
            boardSize;
        cin >> boardSize;
    }
    return boardSize;
}
void fillBoard(Stack<Position> &stack, int boardSize)
{
    int row;
    int col;
    int board[max_board][max_board] = {0};
    Position boardPos;
    row = 1;
    col = 0;
    while (row <= boardSize)
    {
        while (col <= boardSize && row <= boardSize)
        {
            col++;
            if (!guarded(board, row, col, boardSize))
            {
                board[row][col] = 1;
                boardPos.row = row;
                boardPos.col = col;
                stack.pushStack(boardPos);
                row++;
                col = 0;
            }
            while (col >= boardSize)
            {
                stack.popStack(boardPos);
                row = boardPos.row;
                col = boardPos.col;
                board[row][col] = 0;
            }
        }
    }
    return;
} // fillBoard
bool guarded(int board[][max_board], int chkrow, int chkCol, int boardSize)
{
    int row;
    int col;
    col = chkCol;
    for (row = 1; row <= chkrow; row++)
        if (board[row][col] == 1)
            return true;
    for (row = chkrow - 1, col = chkCol + 1; row > 0 && col <= boardSize; row--, col++)
        if (board[row][col] == 1)
            return true;
    for (row = chkrow - 1, col = chkCol - 1; row > 0 && col > 0; row--, col--)
        if (board[row][col] == 1)
            return true;
    return false;
}
void PrintBoard(Stack<Position> &stack, int boardSize)
{
    int col;
    Position boardPos;
    Stack<Position> outStack;
    if (stack.emptyStack())
    {
        cout << "\tThere are no Posiotion on this board \n";
        return;
    }

    while (!stack.emptyStack())
    {
        stack.popStack(boardPos);
        outStack.pushStack(boardPos);
    }
    cout << "Place Queen in the following poisition: \n";
    while (!outStack.emptyStack())
    {
        outStack.popStack(boardPos);
        cout << "Row " << boardPos.row << "-Col" << boardPos.col << ": ";
        for (col = 1; col <= boardSize; col++)
        {
            if (boardPos.col == col)
                cout << " Q |";
            else
                cout << "   |";
        }
        cout << "\n";
    }
    return;
}

int main()
{
    int boardSize;
    Stack<Position> stack;
    boardSize = getSize();
    fillBoard(stack, boardSize);
    PrintBoard(stack, boardSize);
    cout << "\n We hope you Enjoyed Eight Queens.\n";

    return 0;
}