//A simple tic-tac-toe board. Game will be programed later.

#include<iostream>
using namespace std;
void init_board(char[][4],int);
void display_board(char[][4], int);
int main()
{
  const int cols = 4, rows = 4;
  char board[rows][cols];
  
  init_board(board, rows);
  display_board(board, rows);
  return 0;
}
void init_board(char board[][4], int rows = 4)
{
  int cols = 4;
  board[0][0] = '1';
  board[0][1] = '2';
  board[0][2] = '3';
  board[1][0] = '4';
  board[1][1] = '5';
  board[1][2] = '6';
  board[2][0] = '7';
  board[2][1] = '8';
  board[2][2] = '9';
  
  
}

void display_board(char board[][4], int rows = 4)
{
  for(int rows = 0; rows < 3; rows++)
  {
    for(int cols = 0; cols < 3; cols++)
    {
      if(cols == 2)
      {
        cout << board[rows][cols];
      }
      else
      {
        cout << board[rows][cols] << " | ";
      }
    if(rows == 0 ||rows == 1)
    {
      cout << endl << "----------" << endl;
    }
    else
    {
      cout << endl;
    }
  }
}
