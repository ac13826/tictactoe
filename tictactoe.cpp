
#include<iostream>
#include<string.h>

using namespace std;

void printboard(char (*board)[3]);
void printboard(char (*board)[3]){
  

  cout << "      a     b     c" << endl;
  cout << "1     " << board[0][0] << "     " << board[1][0] << "     " << board[2][0] << endl;
  cout << "2     " << board[0][1] << "     " << board[1][1] << "     " << board[2][1] << endl;
  cout << "3     " << board[0][2] << "     " << board[1][2] << "     " << board[2][2] << endl;
}
void resetboard(char (*board)[3]);
void resetboard(char board[3][3]){
  for(int i=0; i<3; i++){
    for(int k=0; k<3; k++){
      board[i][k] = ' ';
    }
  }
}


int main(){
  bool gameover = false;
  char board[3][3];
  int xwins = 0;
  int owins = 0;
  bool xturn = true;
  xturn = true;
  cout << "Welcome to Tic Tac Toe" << endl;
  cout << "Player one is X, player 2 is O" << endl;
  char input[3];
  char columninput[2];
  char oinput[3];
  char playagain;
  
  /*board[0][0] = ' ';
  board[1][1] = ' ';
  board[1][3] = ' ';
  board[2][1] = ' ';
  board[2][2] = ' ';
  board[2][3] = ' ';
  board[3][1] = ' ';
  board[3][2] = ' ';
  board[3][3] = ' ';*/
 start:
  resetboard(board);
  while(gameover == false){
    printboard(board);
  
    while(xturn == true){
    xstart:
      cout << "which would X like to go?" << endl;
      cin.get(input, 3);
      cin.ignore();
      for(int i=0; i<2; i++){
	cout << input[i] << endl;
      }
      if(board[input[0] -'a'][input[1]-'1'] == ' '){
	board[input[0]-'a'][input[1]-'1'] = 'X';
      }
      else{
	cout << "you can't go there" << endl;
	goto xstart;
      }
      printboard(board);
      if(board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X'){
	cout << "X wins!!!" << endl;
	xwins++;
	goto gameover;
      }
      else if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X'){
	cout << "X wins!!!" << endl;
	xwins++;
	goto gameover;
      }
      else if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X'){
	cout << "X wins !!!" << endl;
	xwins++;
	goto gameover;
      }
      else if(board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X'){
	cout << "X wins !!!" << endl;
	xwins++;
	goto gameover;
      }
      else if(board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X'){
	cout << "X wins !!!" << endl;
	xwins++;
	goto gameover;
      }
      else if(board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X'){
	cout << "X wins !!!" << endl;
	xwins++;
	goto gameover;
      }
      else if(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X'){
	cout << "X wins !!!" << endl;
	xwins++;
	goto gameover;
      }
      else if(board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X'){
	cout << "X wins !!!" << endl;
	xwins++;
	goto gameover;
      }
      xturn = false;
    }
    while(xturn == false){
    ostart:
      cout << "where would O like to go?" << endl;
      cin.get(oinput, 3);
      cin.ignore();
      for(int i=0; i<2; i++){
	cout <<oinput[i] << endl;
      }
      if(board[oinput[0] -'a'][oinput[1]-'1'] == ' '){
	board[oinput[0]-'a'][oinput[1]-'1'] = 'O';
      }
      else{
	cout << "you can't go there" << endl;
	goto ostart;
      }
      printboard(board);
      xturn = true;
    }
    /*for(int i=0; i<2; i++){
      if(board[0][i] == 'X'){
	cout << "X wins!!!" << endl;
      }
    }*/
    if(board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O'){
      cout << "O wins!!!" << endl;
      owins++;
      goto gameover;
    }
    else if(board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O'){
      cout << "O wins!!!" << endl;
      owins++;
      goto gameover;
    }
    else if(board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O'){
      cout << "O wins !!!" << endl;
      owins++;
      goto gameover;
    }
    else if(board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O'){
      cout << "O wins !!!" << endl;
      owins++;
      goto gameover;
    }
    else if(board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O'){
      cout << "O wins !!!" << endl;
      owins++;
      goto gameover;
    }
    else if(board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O'){
      cout << "O wins !!!" << endl;
      owins++;
      goto gameover;
    }
    else if(board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O'){
      cout << "O wins !!!" << endl;
      owins++;
      goto gameover;
    }
    else if(board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O'){
      cout << "O wins !!!" << endl;
      owins++;
      goto gameover;
    }
  }
  cout << "Fuck" << endl;
 gameover:
  cout << "X has won " << xwins << " times" << endl;
  cout << "O has won " << owins << " times" << endl;
  cout << "Do you want to play again" << endl;
  cin >> playagain;
  cin.ignore();
  if(playagain == 'y'){
    goto start;
  }

  

  



 }
