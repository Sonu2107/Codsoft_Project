#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;


void DisplayBoard(const vector<vector<char> > &board) {
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      cout << board[i][j];
      if (j < 2) {
        cout << " | ";
      }
    }
    cout << endl;
    if (i < 2) {
      cout << "---------" << endl;
    }
  }
}


bool CheckGameover(const vector<vector<char> > &board, char player) {
  
  for (int i = 0; i < 3; ++i) {
    if (board[i][0] == player && board[i][1] == player &&
        board[i][2] == player) {
      return true;
    }
    if (board[0][i] == player && board[1][i] == player &&
        board[2][i] == player) {
      return true;
    }
  }
  if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
    return true;
  }
  if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
    return true;
  }
  return false;
}


bool isBoardFull(const vector<vector<char> > &board) {
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      if (board[i][j] == ' ') {
        return false;
      }
    }
  }
  return true;
}

int main() {
  vector<vector<char> > board(3, vector<char>(3, ' '));
  char presentPlayer = 'X';

  cout << "Welcome to play Tic Tac Toe Game" << endl;
  cout<<"TWO PLAYER";

  while (true) {
    cout << endl;
   DisplayBoard(board);

    int row, col;
    cout << "Player " << presentPlayer
         << ", enter your move (row and column): ";
    cin >> row >> col;

    if (row < 1 || row > 3 || col < 1 || col > 3 ||
        board[row - 1][col - 1] != ' ') {
      cout << "wrong move Try another time" << endl;
      continue;
    }

    board[row - 1][col - 1] = presentPlayer;

    if (CheckGameover(board, presentPlayer)) {
      cout << endl << "Final board:" << endl;
      DisplayBoard(board);
      cout << endl << " Congratulations Player " << presentPlayer << " won the game!" << endl;
      break;
    } else if (isBoardFull(board)) {
      cout << endl << "GAME DRAW!!!" << endl;
      break;
    }

  presentPlayer = (presentPlayer == 'X') ? 'O' : 'X';
  }
  return 0;
}