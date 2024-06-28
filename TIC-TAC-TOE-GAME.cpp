#include <iostream>
#include <string>
using namespace std;

void play_game();
void play_game2();
void drawBoard(char *spaces);
void player_1Move(char *spaces, char player_1);
void player_2Move(char *spaces, char player_2);
bool checkWinner(char *spaces, char player_1, char player_2);
bool checkTie(char *spaces);

int main()
{  
   cout <<"DO YOU WANT TO PLAY THE GAME OF TIC-TAC-TOE?\n0.NO OR 1.YES\n";
   int reply;
   cin >> reply;
   if (reply == 1)
   {
        play_game();
        cout << "DO YOU WANT TO PLAY ONE MORE GAME?\n0.NO OR 1.YES\n";
        int ans;
        cin >> ans;
        if (ans == 1)
        {
            play_game2();
        }
        else
        {
            cout << "LET'S PLAY SOMEOTHER TIME!\n";
        }
   } 
   else
   {
    cout << "HAVE A GOOD DAY THEN!\n";
   }
    system("pause");
    return 0;
}

void play_game()
{
    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player_1 = 'X';
    char player_2 = 'O'; 
    bool running = true;
    
    drawBoard(spaces);

    while(running)
    {
        player_1Move(spaces , player_1);
        drawBoard(spaces);
        if(checkWinner(spaces,player_1,player_2))
        {
            running = false;
            break;
        }

        else if(checkTie(spaces))
        {
            running = false;
            break;
        }

        player_2Move(spaces , player_2);
        drawBoard(spaces);
        if(checkWinner(spaces,player_1,player_2))
        {
            running = false;
            break;
        }

        else if(checkTie(spaces))
        {
            running = false;
            break;
        }
    }
    cout << "THANKS FOR PLAYING!\n";
}
void play_game2()
{
    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player_1 = '0';
    char player_2 = 'x'; 
    bool running = true;
    
    drawBoard(spaces);

    while(running)
    {
        player_1Move(spaces , player_1);
        drawBoard(spaces);
        if(checkWinner(spaces,player_1,player_2))
        {
            running = false;
            break;
        }

        else if(checkTie(spaces))
        {
            running = false;
            break;
        }

        player_2Move(spaces , player_2);
        drawBoard(spaces);
        if(checkWinner(spaces,player_1,player_2))
        {
            running = false;
            break;
        }

        else if(checkTie(spaces))
        {
            running = false;
            break;
        }
    }
    cout << "THANKS FOR PLAYING!\n";
}
void drawBoard(char *spaces)
{
    cout <<'\n';
    cout <<"     |     |     "<< '\n';
    cout <<"  " <<spaces[0]<< "  |  "  << spaces[1] << "  |  " << spaces[2] << '\n';
    cout <<"_____|_____|_____"<< '\n';
    cout <<"     |     |     "<< '\n';
    cout <<"  " <<spaces[3]<< "  |  "  << spaces[4] << "  |  " << spaces[5] << '\n';
    cout <<"_____|_____|_____"<< '\n';
    cout <<"     |     |     "<< '\n';
    cout <<"  " <<spaces[6]<< "  |  "  << spaces[7] << "  |  " << spaces[8] << '\n';
    cout <<"     |     |     "<< '\n';
    cout<<'\n';

}   
void player_1Move(char *spaces, char player_1)
{
    int number;
    do
    {
        cout << "Player_1 enter a spot to place a marker (1-9): ";
        cin >> number;
        number --;
        if (spaces[number] == ' ')
        {
            spaces[number] = player_1;
            cout << "The game is ongoing!\n";
            break;
        }
    }
    while(!number > 0 || !number < 8);

}
void player_2Move(char *spaces, char player_2)
{
    int number;
    do
    {
        cout << "Player_2 enter a spot to place a marker (1-9): ";
        cin >> number;
        number --;
        if (spaces[number] == ' ')
        {
            spaces[number] = player_2;
            cout << "The game is ongoing!\n";
            break;
        }
    }
    while(!number > 0 || !number < 8);

}
bool checkWinner(char *spaces, char player_1, char player_2)
{
    if((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2]))
    {
        spaces[0] == player_1 ? cout << "Player_1 Win!\n" : cout << "Player_2 Win!\n";
    }
    else if((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5]))
    {
        spaces[3] == player_1 ? cout << "Player_1 Win!\n" : cout << "Player_2 Win!\n";
    }
    else if((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8]))
    {
        spaces[6] == player_1 ? cout << "Player_1 Win!\n" : cout << "Player_2 Win!\n";
    }
    else if((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6]))
    {
        spaces[0] == player_1 ? cout << "Player_1 Win!\n" : cout << "Player_2 Win!\n";
    }
    else if((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7]))
    {
        spaces[1] == player_1 ? cout << "Player_1 Win!\n" : cout << "Player_2 Win!\n";
    }
    else if((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8]))
    {
        spaces[2] == player_1 ? cout << "Player_1 Win!\n" : cout << "Player_2 Win!\n";
    }
    else if((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8]))
    {
        spaces[0] == player_1 ? cout << "Player_1 Win!\n" : cout << "Player_2 Win!\n";
    }
    else if((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6]))
    {
        spaces[2] == player_1 ? cout << "Player_1 Win!\n" : cout << "Player_2 Win!\n";
    }
    else
    {
        return false;
    }
    return true;
}
bool checkTie(char *spaces)
{
    for(int i = 0; i < 9; i++)
    {
        if (spaces[i] == ' ')
        {
            return false;
        }
    }
    cout << "IT'S A TIE!\n";
    return true;
}
