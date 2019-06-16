#pragma
#define dohoa_h_
#ifdef dohoa_h_
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <string.h>
#include <windows.h>
#include<fstream>
#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include<iostream>
using namespace std;
void VeKhungCH(int x, int y, int width, int height, bool draw);
void resizeConsole(int width, int height);
void textcolor(int x);
void gotoxy(int x, int y);
void XoaManHinh();
void ToMau(int x, int y, const char *a, int color);
void loading(int x, int y);
void PR(int xgoc, int ygoc, int xdich, int ydich, const char *xau, int tre, int mau, int cach);
void Rectangle1(int x, int y, int z, int t,  int k, int p, int m, int l, int o);
void drawsomething();
void drawstraight(int x,int y);
#endif // !dohoa_h_