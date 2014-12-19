/*
Hristiyan Markov, Statistics, f.n. 147
*/

#include <iostream>
#include <string>
using namespace std;

char pole[3][3] = {'_', '_', '_', '_', '_', '_', '_', '_', '_'}; // default

//char pole[3][3] = {'X','O','X','O','X','O','X','O','X'}; // X wins here

string winner;

// Checks if coords entered are legal
int legal(int n, int m)
{
    // checks if spot is already taken
    if(pole[n][m]!='_')
        return 0;
    // checks if spot is in board
    if(n<0 || n>2 || m<0 || m>2)
        return 0;
}

// Displays the board
void displaypole()
{
    cout << endl;
    for(int i=0; i<=2; i++)
    {
        for(int j=0; j<=2; j++)
        {
            if(j==2)
            {
                cout << pole[i][j];
                cout << endl;
            }
            else
                cout << pole[i][j];
        }
    }
    cout << endl;
}

// Checks for ...winner. If statements separated for easier readability.
int checkwin()
{
    // check first row
    if(pole[0][0]==pole[0][1] && pole[0][1]==pole[0][2] && pole[0][0]!='_')
    {
        winner=pole[0][0];
        return 1;
    }
    // check second row
    if(pole[1][0]==pole[1][1] && pole[1][1]==pole[1][2] && pole[1][0]!='_')
    {
        winner=pole[1][0];
        return 1;
    }
    // check third row
    if(pole[2][0]==pole[2][1] && pole[2][1]==pole[2][2] && pole[2][0]!='_')
    {
        winner=pole[2][0];
        return 1;
    }
    // check first column
    if(pole[0][0]==pole[1][0] && pole[1][0]==pole[2][0] && pole[0][0]!='_')
    {
        winner=pole[0][0];
        return 1;
    }
    // check second column
    if(pole[0][1]==pole[1][1] && pole[1][1]==pole[2][1] && pole[0][1]!='_')
    {
        winner=pole[0][1];
        return 1;
    }
    // check third column
    if(pole[0][2]==pole[1][2] && pole[1][2]==pole[2][2] && pole[0][2]!='_')
    {
        winner=pole[0][2];
        return 1;
    }
    // check diagonals
    if((pole[0][0]==pole[1][1] && pole[1][1]==pole[2][2] && pole[1][1]!='_') || (pole[0][2]==pole[1][1] && pole[1][1]==pole[2][0] && pole[1][1]!='_'))
    {
        winner=pole[1][1];
        return 1;
    }
    else
    {
        winner="No one";
        return 0;
    }
}

int main()
{
    char player1='X', player2='O';
    int a, b, counter=1;
    cout << "Enter coords as 2 integers as follows:\n" << endl;
    cout << "0 0 | 0 1 | 0 2\n---------------\n1 0 | 1 1 | 1 2\n---------------\n2 0 | 2 1 | 2 2\n" << endl;

    do
    {
        cout << "X:" << endl;
        do
        {
            cin >> a >> b;
        }
        while(!legal(a, b));

        pole[a][b]='X';
        counter++;
        displaypole();
        if(checkwin()==1)
            break;

        cout << "O:" << endl;
        do
        {
            cin >> a >> b;
        }
        while(!legal(a, b));

        pole[a][b]='O';
        counter++;
        displaypole();

        if(checkwin()==1)
            break;

    }
    while(counter<10);

    cout << "===========================" << endl;
    cout << winner << " wins!\n";
    cout << "===========================" << endl;

    displaypole();
}
