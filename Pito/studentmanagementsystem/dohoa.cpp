#include "dohoa.h"
void resizeConsole(int width, int height)
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, width, height, TRUE);
}  
void gotoxy(int x, int y)
{
	HANDLE hConsoleOutput;
	COORD Cursor_an_Pos = { x,y };
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, Cursor_an_Pos);
}
void VeKhungCH(int x, int y, int width, int height, bool draw) {
	//vẽ khung chữ nhật
	if (draw){
		//vẽ trước 4 góc
		//góc trên bên trái
		gotoxy(x, y);
		cout << char(218);
		//vẽ góc trên bên phải
		gotoxy(x + width, y);
		cout << char(191);
		//vẽ góc dưới bên trái
		gotoxy(x, y + height);
		cout << char(192);
		//vẽ góc dưới bên phải
		gotoxy(x + width, y + height);
		cout << char(217);

		//vẽ chiều ngang bên trên
		for (int i = x + 1; i < (x + width); i++){
			gotoxy(i, y);
			cout << char(196);
		}
		//vẽ chiều ngang bên dưới
		for (int i = x + 1; i < (x + width); i++){
			gotoxy(i, y+height);
			cout << char(196);
		}
		//vẽ chiều dọc bên trái
		for (int i = y + 1; i < (y + height); i++){
			gotoxy(x, i);
			cout << char(179);
		}
		//vẽ chiều dọc bên phải
		for (int i = y + 1; i < (y + height); i++){
			gotoxy(x+width, i);
			cout << char(179);
		}
	}
	else {
		//vẽ trước 4 góc
		//góc trên bên trái
		gotoxy(x, y);
		cout << " ";
		//vẽ góc trên bên phải
		gotoxy(x + width, y);
		cout << " ";
		//vẽ góc dưới bên trái
		gotoxy(x, y + height);
		cout << " ";
		//vẽ góc dưới bên phải
		gotoxy(x + width, y + height);
		cout << " ";

		//vẽ chiều ngang bên trên
		for (int i = x + 1; i < (x + width); i++){
			gotoxy(i, y);
			cout << " ";
		}
		//vẽ chiều ngang bên dưới
		for (int i = x + 1; i < (x + width); i++){
			gotoxy(i, y + height);
			cout << " ";
		}
		//vẽ chiều dọc bên trái
		for (int i = y + 1; i < (y + height); i++){
			gotoxy(x, i);
			cout << " ";
		}
		//vẽ chiều dọc bên phải
		for (int i = y + 1; i < (y + height); i++){
			gotoxy(x + width, i);
			cout << " ";
		}

	}
}
void textcolor(int x)
{
	HANDLE mau;
	mau = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau, x);
}
void XoaManHinh()
{
	HANDLE hOut;
	COORD Position;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	Position.X = 0;
	Position.Y = 0;
	SetConsoleCursorPosition(hOut, Position);
}
void ToMau(int x, int y, const char*a, int color) // x, y là tọa độ con trỏ cần nhảy đến để viết, a là chuỗi cần truyền vào, color là màu truyền vào.
{
	gotoxy(x, y);
	textcolor(color);
	cout << a;
	textcolor(7);
}
void loading(int x, int y)
{
	textcolor(10);
	VeKhungCH(x - 18, y - 1, 57, 2, true);
	int i, c, d;
	char a = 177, b = 219;
	gotoxy(x + 8, y);
	cout << "LOADING";
	gotoxy(x + 1, y);
	for (i = 0; i < 55; i++) {
		c = rand() % 40;
		Sleep(c);
		cout << "\r\r";
		cout << "\t\t\t\t";
	}
	for (i = 0; i < 56; i++) {
		cout << b;
		d = rand() % 20;
		Sleep(d);
	}
	system("cls");
}
void PR(int xgoc, int ygoc, int xdich, int ydich, const char*xau, int tre, int mau, int cach)
{
	int i, j = 0;
	textcolor(mau);
	if (xgoc == xdich && ygoc > ydich&&cach == 1)
	{
		for (j = 0; j <= strlen(xau); j++)
		{
			if (xau[j] != 32)
				for (i = ygoc; i >= ydich; i--)
				{
					gotoxy(xgoc, i); _putch(xau[j]);
					gotoxy(xgoc, i + 1); _putch(' ');
					Sleep(tre);
				}
			else { gotoxy(xgoc, ydich); _putch(' '); }
			xgoc++;
		}
	}

	if (ydich == ygoc && xgoc > xdich&&cach == 1)
	{
		for (j = 0; j <= strlen(xau); j++)
		{
			if (xau[j] != 32)
				for (i = xgoc; i >= xdich; i--)
				{
					gotoxy(i, ygoc); printf("%c ", xau[j]);
					Sleep(tre);
				}
			else { gotoxy(xgoc, ydich); _putch(' '); }
			xdich++;
		}

	}
}
void Rectangle1(int x, int y, int z, int t,int k, int p, int m, int l,int o)
{
	for (int i = x; i < y; i++) {
		gotoxy(i, z);
		cout << char(o);
		gotoxy(i, t);
		cout << char(o);
	}
	for (int j = k; j < p; j++) {
		gotoxy(m, j);
		cout << char(o);
		gotoxy(l, j);
		cout << char(o);

	}
}
void drawsomething()
{
	for (int i = 12; i < 40; i++) {
		textcolor(12);
		gotoxy(8, i);
		cout << char(178) << char(178) << char(178);
		gotoxy(112, i);
		cout << char(178) << char(178) << char(178);

		Sleep(20);


	}
	gotoxy(4, 40);
	for (int i = 0; i < 115; i++) {
		cout << char(178);
	}
}

void drawstraight(int x, int y)
{
	for (int i = 40; i < 82; i++) {
		gotoxy(i, x);
		cout << char(y);
	}
}

