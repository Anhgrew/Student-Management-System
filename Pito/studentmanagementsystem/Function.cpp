#include "Function.h"

using namespace std;

void firstcreen()
{
	ifstream fin;
	for (int i = 0; i < 16; i++)
	{

		fin.open("welcome.txt", ios::in);
		while (!fin.eof())
		{
			char a;
			fin.get(a);
			textcolor(i);
			cout << a;

		}
		Sleep(35);
		fin.close();
		system("cls");
	}

	system("cls");
	textcolor(78);

	fin.open("Text0.txt", ios::in);
	while (!fin.eof())
	{
		char a;
		fin.get(a);
		textcolor(4);
		cout << a;
	}
	fin.close();
	textcolor(98);
	Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 178);
	VeKhungCH(4, 2, 114, 9, true);
	VeKhungCH(6, 3, 110, 7, true);
	drawsomething();
	PR(38, 30, 38, 21, " WELCOME TO MY STUDENT MANAGEMENT PROGRAM ", 1, 7, 1);
	VeKhungCH(34, 20, 48, 2, true);
	VeKhungCH(32, 34, 52, 5, true);
	PR(38, 36, 38, 35, "       PROJECT CS162 OF GROUP IX   ", 1, 14, 1);
	ToMau(38, 36, "     .............MEMBER............. ", 14);
	PR(80, 37, 38, 37, "      NGUYEN TIEN ANH - HUYNH NHAT TAN. ", 1, 11, 1);
	PR(82, 38, 33, 38, "NGUYEN MINH NHUT - LUU HOANG LONG - HUYNH MINH TU.", 1, 11, 1);
	Sleep(1000);
	system("cls");
	textcolor(14);
	Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 226);
	loading(49, 7);
	fin.open("Text2.txt", ios::in);
	while (!fin.eof())
	{
		char a;
		fin.get(a);
		textcolor(10);
		cout << a;
	}
	fin.close();
	Rectangle1(7, 114, 5, 14, 6, 14, 8, 113, 178);
	textcolor(9);
}

void login(char id[21], char pass[21], LoginStudent &is_Student, LoginLecturer &is_Lecturer, vector <Class> sc, vector <Lecturer> p)
{
	Rectangle1(0, 123, 0, 40, 0, 41, 0, 122,177);
	int count = 0;
    int choice;
	int out = 0;
	bool admin = false;
	if (is_Student.check || is_Lecturer.check || admin) return;
	while (out == 0) //outer while
	{
		VeKhungCH(46, 16, 28, 9, true);
		VeKhungCH(52, 18, 16, 2, true);
		VeKhungCH(7, 4, 107, 32, true);
		gotoxy(53, 19);
		cout << " | 1. Login  |\n";
		VeKhungCH(52, 21, 16, 2, true);
		gotoxy(53, 22);
		cout << " | 2. Exit   |\n";
		VeKhungCH(45, 36, 31, 2, true);
		gotoxy(46, 37);
		cout << " Please enter your choice: ";
		gotoxy(72, 37);
		cin >> choice;
		system("cls");
		if (choice !=1 && choice !=2) 
		{
			gotoxy(46, 37);
			cout << "Incorrect input, please input again" << endl;
			_getch();
			system("cls");
			login(id, pass, is_Student, is_Lecturer, sc, p);
		}
		switch (choice) //1st switch
		{	
			case 1: //Login
			{ 
				Rectangle1(0, 123, 0, 40, 0, 41, 0, 122,178);
				char skt[13] = "MEMBER LOGIN";
				ToMau(50, 13, skt, 12);
				textcolor(10);
				VeKhungCH(34, 11, 43, 13, true);
				for (int i = 35; i < 77; i++)
				{				
					gotoxy(i, 14);
					cout << char(196);
				}
				textcolor(14);
				VeKhungCH(47, 16, 27, 2, true);
				gotoxy(37, 17);
				cout << "Username: ";
				VeKhungCH(47, 19, 27, 2, true);
				gotoxy(37, 20);
				cout << "Password: ";
				gotoxy(49, 17);
				cin >> id;
				gotoxy(49, 20);
				int i;
				char tmp = '\0', match[21], user1[] = "admin", pass1[] = "pass";
				for (i = 0; i >= 0;)
				{
					tmp = _getch();
					if (tmp != 8 && tmp != 13)
					{
						cout << "*";
						match[i] = tmp;
						i++;
					}
					else if (tmp == 8) // if backspace is presssed
					{
						cout << "\b \b"; // moves cursor to the left print <space> again move cursor to left
						i--;
					}
					else if (tmp == 13)
					{
						match[i] = '\0'; // if enter is pressed, last character in match[] becomes null
						break;
					}
					else
					{
						break;
					}
				}

				for (int i = 0; i < sc.size(); i++)
					for (int j = 0; j < sc[i].mon.size(); j++)
						if (atol(id) == sc[i].mon[j].ID && match == sc[i].mon[j].password)
						{
							is_Student.check = true;
							is_Student.s = sc[i].mon[j];
							system("cls");
							VeKhungCH(45, 17, 34, 2, true);
							gotoxy(48, 18);
							textcolor(12);
							cout << "Welcome " << sc[i].mon[j].lName << " " << sc[i].mon[j].fName << endl;
							Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 178);
							_getch();
							return;
						}

				for (int i = 0; i < p.size(); i++)
					if (id == p[i].username && match == p[i].password)
					{
						is_Lecturer.check = true;
						is_Lecturer.t = p[i];
						system("cls");
						VeKhungCH(42, 17, 19, 2, true);
						gotoxy(45, 18);
						textcolor(12);
						std::cout << "Welcome ";
						if (p[i].gender == "Male") std::cout << "Mr. ";
						else std::cout << "Ms. ";
						std::cout << p[i].Name << endl;
						Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 178);
						_getch();
						return;
					}

				if ((strcmp(id, user1) == 0) && (strcmp(match, pass1) == 0))
				{
					admin = true;
					system("cls");
					VeKhungCH(45, 17, 25, 2, true);
					gotoxy(47, 18);
					textcolor(12);
					cout << "WELCOME ALMIGHTY ADMIN" << endl;
					Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 178);
					_getch();
					return;
				}
				else
				{
					system("cls");
					count++;
					VeKhungCH(38, 17, 37, 4, true);
					gotoxy(42, 18);
					textcolor(73);
					cout << "Your session has time out !!!\n";
					gotoxy(48, 20);
					cout << "Please login again\n";
				Rectangle1(0, 123, 0, 40, 0, 41, 0, 122,178);
					_getch();
					system("cls");
					if (count > 6) {
						textcolor(73);
						VeKhungCH(13, 17, 90, 2, true);
						gotoxy(20, 18);
					Rectangle1(0, 123, 0, 40, 0, 41, 0, 122,178);
						cout << "You 've tried to login too many times with an incorrect user name or password!!!\n";
					Rectangle1(0, 123, 0, 40, 0, 41, 0, 122,178);
						_getch();
						exit(0);
					}
					else 
					{
						continue;
					}
				}
				break;
			}
			break;
		case 2:
		{
			out += 1;
			exit(1);
			break;
		}
		}//outer switch
		break;
	}//outer while
}

void changepassword(LoginStudent &is_Student, LoginLecturer &is_Lecturer, vector <Class> &sc, vector <Lecturer> &p)
{
	while ((getchar()) != '\n');
	while (1)
	{
		Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 177);
		gotoxy(42, 10);
		std::cout << "Please enter your current password: ";
		string curpas;
		getline(std::cin, curpas, '\n');
		if (is_Student.check)
		{
			if (curpas != is_Student.s.password)
			{
				system("cls");
				VeKhungCH(45, 17, 27, 2, true);
				gotoxy(52, 18);
				textcolor(4);
				std::cout << "WRONG PASSWORD!" << endl << endl;
				Sleep(2000);
				system("cls");
			}
			else break;
		}
		else if (is_Lecturer.check)
		{
			if (curpas != is_Lecturer.t.password)
			{
				system("cls");
				VeKhungCH(45, 17, 27, 2, true);
				gotoxy(52, 18);
				textcolor(4);
				std::cout << "WRONG PASSWORD!" << endl << endl;
				Sleep(2000);
				system("cls");
				continue;
			}
			else break;
		}

	}
	while (1)
	{

		system("cls");
		string p1, p2;
		gotoxy(42, 10);
		std::cout << "Please enter your new password: ";
		getline(std::cin, p1, '\n');
		gotoxy(42, 12);
		std::cout << "Please re-enter your new password: ";
		getline(std::cin, p2, '\n');
		if (p1 != p2) std::cout << "Your new password doesn't match! Please try again." << endl << endl;
		else
		{
			if (is_Student.check)
			{
				for (int i = 0; i < sc.size(); i++)
					for (int j = 0; j < sc[i].mon.size(); j++)
						if (sc[i].mon[j].ID == is_Student.s.ID)
						{
							sc[i].mon[j].password = p1;
							system("cls");
							VeKhungCH(45, 17, 27, 2, true);
							gotoxy(47, 18);
							textcolor(12);
							std::cout << "^^^ PASSWORD CHANGED ^^^" << endl;
							return;
						}
			}
			else if (is_Lecturer.check)
			{
				for (int i = 0; i < p.size(); i++)
					if (p[i].username == is_Lecturer.t.username)
					{
						p[i].password = p1;
						system("cls");
						VeKhungCH(45, 17, 27, 2, true);
						gotoxy(47, 18);
						textcolor(12);
						std::cout << "^^^ PASSWORD CHANGED ^^^" << endl;
						return;
					}
			}
		}
	}
}


