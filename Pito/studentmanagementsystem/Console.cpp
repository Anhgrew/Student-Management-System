#include <stdio.h>
#include <conio.h>
#include "Console.h"


int inputKey()
{
	if (_kbhit())
	{
		int key = _getch();
		if (key == 224)
		{
			key = _getch();
			return key + 1000;
		}
		return key;
	}
	else
	{
		return key_none;
	}
	return key_none;
}


//-------------------------Screen-------------------------
void clrscr()
{
	CONSOLE_SCREEN_BUFFER_INFO	csbiInfo;
	HANDLE	hConsoleOut;
	COORD	Home = { 0,0 };
	DWORD	dummy;

	hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hConsoleOut, &csbiInfo);

	FillConsoleOutputCharacter(hConsoleOut, ' ', csbiInfo.dwSize.X * csbiInfo.dwSize.Y, Home, &dummy);
	csbiInfo.dwCursorPosition.X = 0;
	csbiInfo.dwCursorPosition.Y = 0;
	SetConsoleCursorPosition(hConsoleOut, csbiInfo.dwCursorPosition);
}


//screen: goto [x,y]
void gotoXY(int col, int row)
{
	COORD coord;
	coord.X = col;
	coord.Y = row;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


//screen: get [x]
int whereX()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi))
		return csbi.dwCursorPosition.X;
	return -1;
}


//screen: get [y]
int whereY()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi))
		return csbi.dwCursorPosition.Y;
	return -1;
}


void TextColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int ShutDown()
{
	clrscr();
	string t[4][1] =
	{
		{"Are you sure to quit ?"},
		{"Press '1' to quit"},
		{"Press '2' to go back to Main Menu"},
		{" Your selection: "}
	};
	int i = -1;
	while (i <= 2)
	{
		gotoXY(consoleWidth - int(t[i][1].length()) / 2, (consoleHeight / 2) + i - 3);
		if (i != 2)
			cout << t[i][1] << endl;
		else
			cout << t[i][1];
		i++;
	}
	int key;
	do
	{
		cin >> key;
		switch (key)
		{
		case 1: return 1;
		case 2: return 0;
		}
	} while (1 > 0);
	return 0;
}

