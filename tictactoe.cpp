#include<iostream>
#include<string.h>

using namespace std;

int board[3][3];

int printboard(){
  cout << "      1      2     3" << endl;
  cout << "a     " << board[1][1] << "     " << board[2][1] << "     " << board[3][1] << endl;
  cout << "b     " << board[1][2] << "     " << board[2][2] << "     " << board[3][2] << endl;
  cout << "c     " << board[1][3] << "     " << board[2][3] << "     " << board[3][3] << endl;
}

int main(){
  bool gameover = false;
  //char board[3][3];
  int xwins;
  int ywins;
  bool xturn = true;
  //oturn = false;
  cout << "Welcome to Tic Tac Toe" << endl;
  cout << "Player one is X, player 2 is O" << endl;
  char rowinput;
  char columninput;
  /*board[0][1] = 'a';//1st number is the X, second number is the y
  board[0][2] = 'b';
  board[0][3] = 'c';
  board[1][0] = '1';
  board[2][0] = '2';
  board[3][0] = '3';
  cout << board << endl;
  for(int i = 0; i < 3; i++)
    for (int j =0; j <2; j++){
      cout << board[i][j] << endl;
    }*/
  // for (horizontal i = 0; i < 3; i++){

  //  }
  
  /*board[1][2] = 'X';
  board[1][1] = ' ';
  board[1][3] = ' ';
  board[2][1] = ' ';
  board[2][2] = ' ';
  board[2][3] = ' ';
  board[3][1] = ' ';
  board[3][2] = ' ';
  board[3][3] = ' ';*/


  /*while(gameover == false){
     while(xturn == true){ 
       cout << "      1      2     3" << endl;
       cout << "a     " << board[1][1] << "     " << board[2][1] << "     " << board[3][1] << endl;
       cout << "b     " << board[1][2] << "     " << board[2][2] << "     " << board[3][2] << endl;
       cout << "c     " << board[1][3] << "     " << board[2][3] << "     " << board[3][3] << endl;*/
       cout << "which row would you like to go?" << endl;
       cin.get(rowinput);
       cout << "which column would you like to go?" << endl;
       cin.get(columninput);
    
       if(rowinput == 'a' && columninput == '1'){
	 board[1][1] = 'X';
	 printboard();
       }
       
    gameover = true;
   }

  



  return 0;
}
