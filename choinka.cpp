#include <iostream>
#include <cstdlib>
#include "windows.h"
#include <conio.h>

using namespace std;

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main( int argc, char* argv[])
{
    int x = 40;
    int y = 1;
    int i, j;
    int k;
    cout<<"Podaj wysokosc choinki: "<<endl;
    cin>>k;
    for (i= 1;i<=k+1;i++)
    {
        gotoxy(x, y+i);
        cout<<"*";
    for (j=1-i;j<i;j++)
{
    gotoxy(x+j, y+i);
        cout<<"*";
}
}
    return 0;
}
