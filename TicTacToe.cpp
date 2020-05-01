#include <iostream>
using namespace std;
class TicTacToe
{
public:
char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int choice, player;

int checkForWin();
void displayBoard();
void markBoard(char mark);
void markBoardDhan(char mark);

};

int TicTacToe::checkForWin()
{
    int returnValue = 0;

    if (square[1] == square[2] && square[2] == square[3])
    {
        returnValue = 1;
    }
    else if (square[4] == square[5] && square[5] == square[6])
        returnValue = 1;

    else if (square[7] == square[8] && square[8] == square[9])
        returnValue = 1;

    else if (square[1] == square[4] && square[4] == square[7])
        returnValue = 1;

    else if (square[2] == square[5] && square[5] == square[8])
        returnValue = 1;

    else if (square[3] == square[6] && square[6] == square[9])
        returnValue = 1;

    else if (square[1] == square[5] && square[5] == square[9])
        returnValue = 1;

    else if (square[3] == square[5] && square[5] == square[7])
        returnValue = 1;

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7]
        != '7' && square[8] != '8' && square[9] != '9')
        returnValue = 0;
    else
        returnValue = -1;

    return returnValue;
}

void TicTacToe::displayBoard()
{
    //system("cls");
    cout<<"Player 1 (X)  -  Player 2 (O)\n"<<endl;

    cout<<"     |     |     "<<endl;
    cout<<square[1]<<"    |  "<<square[2]<<"  |  "<<square[3]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<square[4]<<"    |  "<<square[5]<<"  |  "<<square[6]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<square[7]<<"    |  "<<square[8]<<"  |  "<<square[9]<<endl;

    cout<<"     |     |     "<<endl;
}


void TicTacToe::markBoard(char mark)
{
       
    if ((choice >= 1 && choice <=9 && (square[choice] == 'X' || square[choice] == 'O' )) || (choice <1 || choice >9) )
    {
        cout<<"\t\t\t\t\t||||****************** INVALID MOVE ***********************||||\n\n"<<endl;

        player--;
     
    }
    else
    {
        square[choice] = mark;
    }

}



int main()
{
    TicTacToe game;
    int gameStatus;

    char mark;

    game.player = 1;

    cout<<"\t\t"<<"=========================================================================================================="<<endl;
    cout<<"\t\t\t\t\t\t\t\tTic Tac Toe"<<endl;
    cout<<"\t\t"<<"==========================================================================================================\n\n\n"<<endl;

    do
    {
      game.displayBoard();

      game.player = (game.player % 2) ? 1 : 2;

      cout<<"Player "<<game.player<<": ";
      cin>>game.choice;
      mark = (game.player == 1) ? 'X' : 'O';

      // set board based on user choice or invalid choice
      game.markBoard(mark);

      gameStatus = game.checkForWin();

      game.player++;

    }while (gameStatus == -1);

    if (gameStatus == 1){
        
        cout<<"\t\t"<<"--------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"\t\t"<<"|                                           \aPlayer"<<" "<<--game.player<<" "<<"Win"<<"                                               |"<<endl;
        cout<<"\t\t"<<"|                                                                                                      |"<<endl;
        cout<<"\t\t"<<"--------------------------------------------------------------------------------------------------------"<<endl;
    
    }else{
        cout<<"\t\t"<<"--------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"\t\t"<<"|                                            \aGame Draw             "<<"                                    |"<<endl;
        cout<<"\t\t"<<"|                                                                                                      |"<<endl;
        cout<<"\t\t"<<"--------------------------------------------------------------------------------------------------------"<<endl;
    }return 0;
}