#include "Class.h"	 
#include<iostream>

using namespace std;

void Student::Schedule(Academic_year MAIN)
{
	std::cout << "                  ----- SCHEDULE OF" << ID << lName << " " << fName << " -----           " << endl;
	std::cout << "    Day        Monday    Tuesday    Wednesday    Thursday    Friday    Saturday    Sunday" << endl << endl;
	std::cout << "   7:30" << endl;
	std::cout << "    to " << endl;
	std::cout << "   9:30" << endl << endl;
	std::cout << "   9:30" << endl;
	std::cout << "    to " << endl;
	std::cout << "   11:30" << endl << endl;
	std::cout << "   13:30" << endl;
	std::cout << "    to " << endl;
	std::cout << "   15:30" << endl << endl;
	std::cout << "   15:30" << endl;
	std::cout << "    to " << endl;
	std::cout << "   17:30" << endl << endl;
	for (int i = 0; i < study.size(); i++)
	{
		for (int j = 0; j < MAIN.C.size(); j++)
			if (study[i].ID == MAIN.C[j].ID)
			{
				int dd;
				if (MAIN.C[j].Day == "Mon") dd = 1;
				else if (MAIN.C[j].Day == "Tue") dd = 2;
				else if (MAIN.C[j].Day == "Wed") dd = 3;
				else if (MAIN.C[j].Day == "Thu") dd = 4;
				else if (MAIN.C[j].Day == "Fri") dd = 5;
				else if (MAIN.C[j].Day == "Sat") dd = 6;
				else if (MAIN.C[j].Day == "Sun") dd = 7;
				switch (dd)
				{
				case 1:
				{
					if (MAIN.C[j].EndTime.h < 10)
					{
						gotoXY(14, 3);
						std::cout << MAIN.C[j].ID;
						gotoXY(13, 4);
						std::cout << MAIN.C[j].lecturer_account;
						gotoXY(14, 5);
						std::cout << MAIN.C[j].Room;
					}
					else if (MAIN.C[j].EndTime.h < 13)
					{
						gotoXY(14, 7);
						std::cout << MAIN.C[j].ID;
						gotoXY(13, 8);
						std::cout << MAIN.C[j].lecturer_account;
						gotoXY(14, 9);
						std::cout << MAIN.C[j].Room;
					}
					else if (MAIN.C[j].EndTime.h < 16)
					{
						gotoXY(14, 11);
						std::cout << MAIN.C[j].ID;
						gotoXY(13, 12);
						std::cout << MAIN.C[j].lecturer_account;
						gotoXY(14, 13);
						std::cout << MAIN.C[j].Room;
					}
					else if (MAIN.C[j].EndTime.h < 18)
					{
						gotoXY(14, 15);
						std::cout << MAIN.C[j].ID;
						gotoXY(13, 16);
						std::cout << MAIN.C[j].lecturer_account;
						gotoXY(14, 17);
						std::cout << MAIN.C[j].Room;
					}
					break;
				}

				case 2:
				{
					if (MAIN.C[j].EndTime.h < 10)
					{
						gotoXY(24, 3);
						std::cout << MAIN.C[j].ID;
						gotoXY(23, 4);
						std::cout << MAIN.C[j].lecturer_account;
						gotoXY(24, 5);
						std::cout << MAIN.C[j].Room;
					}
					else if (MAIN.C[j].EndTime.h < 13)
					{
						gotoXY(24, 7);
						std::cout << MAIN.C[j].ID;
						gotoXY(23, 8);
						std::cout << MAIN.C[j].lecturer_account;
						gotoXY(24, 9);
						std::cout << MAIN.C[j].Room;
					}
					else if (MAIN.C[j].EndTime.h < 16)
					{
						gotoXY(24, 11);
						std::cout << MAIN.C[j].ID;
						gotoXY(23, 12);
						std::cout << MAIN.C[j].lecturer_account;
						gotoXY(24, 13);
						std::cout << MAIN.C[j].Room;
					}
					else if (MAIN.C[j].EndTime.h < 18)
					{
						gotoXY(24, 15);
						std::cout << MAIN.C[j].ID;
						gotoXY(23, 16);
						std::cout << MAIN.C[j].lecturer_account;
						gotoXY(24, 17);
						std::cout << MAIN.C[j].Room;
					}
					break;
				}

				case 3:
				{
					if (MAIN.C[j].EndTime.h < 10)
					{
						gotoXY(34, 3);
						std::cout << MAIN.C[j].ID;
						gotoXY(33, 4);
						std::cout << MAIN.C[j].lecturer_account;
						gotoXY(34, 5);
						std::cout << MAIN.C[j].Room;
					}
					else if (MAIN.C[j].EndTime.h < 13)
					{
						gotoXY(34, 7);
						std::cout << MAIN.C[j].ID;
						gotoXY(33, 8);
						std::cout << MAIN.C[j].lecturer_account;
						gotoXY(34, 9);
						std::cout << MAIN.C[j].Room;
					}
					else if (MAIN.C[j].EndTime.h < 16)
					{
						gotoXY(34, 11);
						std::cout << MAIN.C[j].ID;
						gotoXY(33, 12);
						std::cout << MAIN.C[j].lecturer_account;
						gotoXY(34, 13);
						std::cout << MAIN.C[j].Room;
					}
					else if (MAIN.C[j].EndTime.h < 18)
					{
						gotoXY(34, 15);
						std::cout << MAIN.C[j].ID;
						gotoXY(33, 16);
						std::cout << MAIN.C[j].lecturer_account;
						gotoXY(34, 17);
						std::cout << MAIN.C[j].Room;
					}

					break;
				}

				case 4:
				{
					if (MAIN.C[j].EndTime.h < 10)
					{
						gotoXY(44, 3);
						std::cout << MAIN.C[j].ID;
						gotoXY(43, 4);
						std::cout << MAIN.C[j].lecturer_account;
						gotoXY(44, 5);
						std::cout << MAIN.C[j].Room;
					}
					else if (MAIN.C[j].EndTime.h < 13)
					{
						gotoXY(44, 7);
						std::cout << MAIN.C[j].ID;
						gotoXY(43, 8);
						std::cout << MAIN.C[j].lecturer_account;
						gotoXY(44, 9);
						std::cout << MAIN.C[j].Room;
					}
					else if (MAIN.C[j].EndTime.h < 16)
					{
						gotoXY(44, 11);
						std::cout << MAIN.C[j].ID;
						gotoXY(43, 12);
						std::cout << MAIN.C[j].lecturer_account;
						gotoXY(44, 13);
						std::cout << MAIN.C[j].Room;
					}
					else if (MAIN.C[j].EndTime.h < 18)
					{
						gotoXY(44, 15);
						std::cout << MAIN.C[j].ID;
						gotoXY(43, 16);
						std::cout << MAIN.C[j].lecturer_account;
						gotoXY(44, 17);
						std::cout << MAIN.C[j].Room;
					}

					break;
				}
				case 5:
				{
					if (MAIN.C[j].EndTime.h < 10)
					{
						gotoXY(54, 3);
						std::cout << MAIN.C[j].ID;
						gotoXY(53, 4);
						std::cout << MAIN.C[j].lecturer_account;
						gotoXY(54, 5);
						std::cout << MAIN.C[j].Room;
					}
					else if (MAIN.C[j].EndTime.h < 13)
					{
						gotoXY(54, 7);
						std::cout << MAIN.C[j].ID;
						gotoXY(53, 8);
						std::cout << MAIN.C[j].lecturer_account;
						gotoXY(54, 9);
						std::cout << MAIN.C[j].Room;
					}
					else if (MAIN.C[j].EndTime.h < 16)
					{
						gotoXY(54, 11);
						std::cout << MAIN.C[j].ID;
						gotoXY(53, 12);
						std::cout << MAIN.C[j].lecturer_account;
						gotoXY(54, 13);
						std::cout << MAIN.C[j].Room;
					}
					else if (MAIN.C[j].EndTime.h < 18)
					{
						gotoXY(54, 15);
						std::cout << MAIN.C[j].ID;
						gotoXY(53, 16);
						std::cout << MAIN.C[j].lecturer_account;
						gotoXY(54, 17);
						std::cout << MAIN.C[j].Room;
					}
					break;
				}
				case 6:
				{
					if (MAIN.C[j].EndTime.h < 10)
					{
						gotoXY(64, 3);
						std::cout << MAIN.C[j].ID;
						gotoXY(63, 4);
						std::cout << MAIN.C[j].lecturer_account;
						gotoXY(64, 5);
						std::cout << MAIN.C[j].Room;
					}
					else if (MAIN.C[j].EndTime.h < 13)
					{
						gotoXY(64, 7);
						std::cout << MAIN.C[j].ID;
						gotoXY(63, 8);
						std::cout << MAIN.C[j].lecturer_account;
						gotoXY(64, 9);
						std::cout << MAIN.C[j].Room;
					}
					else if (MAIN.C[j].EndTime.h < 16)
					{
						gotoXY(64, 11);
						std::cout << MAIN.C[j].ID;
						gotoXY(63, 12);
						std::cout << MAIN.C[j].lecturer_account;
						gotoXY(64, 13);
						std::cout << MAIN.C[j].Room;
					}
					else if (MAIN.C[j].EndTime.h < 18)
					{
						gotoXY(64, 15);
						std::cout << MAIN.C[j].ID;
						gotoXY(63, 16);
						std::cout << MAIN.C[j].lecturer_account;
						gotoXY(64, 17);
						std::cout << MAIN.C[j].Room;
					}
					break;
				}
				case 7:
				{
					if (MAIN.C[j].EndTime.h < 10)
					{
						gotoXY(74, 3);
						std::cout << MAIN.C[j].ID;
						gotoXY(73, 4);
						std::cout << MAIN.C[j].lecturer_account;
						gotoXY(74, 5);
						std::cout << MAIN.C[j].Room;
					}
					else if (MAIN.C[j].EndTime.h < 13)
					{
						gotoXY(74, 7);
						std::cout << MAIN.C[j].ID;
						gotoXY(73, 8);
						std::cout << MAIN.C[j].lecturer_account;
						gotoXY(74, 9);
						std::cout << MAIN.C[j].Room;
					}
					else if (MAIN.C[j].EndTime.h < 16)
					{
						gotoXY(74, 11);
						std::cout << MAIN.C[j].ID;
						gotoXY(73, 12);
						std::cout << MAIN.C[j].lecturer_account;
						gotoXY(74, 13);
						std::cout << MAIN.C[j].Room;
					}
					else if (MAIN.C[j].EndTime.h < 18)
					{
						gotoXY(74, 15);
						std::cout << MAIN.C[j].ID;
						gotoXY(73, 16);
						std::cout << MAIN.C[j].lecturer_account;
						gotoXY(74, 17);
						std::cout << MAIN.C[j].Room;
					}
					break;
				}
				}
			}
	}
}
// Donee

void Class::Remove_one(Student s)
{
	mon.erase(mon.begin() + s.No - 1);
	for (int i = s.No - 1; i < mon.size(); i++)
		mon[i].No = mon[i].No - 1;
}
// Donee

void Class::Add_one(Student s)
{
	s.Class = mon[0].Class;
	mon.push_back(s);
	Re_arrange();
}
// Donee

bool Class::Find_Student(long ID, Student &result)
{
	for (int i = 0; i < mon.size(); i++)
		if (ID == mon[i].ID)
		{
			result = mon[i];
			return true;
		}
	return false;
}
// Donee

void swap(Student &a, Student &b)
{
	Student temp;
	temp = a;
	a = b;
	b = temp;
}
// Donee

void Class::Re_arrange()
{
	if (mon.size() == 0) return;
	for (int i = 0; i < mon.size() -1; i++)
		for (int j = i + 1; j < mon.size(); j++)
			if (mon[i].ID > mon[j].ID) swap(mon[i], mon[j]);
	for (int i = 0; i < mon.size(); i++)
		mon[i].No = i + 1;
}
//Donee

void Class::List_of_Student()
{
	cout << setw(55) << "                    -- " << mon[0].Class << " --" << endl << endl;
	cout << setw(5) << "No" << setw(15) << "ID" << setw(20) << "Last Name" << setw(20) << "First Name" << setw(20) << "Class" << setw(20) << "Gender" << setw(20) << "Date of Birth" << endl;
	cout << endl << endl << endl;
	for (int k = 0; k < 122; k++) {
		gotoxy(k, 3);
		cout << char(178);
	}
	for (int i = 0; i < mon.size(); i++)
	{
		cout << setw(5) << mon[i].No;
		cout << setw(15) << mon[i].ID;
		cout << setw(20) << mon[i].lName;
		cout << setw(20) << mon[i].fName;
		cout << setw(20) << mon[i].Class;
		cout << setw(20) << mon[i].Gender;
		cout << setw(20) << mon[i].DoB << endl;
		cout << endl;
	}
	cout << endl;
	Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 178);
}
// Donee

void Class::importCSV(const char *path, string clName)
{
	ifstream student;
	student.open(path);
	if (!student.is_open()) return;
	string faker;
	getline(student, faker, '\n');
	Student s;
	string no;
	while (getline(student, no, ','))
	{
		s.No = atoi(no.c_str());
		string ID;
		getline(student, ID, ',');
		s.ID = atoi(ID.c_str());
		getline(student, s.lName, ',');
		getline(student, s.fName, ',');
		getline(student, s.Gender, ',');
		getline(student, s.DoB, '\n');
		s.username = ID;
		string temp = s.DoB;
		for (int i = 0; i < temp.length(); i++)
		{
			if (temp[i] == '/' && temp[i] == '-') temp.erase(temp.begin() + i);
			break;
		}
		for (int i = 0; i < temp.length(); i++)
		{
			if (temp[i] == '/' && temp[i] == '-') temp.erase(temp.begin() + i);
			break;
		}
		s.password = temp;
		s.Class = clName;
		mon.push_back(s);
	}
	Re_arrange();
	Name = clName;
	student.close();
}
// Donee

void Class::importTxT(const char *path, string clName, vector <Courses> &C)
{
	ifstream student;
	student.open(path);
	if (!student.is_open()) return;
	string no;
	while (getline(student, no, '\n'))
	{
		Student s;
		s.No = atoi(no.c_str());
		string ID;
		getline(student, ID, '\n');
		s.ID = atoi(ID.c_str());
		getline(student, s.lName, '\n');
		getline(student, s.fName, '\n');
		getline(student, s.Class, '\n');
		getline(student, s.Gender, '\n');
		getline(student, s.DoB, '\n');
		getline(student, s.username, '\n');
		getline(student, s.password, '\n');
		int a;
		string tempa;
		getline(student, tempa, '\n');
		a = atoi(tempa.c_str());
		for (int j = 0; j < a; j++)
		{
			Credits temp;
			string tempmark;
			string subject;
			getline(student, subject, '\n');
			temp.ID = subject;
			for (int k = 0; k < C.size(); k++)
				if (C[k].ID == subject)
				{
					C[k].mon.push_back(s.ID);
					break;
				}
			getline(student, temp.mark.Mid, '\n');
			getline(student, temp.mark.Fin, '\n');
			getline(student, temp.mark.Avr, '\n');
			for (int z = 0; z < 10; z++)
			{
				getline(student, tempmark, '\n');
				temp.A[z] = atoi(tempmark.c_str());
			}
			s.study.push_back(temp);
		}
		mon.push_back(s);
	}
	Name = clName;
	student.close();
}
// Donee

void Class::exportTxT()
{
	ofstream fout;
	fout.open(Name + ".txt");
	if (!fout.is_open()) return;
	for (int i = 0; i < mon.size(); i++)
	{
		fout << mon[i].No << endl;
		fout << mon[i].ID << endl;
		fout << mon[i].lName << endl;
		fout << mon[i].fName << endl;
		fout << mon[i].Class << endl;
		fout << mon[i].Gender << endl;
		fout << mon[i].DoB << endl;
		fout << mon[i].username << endl;
		fout << mon[i].password << endl;
		fout << mon[i].study.size() << endl;
		for (int j = 0; j < mon[i].study.size(); j++)
		{
			fout << mon[i].study[j].ID << endl;
			fout << mon[i].study[j].mark.Mid << endl;
			fout << mon[i].study[j].mark.Fin << endl;
			fout << mon[i].study[j].mark.Avr << endl;
			for (int z = 0; z < 10; z++)
				fout << mon[i].study[j].A[z] << endl;
		}
	}
	fout.close();
}
// Donee

void Class::Remove(vector <Courses> &C, vector <Lecturer> &p)
{
	List_of_Student();
	cout << endl << endl;
	Student s;
	Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 178);
	gotoxy(56, 1);
	cout << "REMOVE MODE" << endl;
	for (int i = 1; i < 122; i++) {
		gotoxy(i, 2);
		cout << char(176);
	}
	cout << endl;
	gotoxy(3, 39);
	textcolor(4);
	cout << "Please enter the ID of the student you want to REMOVE: ";
	long a;
	cin >> a;
	system("cls");
	while (1)
	{
		while (!Find_Student(a, s))
		{
			gotoxy(0, 0);
			textcolor(2);
			std::cout << "Student not found, do you want to input again (y/n) ?" << endl;
			cout << endl;
			std::cout << "Your choice: ";
			string choice;
			std::cin >> choice;
			if (choice == "n" || choice == "N" || choice == "no") return;
			std::cout << "Please enter the ID of the student: ";
			long b;
			std::cin >> b;
			a = b;
			system("cls");
		}
		textcolor(10);
		system("cls");
		gotoxy(56, 19);
		cout << "FOUND!!!" << endl;
		_getch();
		system("cls");
		cout << setw(5) << "No" << setw(15) << "ID" << setw(20) << "Last Name" << setw(20) << "First Name" << setw(20) << "Class" << setw(20) << "Gender" << setw(20) << "Date of Birth" << endl;
		cout << setw(5) << s.No;
		cout << setw(15) << s.ID;
		cout << setw(20) << s.lName;
		cout << setw(20) << s.fName;
		cout << setw(20) << s.Class;
		cout << setw(20) << s.Gender;
		cout << setw(20) << s.DoB << endl;
		cout << endl;
		for (int i = 1; i < 122; i++) {
			gotoxy(i, 3);
			cout << char(176);
		}
		cout << endl;
		gotoxy(2, 39);
		cout << "Do you wish to REMOVE this student (y/n): ";
		string temp;
		Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 177);
		gotoxy(51, 39);
		cin >> temp;
		system("cls");
		textcolor(1);
		if (temp == "y" || temp == "Y" || temp == "yes") break;
		else 
		{
			std::cout << "Do you want to continue ? (y/n)" << endl;
			std::cout << "Your choice: ";
			string choi;
			std::cin >> choi;
			if (choi == "n" || choi == "N" || choi == "no") return;
			std::cout << "Please enter the ID of the student: ";
			long c;
			std::cin >> c;
			a = c;
		}
	}
	Remove_one(s);

	for (int i = 0; i < s.study.size(); i++)
	{
		for (int j = 0; j < C.size(); j++)
			if (s.study[i].ID == C[j].ID)
			{
				for (int z = 0; z < C[j].mon.size(); z++)
				{
					if (s.ID == C[j].mon[z])
					{
						C[j].mon.erase(C[j].mon.begin() + z);
						break;
					}
				}

				for (int k = 0; k < p.size(); k++)
					if (p[k].username == C[j].lecturer_account)
					{
						for (int l = 0; l < p[k].work.size(); l++)
						{
							if (p[k].work[l].ID == C[j].ID)
							{
								p[k].work.erase(p[k].work.begin() + l);
								break;
							}
							p[k].work.push_back(C[j]);
						}
					}
				break;
			}
	}
	clrscr();
	textcolor(4);
	gotoxy(48, 19);
	cout << "&&& Student REMOVED &&&" << endl;
	gotoxy(0, 38);
	cout << endl;
	Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 178);
	return;
}
// Donee

void Class::Add_a_student()
{
	VeKhungCH(0, 0, 122, 3, true);
	gotoxy(54, 1);
	std::cout << "ADD STUDENT MODE" << endl;
	gotoxy(48, 2);
	std::cout << " - Add a student to " + Name + " - " << endl;
	textcolor(9);
	VeKhungCH(0, 0, 122, 40, true);
	textcolor(10);
	VeKhungCH(23, 6, 78, 4, true);
	VeKhungCH(28, 7, strlen("Enter new DoB(yyyy/mm/dd): ") + 8, 2, true);
	VeKhungCH(66, 7, 30, 2, true);
	while (1)
	{
		Student s;
		string ID;
		gotoxy(34, 8);
		std::cout << "Enter student's ID: ";
		gotoxy(69, 8);
		getline(std::cin, ID, '\n');
		gotoxy(69, 8);
		std::cout << "                           ";
		s.ID = atoi(ID.c_str());
		gotoxy(34, 8);
		cout << "                            ";
		gotoxy(34, 8);
		std::cout << "Enter student's last name: ";
		gotoxy(69, 8);
		getline(std::cin, s.lName, '\n');
		gotoxy(69, 8);
		std::cout << "                           ";
		gotoxy(34, 8);
		cout << "                            ";
		gotoxy(34, 8);
		std::cout << "Enter student's first name: ";
		gotoxy(69, 8);
		getline(std::cin, s.fName, '\n');
		gotoxy(69, 8);
		std::cout << "                           ";
		gotoxy(34, 8);
		std::cout << "                            ";
		gotoxy(34, 8);
		std::cout << "Enter student's gender: ";
		gotoxy(69, 8);
		getline(std::cin, s.Gender, '\n');
		gotoxy(69, 8);
		std::cout << "                           ";
		gotoxy(32, 8);
		cout << "                            ";
		gotoxy(32, 8);
		std::cout << "Enter student's date of birth: ";
		gotoxy(69, 8);
		getline(std::cin, s.DoB, '\n');
		gotoxy(32, 8);
		cout << "                              ";
		gotoxy(69, 8);
		std::cout << "                           ";
		s.username = ID;
		string temp = s.DoB;
		for (int i = 0; i < temp.length(); i++)
		{
			if (temp[i] == '/' && temp[i] == '-') temp.erase(temp.begin() + i);
			break;
		}
		for (int i = 0; i < temp.length(); i++)
		{
			if (temp[i] == '/' && temp[i] == '-') temp.erase(temp.begin() + i);
			break;
		}
		s.password = temp;
		s.Class = Name;
		mon.push_back(s);
		Re_arrange();		
		char choice;
		VeKhungCH(0, 38, 82, 2, true);
		gotoxy(3, 39);
		std::cout << "Do you want to continue adding more student to " << Name << " ? (y/n) Your choice: ";
		std::cin >> choice;
		system("cls");
		VeKhungCH(0, 0, 122, 3, true);
		gotoxy(54, 1);
		std::cout << "ADD STUDENT MODE" << endl;
		gotoxy(48, 2);
		std::cout << " - Add a student to " + Name + " - " << endl;
		textcolor(9);
		VeKhungCH(0, 0, 122, 40, true);
		textcolor(10);
		VeKhungCH(23, 6, 78, 4, true);
		VeKhungCH(28, 7, strlen("Enter new DoB(yyyy/mm/dd): ") + 8, 2, true);
		VeKhungCH(66, 7, 30, 2, true);
		while ((getchar()) != '\n');
		if (choice == 'n' || choice == 'N') return;
		std::cout << endl;
	};
	return;
}
// Donee

void Class::Editstudent(vector <Courses> &C, vector <Lecturer> &p)
{
	List_of_Student();
	textcolor(240);
	Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 177);
	for (int i = 1; i < 122; i++) {
		gotoxy(i, 2);
		cout << char(176);
	}
	std::cout << endl;
	gotoxy(3, 39);
	std::cout << "Please enter the ID of the student you want to EDIT: ";
	long a;
	std::cin >> a;
	system("cls");

	while ((getchar()) != '\n');
	Student s;
	while (1)
	{
		while (!Find_Student(a, s))
		{
			gotoxy(0, 0);
			textcolor(2);
			std::cout << "Student not found, do you want to input again (Y/N) ?" << endl;
			std::cout << "Your choice: ";
			string choice;
			std::cin >> choice;
			if (choice == "n" || choice == "N" || choice == "no") return;
			cout << endl;
			std::cout << "Please enter the ID of the student: ";
			long b;
			std::cin >> b;
			a = b;
			system("cls");
		}
		textcolor(4);
		system("cls");
		gotoxy(56, 19);
		cout << "FOUND!!!" << endl;
		_getch();
		system("cls");
		cout << setw(5) << "No" << setw(15) << "ID" << setw(20) << "Last Name" << setw(20) << "First Name" << setw(20) << "Class" << setw(20) << "Gender" << setw(20) << "Date of Birth" << endl;
		cout << setw(5) << s.No;
		cout << setw(15) << s.ID;
		cout << setw(20) << s.lName;
		cout << setw(20) << s.fName;
		cout << setw(20) << s.Class;
		cout << setw(20) << s.Gender;
		cout << setw(20) << s.DoB << endl;
		cout << endl;
		for (int i = 1; i < 122; i++) {
			gotoxy(i, 3);
			cout << char(176);
		}
		cout << endl;
		List_of_Student();
		gotoxy(2, 39);
		std::cout << "Do you wish to EDIT this student (y/n): ";
		string temp;
		Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 177);
		gotoxy(2 + strlen("Do you wish to EDIT this student (y/n): "), 39);
		std::cin >> temp;
		if (temp == "y" || temp == "Y" || temp == "yes") break;
		else
		{
			std::cout << "Do you want to continue ? (y/n)";
			std::cout << "Your choice: ";
			string choi;
			std::cin >> choi;
			if (choi == "n" || choi == "N" || choi == "no") return;
			std::cout << "Please enter the ID of the student: ";
			long c;
			std::cin >> c;
			a = c;
			system("cls");
		}
	}
	Student temp = s;
	Remove_one(s);
	std::cout << endl << endl;
	gotoxy(49, 5);
	std::cout << "*@* Editing student *@*" << endl;
	Sleep(1200);
	system("cls");
	gotoxy(49, 5);
	gotoxy(34, 8);
	std::cout << "Enter new Student ID: ";
	string k;
	long originID = 0;
	VeKhungCH(29, 7, strlen("Enter new DoB(yyyy/mm/dd): ") + 8, 2, true);
	VeKhungCH(66, 7, 30, 2, true);
	gotoxy(69, 8);
	std::cin >> k;
	cin.ignore();
	if (k != "no")
	{
		originID = s.ID;
		s.ID = atoi(k.c_str());
	}
	system("cls");
	gotoxy(34, 8);
	cout << "Enter new Last Name:  ";
	VeKhungCH(29, 7, strlen("Enter new DoB(yyyy/mm/dd): ") + 8, 2, true);
	VeKhungCH(66, 7, 30, 2, true);
	gotoxy(69, 8);
	getline(cin, k);
	if (k != "no") s.lName = k;
	system("cls");
	gotoxy(34, 8);
	cout << "Enter new First Name:  ";
	VeKhungCH(29, 7, strlen("Enter new DoB(yyyy/mm/dd): ") + 8, 2, true);
	VeKhungCH(66, 7, 30, 2, true);
	gotoxy(69, 8);
	getline(cin, k);
	if (k != "no") s.fName = k;
	system("cls");
	gotoxy(34, 8);
	cout << "Enter new Gender:      ";
	VeKhungCH(29, 7, strlen("Enter new DoB(yyyy/mm/dd): ") + 8, 2, true);
	VeKhungCH(66, 7, 30, 2, true);
	gotoxy(69, 8);
	getline(cin, k);
	if (k != "no") s.Gender = k;
	system("cls");
	gotoxy(34, 8);
	cout << "Enter new DoB(yyyy/mm/dd): ";
	VeKhungCH(29, 7, strlen("Enter new DoB(yyyy/mm/dd): ") + 8, 2, true);
	VeKhungCH(66, 7, 30, 2, true);
	gotoxy(69, 8);
	getline(cin, k);
	if (k != "no") s.DoB = k;
	cout << endl;
	Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 177);
	system("cls");
	gotoxy(49, 8);
	cout << "%%% The new info %%%" << endl;
	gotoxy(53, 12);
	cout << "No: " << s.No << endl;
	gotoxy(53, 15);
	cout << "StudentID: " << s.ID << endl;
	gotoxy(53, 18);
	cout << "Name: " << s.lName << " " << s.fName << endl;
	gotoxy(53, 21);
	cout << "Class: " << s.Class << endl;
	gotoxy(53, 24);
	cout << "Gender: " << s.Gender << endl;
	gotoxy(53, 27);
	cout << "Date of birth: " << s.DoB << endl;
	Add_one(s);
	textcolor(6);
	VeKhungCH(30, 6, 57, 23, true);
	Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 177);
	if (originID != 0)
	{
		for (int i = 0; i < s.study.size(); i++)
		{
			for (int j = 0; j < C.size(); j++)
				if (s.study[i].ID == C[j].ID)
				{
					for (int z = 0; z < C[j].mon.size(); z++)
					{
						if (originID == C[j].mon[z])
						{
							C[j].mon[z] = s.ID;
							break;
						}
					}

					for (int k = 0; k < p.size(); k++)
						if (p[k].username == C[j].lecturer_account)
						{
							for (int l = 0; l < p[k].work.size(); l++)
							{
								if (p[k].work[l].ID == C[j].ID)
								{
									p[k].work.erase(p[k].work.begin() + l);
									break;
								}
								p[k].work.push_back(C[j]);
							}
						}
					break;
				}
		}
	}	
	std::system("pause");
	return;
}
// Done

void Class::search_info()
{
	cout << "Please enter the ID of the student: ";
	long a;
	cin >> a;
	Student s;
	while (!Find_Student(a, s))
	{
		cout << "Student not found, do you want to input again (Y/N) ?" << endl;
		cout << "Your choice: ";
		string choice;
		cin >> choice;
		if (choice == "n" || choice == "N" || choice == "no") return;
		cout << "Please enter the ID of the student: ";
		long b;
		cin >> b;
		a = b;
	}
	cout << "No: " << s.No << endl;
	cout << s.fName << " " << s.lName << endl;
	cout << "Student ID: " << s.ID << endl;
	cout << "Class: " << s.Class << endl;
	cout << "Gender: " << s.Gender << endl;
	cout << "Date of birth: " << s.DoB << endl;
	cout << "username: " << s.username << endl;
}
// Donee

bool Find_Student(long ID, vector <Class> cl, Student &result)
{
	for (int j = 0; j < cl.size(); j++)
	{
		for (int i = 0; i < cl[j].mon.size(); i++)
			if (ID == cl[j].mon[i].ID)
			{
				result = cl[j].mon[i];
				return true;
			}
	}
	return false;
}
// Donee

bool Find(vector <Class> &sc, Student &result, string k)
{
	VeKhungCH(39, 1, 36, 2, true);
	VeKhungCH(76, 1, 13, 2, true);
	gotoxy(41, 2);
	std::cout << "Please enter the ID of the student:: ";
	long a;
	std::cin >> a;
	Student s;
	while (1)
	{
		system("cls");
		while (!Find_Student(a, sc, s))
		{
			gotoxy(0, 0);
			textcolor(2);
			std::cout << "Student not found, do you want to input again (Y/N) ?" << endl;
			std::cout << endl;
			std::cout << "Your choice: ";
			string choice;
			std::cin >> choice;
			system("cls");
			if (choice == "n" || choice == "N" || choice == "no") return false;
			cout << endl;
			for (int i = 0; i < 123; i++) {
				gotoxy(i, 2);
				cout << char(176);
			}
			gotoxy(44, 15);
			std::cout << "Please enter the ID of the student: ";
			long b;
			std::cin >> b;
			a = b;
			system("cls");
		}
		gotoxy(1, 1);
		cout << setw(5) << "No" << setw(15) << "ID" << setw(20) << "Last Name" << setw(20) << "First Name" << setw(20) << "Class" << setw(20) << "Gender" << setw(20) << "Date of Birth" << endl;
		cout << endl;
		gotoxy(0, 0);
		for (int i = 0; i < 122; i++) {
			gotoxy(i, 3);
			cout << char(178);
		}
		cout << endl;
		cout << setw(5) << s.No;
		cout << setw(15) << s.ID;
		cout << setw(20) << s.lName;
		cout << setw(20) << s.fName;
		cout << setw(20) << s.Class;
		cout << setw(20) << s.Gender;
		cout << setw(20) << s.DoB << endl;
		cout << endl;
		VeKhungCH(0, 0, 122, 6, true);
		gotoxy(5, 8);
		std::cout << "Do you wish to " + k + " this student (y/n): ";
		VeKhungCH(0, 7, 64, 2, true);
		gotoxy(56, 8);
		string temp;
		std::cin >> temp;
		if (temp == "y" || temp == "Y" || temp == "yes") break;
		else
		{
			system("cls");
			std::cout << "Do you want to continue ? (y/n)";
			std::cout << "Your choice: ";
			string choi;
			std::cin >> choi;
			if (choi == "n" || choi == "N" || choi == "no") return false;
			std::cout << "Please enter the ID of the student: ";
			long c;
			std::cin >> c;
			a = c;
		}	
	}
	result = s;
	return true;
}
// Donee

bool switch_Class(vector <Class> &sc)
{
	Student s;
	if (!Find(sc, s, "CHANGE CLASS of")) return false;
	std::cout << endl << endl;
	cout << endl << endl;
	system("cls");
	gotoxy(41, 1);
	cout << "The current class of the student is: " << s.Class << endl;
	gotoxy(41, 2);
	cout << "Which class do you want to switch the student to ?" << endl;
	int j = 1;
	VeKhungCH(0, 0, 122, 39, true);
	for (int i = 1; i < 122; i++)
	{
		gotoxy(i, 3);
		cout << (char)177;
	}
	gotoxy(56, 4);
	for (int i = 0; i < sc.size(); i++)
	{
		if (sc[i].Name != s.Class)
		{
			string temp;
			gotoxy(51, 4 + 2 * i);
			cout << j << ". " << sc[i].Name << endl;
			gotoxy(52, 5 + 2 * i);
			cout << "This class (y/n): ";
			cin >> temp;
			if (temp == "y" || temp == "Y" || temp == "yes")
			{
				sc[i].Add_one(s);
				for (int z = 0; z < sc.size(); z++)
					if (sc[z].Name == s.Class)
					{
						sc[z].Remove_one(s);
						break;
					}
				system("cls");
				VeKhungCH(0, 0, 122, 39, true);
				gotoxy(51, 21);
				cout << "*** COMPLETED ***" << endl;
				_getch();
				return true;
			}
			j++;
		}
	}
}
// Donee

void List_of_Classes(vector < Class > sc)
{
	gotoxy(49, 5);
	std::cout << "(*) List of Classes (*)" << endl << endl;
	gotoxy(49, 15);
	std::cout << endl << endl;
	for (int i = 0; i < sc.size(); i++) {

		std::cout << "\t\t\t\t\t\t       - " << sc[i].Name << " -" << endl;
		std::cout << endl;
		std::cout << endl;
		std::cout << endl;
		std::cout << endl;
	}
	
}
// Donee

void List_all_Student(vector <Class> sc)
{
	resizeConsole(820, 840);
	vector <Student> S;
	for (int i = 0; i < sc.size(); i++)
	{
		for (int j = 0; j < sc[i].mon.size(); j++)
			S.push_back(sc[i].mon[j]);
	}

	for (int i = 0; i < S.size() - 1; i++)
		for (int j = i + 1; j < S.size(); j++)
			if (S[i].ID > S[j].ID) swap(S[i], S[j]);
	for (int i = 0; i < S.size(); i++)
		S[i].No = i + 1;
	gotoxy(39, 1);
	for (int k = 0; k < 123; k++) {
		gotoxy(k, 3);
		std::cout << char(178);
		gotoxy(k, 5);
		std::cout << char(178);
	}
	gotoxy(0, 4);
	std::cout << setw(5) << "No" << setw(15) << "ID" << setw(20) << "Last Name" << setw(20) << "First Name" << setw(20) << "Class" << setw(20) << "Gender" << setw(20) << "Date of Birth" << endl;
	for (int i = 0; i < S.size(); i++)
	{
		std::cout << endl;
		std::cout << setw(5) << S[i].No;
		std::cout << setw(15) << S[i].ID;
		std::cout << setw(20) << S[i].lName;
		std::cout << setw(20) << S[i].fName;
		std::cout << setw(20) << S[i].Class;
		std::cout << setw(20) << S[i].Gender;
		std::cout << setw(20) << S[i].DoB << endl;
		std::cout << endl;
	}
	std::cout << endl;
	std::system("pause");
	return;
}
// Donee

//
//
//             Courses Section
//
//
bool Check_if_in_Course(Student s, vector <long> mon);

void Courses::List_of_Studente(vector <Class> &sc)
{
	std::cout << "                    -- " << Course_Name << " --" << endl << endl;
	{	
		for (int i = 0; i < mon.size(); i++)
		{
			for (int j = 0; j < sc.size(); j++)
				for (int z = 0; z < sc[j].mon.size(); z++)
					if (mon[i] == sc[j].mon[z].ID)
					{
						std::cout << i + 1 << "  ";
						std::cout << sc[j].mon[z].ID << "  ";
						std::cout << sc[j].mon[z].lName << "  ";
						std::cout << sc[j].mon[z].fName << "  ";
						std::cout << sc[j].mon[z].Class << "  ";
						std::cout << sc[j].mon[z].Gender << "  ";
						std::cout << sc[j].mon[z].DoB << "  " << endl;
					}
		}
		std::cout << endl;
	}
}
// Donee

void Courses::Re_arrangee()
{
	if (mon.size() == 0) return;
	for (int i = 0; i < mon.size() - 1; i++)
		for (int j = i + 1; j < mon.size(); j++)
			if (mon[i] > mon[j])
			{
				long temp;
				temp = mon[i];
				mon[i] = mon[j];
				mon[j] = temp;
			}
}
// Donee

void Courses::Show_attendance_list(vector <Class> &sc)
{
	std::cout << "No     ID       Last Name      First Name   Class   W01  W02  W03  W04  W05  W06  W07  W08  W09  W10" << endl;
	for (int z = 0; z < mon.size(); z++)
	{
		bool found = false;
		for (int i = 0; i < sc.size(); i++)
		{
			for (int j = 0; j < sc[i].mon.size(); j++)
			{
				if (mon[z] == sc[i].mon[j].ID)
				{
					std::cout << z + 1 << "  ";
					std::cout << mon[z] << "  ";
					std::cout << sc[i].mon[j].lName << "     ";
					std::cout << sc[i].mon[j].fName << "      ";
					std::cout << sc[i].mon[j].Class << "   ";
					for (int m = 0; m < sc[i].mon[j].study.size(); m++)
					{
						if (sc[i].mon[j].study[m].ID == ID)
							for (int q = 0; q < 10; q++)
							{
								switch (sc[i].mon[j].study[m].A[q])
								{
								case 1:
								{
									std::cout << "X   ";
									break;
								}
								case -1:
								{
									std::cout << "A   ";
									break;
								}
								case 0:
								{
									std::cout << "    ";
									break;
								}
								}
							}
					}
					std::cout << endl;
					found = true;
					break;
				}
			}
			if (found) break;
		}

	}
}
// Donee

void Courses::Show_scoreboard(vector <Class> &sc)
{
	std::cout << "No     ID      Last Name     First Name   Class   Midterm     Final     Average" << endl;
	for (int z = 0; z < mon.size(); z++)
	{
		bool found = false;
		for (int i = 0; i < sc.size(); i++)
		{
			for (int j = 0; j < sc[i].mon.size(); j++)
			{
				if (mon[z] == sc[i].mon[j].ID)
				{
					std::cout << z + 1 << "  ";
					std::cout << mon[z] << "  ";
					std::cout << sc[i].mon[j].lName << "     ";
					std::cout << sc[i].mon[j].fName << "      ";
					std::cout << sc[i].mon[j].Class << "   ";
					for (int m = 0; m < sc[i].mon[j].study.size(); m++)
					{
						if (sc[i].mon[j].study[m].ID == ID)
						{
							std::cout << sc[i].mon[j].study[m].mark.Mid << "    ";
							std::cout << sc[i].mon[j].study[m].mark.Fin << "    ";
							std::cout << sc[i].mon[j].study[m].mark.Avr << "    ";
						}
					}
					std::cout << endl;
					found = true;
					break;
				}
			}
			if (found) break;
		}
	}
}
// Donee 

void Courses::Edit_attendance_list(vector <Class> &sc)
{
	Show_attendance_list(sc);
	std::cout << endl << endl;
	Student s;
	while (1)
	{
		if (!Find(sc, s, "EDIT ATTENDANCE STATUS OF")) return;
		if (!Check_if_in_Course(s, mon))
		{
			while ((getchar()) != '\n');
			std::cout << "Enter the week's number that you want to edit (Ex: 1): ";
			int a;
			cin >> a;
			std::cout << "What status do you want to change it to ? (1 for Attended, -1 for Absent): ";
			int b;
			while ((getchar()) != '\n');
			cin >> b;
			for (int i = 0; i < s.study.size(); i++)
			{
				if (s.study[i].ID == ID)
				{
					s.study[i].A[a - 1] = b;
					break;
				}
			}
			for (int i = 0; i < sc.size(); i++)
			{
				if (sc[i].Name == s.Class)
				{
					sc[i].Remove_one(s);
					sc[i].Add_one(s);
					sc[i].exportTxT();
				}
			}
		}
		else std::cout << "This student is NOT in this course!" << endl;
		Show_attendance_list(sc);
		std::cout << "Do you want to continue ? (y/n)";
		std::cout << "Your choice: ";
		string choi;
		std::cin >> choi;
		if (choi == "n" || choi == "N" || choi == "no") return;
		Student s;
		std::cout << endl << endl;
	}
}
// Done

void Courses::Edit_scoreboard(vector <Class> &sc)
{
	Show_scoreboard(sc);
	std::cout << endl << endl;
	Student s;
	while (1)
	{
		if (!Find(sc, s, "EDIT SCOREBOARD OF")) return;
		if (!Check_if_in_Course(s, mon))
		{
			while ((getchar()) != '\n');
			string a, b;
			std::cout << "Enter the column that you want to edit (Ex: Mid, Fin, Avr): ";
			getline(std::cin, a, '\n');
			std::cout << "Please enter the new mark (float): ";
			getline(std::cin, b, '\n');
			for (int i = 0; i < s.study.size(); i++)
			{
				if (s.study[i].ID == ID)
				{
					if (a == "Mid") s.study[i].mark.Mid = b;
					else if (a == "Fin") s.study[i].mark.Fin = b;
					else if (a == "Avr") s.study[i].mark.Avr = b;
					break;
				}
			}
			for (int i = 0; i < sc.size(); i++)
			{
				if (sc[i].Name == s.Class)
				{
					sc[i].Remove_one(s);
					sc[i].Add_one(s);
					sc[i].exportTxT();
				}
			}
		}
		else std::cout << "This student is NOT in this course!" << endl;
		Show_scoreboard(sc);
		std::cout << "Do you want to continue ? (y/n)";
		std::cout << "Your choice: ";
		string choi;
		std::cin >> choi;
		if (choi == "n" || choi == "N" || choi == "no") return;
		Student s;
		std::cout << endl << endl;
	}
}
// Done

void Courses::Removee(vector <Class> &sc, vector <Lecturer> &p)
{
	List_of_Studente(sc);
	std::cout << endl << endl;
	Student s;
	while (1)
	{
		if (!Find(sc, s, "REMOVE FROM COURSE")) return;
		for (int i = 0; i < mon.size(); i++)
			if (mon[i] == s.ID)
			{
				mon.erase(mon.begin() + i);
				break;
			}
		for (int i = 0; i < s.study.size(); i++)
			if (ID == s.study[i].ID) s.study.erase(s.study.begin() + i);
		for (int i = 0; i < sc.size(); i++)
		{
			if (sc[i].Name == s.Class)
			{
				sc[i].Remove_one(s);
				sc[i].Add_one(s);
			}
		}
		for (int i = 0; i < p.size(); i++)
		{
			if (lecturer_account == p[i].username)
			{
				for (int j = 0; j < p[i].work.size(); j++)
					if (p[i].work[j].ID == ID)
					{
						for (int k = 0; k < p[i].work[j].mon.size(); k++)
							if (p[i].work[j].mon[k] == s.ID)
							{
								p[i].work[j].mon.erase(mon.begin() + k);
								break;
							}
						break;
					}
				break;
			}
		}
		std::cout << endl;
		std::cout << "&&& Student REMOVED from course &&&" << endl;
		std::cout << "Do you want to continue ? (y/n)";
		std::cout << "Your choice: ";
		string choi;
		std::cin >> choi;
		if (choi == "n" || choi == "N" || choi == "no") return;
		Student s;
		std::cout << endl << endl;
	}
}
//Done but need to edit lecturer's in main as well

bool Check_if_in_Course(Student s, vector <long> mon)
{
	for (int i = 0; i < mon.size(); i++)
		if (mon[i] == s.ID) return false;
	return true;
}
//Done

void Courses::Adde(vector <Class> &sc, vector <Lecturer> &p)
{
	std::cout << "&&& Adding student to the course &&&" << endl;
	std::cout << "ID: " << ID << endl;
	std::cout << "Course Name " << Course_Name << endl;
	std::cout << "Lecturer's account: " << lecturer_account << endl;
	std::cout << "Day of week: " << Day << endl;
	std::cout << "Start - End Date: " << StartDate.s << " - " << EndDate.s << endl;
	std::cout << "Start - End Time: " << StartTime.s << " - " << EndTime.s << endl;
	std::cout << "Room: " << Room << endl << endl;
	Student s;
	while (1)
	{
		if (!Find(sc, s, "ADD TO COURSE")) return;
		if (Check_if_in_Course(s, mon))
		{
			mon.push_back(s.ID);
			Re_arrangee();

			Credits newsub;
			newsub.ID = ID;
			newsub.mark.Mid = "-1";
			newsub.mark.Fin = "-1";
			newsub.mark.Avr = "-1";
			for (int i = 0; i < 10; i++) newsub.A[i] = 0;

			s.study.push_back(newsub);
			for (int i = 0; i < sc.size(); i++)
			{
				if (sc[i].Name == s.Class)
				{
					sc[i].Remove_one(s);
					sc[i].Add_one(s);
				}
			}

			for (int i = 0; i < p.size(); i++)
			{
				if (lecturer_account == p[i].username)
				{
					for (int j = 0; j < p[i].work.size(); j++)
						if (p[i].work[j].ID == ID)
						{
							p[i].work[j].mon.push_back(s.ID);
							break;
						}
					break;
				}
			}
		}
		else std::cout << "This student is already in this course!" << endl;
		std::cout << "Do you want to continue ? (y/n)";
		std::cout << "Your choice: ";
		string choi;
		std::cin >> choi;
		if (choi == "n" || choi == "N" || choi == "no") return;
		Student s;
		std::cout << endl << endl;
	}
}
//Done but need to edit lecturer's in main as well

bool Academic_year::Find_Course(string ID, Courses &result)
{
	for (int i = 0; i < C.size(); i++)
		if (ID == C[i].ID)
		{
			result = C[i];
			return true;
		}
	return false;
}
// Done

void Academic_year::Remove_one(Courses cc)
{
	C.erase(C.begin() + cc.No - 1);
	for (int i = cc.No - 1; i < C.size(); i++)
		C[i].No = C[i].No - 1;
}
// Done 

void swapp(Courses &a, Courses &b)
{
	Courses temp;
	temp = a;
	a = b;
	b = temp;
}
// Done

void Academic_year::Re_arrange()
{
	if (C.size() == 0) return;
	for (int i = 0; i < C.size() - 1; i++)
		for (int j = i + 1; j < C.size(); j++)
			if (C[i].ID > C[j].ID) swapp(C[i], C[j]);
	for (int i = 0; i < C.size(); i++)
		C[i].No = i + 1;
}
// Done

void Academic_year::List_of_Courses()
{
	resizeConsole(1000, 700);
	ToMau(69, 0, "ALL OF COURSE", 63);
	_getch();
	system("cls");
	gotoxy(0, 2);
	std::cout << "                                                           Year:    -- " << Name << " --" << endl << endl;
	cout << endl;
	textcolor(74);

	cout << setw(6) << "No" << setw(12) << "Course ID"
		<< setw(23) << "Course Name" << setw(13) << " " << setw(11) << "Lecturer"
		<< setw(15) << "Start date" << setw(15) << "End date" << setw(10) << "Day"
		<< setw(16) << "Start hour" << setw(15) << "End hour" << setw(14) << "Room" << endl;
	cout << endl;
	VeKhungCH(0, 0, 150, 3, true);
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	for (int i = 0; i < C.size(); i++)
	{
		std::cout << setw(6)<<  C[i].No << " ";
		std::cout << setw(20) << C[i].ID << " ";
		std::cout << setw(23)<< C[i].Course_Name << " ";
		std::cout << setw(20)<<  C[i].lecturer_account << " ";
		std::cout << setw(20)<<  C[i].Day << " ";
		std::cout << setw(30) <<C[i].StartDate.s << " to " << C[i].EndDate.s << " ";
		std::cout << setw(30)<< C[i].StartTime.s << " - " << C[i].EndTime.s << " ";
		std::cout << setw(15)<< C[i].Room << endl;
	}
	std::cout << endl;
	std::cout << endl;
}
// Done

void Academic_year::importTxT(vector <Courses> &C)
{
	ifstream fin;
	fin.open(Name + ".txt");
	if (!fin.is_open()) return;
	int n;
	string intt;
	getline(fin, intt, '\n');
	n = atoi(intt.c_str());
	for (int i = 0; i < n; i++)
	{
		Courses cc;
		getline(fin, cc.ID, '\n');
		getline(fin, cc.Course_Name, '\n');
		getline(fin, cc.lecturer_account, '\n');
		getline(fin, cc.Day, '\n');
		getline(fin, intt, '\n');
		cc.StartDate.d = atoi(intt.c_str());
		getline(fin, intt, '\n');
		cc.StartDate.m = atoi(intt.c_str());
		getline(fin, intt, '\n');
		cc.StartDate.y = atoi(intt.c_str());
		getline(fin, cc.StartDate.s, '\n');
		getline(fin, intt, '\n');
		cc.EndDate.d = atoi(intt.c_str());
		getline(fin, intt, '\n');
		cc.EndDate.m = atoi(intt.c_str());
		getline(fin, intt, '\n');
		cc.EndDate.y = atoi(intt.c_str());
		getline(fin, cc.EndDate.s, '\n');
		getline(fin, intt, '\n');
		cc.StartTime.h = atoi(intt.c_str());
		getline(fin, intt, '\n');
		cc.StartTime.m = atoi(intt.c_str());
		getline(fin, cc.StartTime.s, '\n');
		getline(fin, intt, '\n');
		cc.EndTime.h = atoi(intt.c_str());
		getline(fin, intt, '\n');
		cc.EndTime.m = atoi(intt.c_str());
		getline(fin, cc.EndTime.s, '\n');
		getline(fin, cc.Room, '\n');
		C.push_back(cc);
	}
	Re_arrange();
	fin.close();
}
// Done

void Academic_year::exportTxT() //export txt
{
	ofstream fout;
	fout.open(Name + ".txt");
	if (!fout.is_open()) return;
	fout << C.size() << endl;
	for (int i = 0; i < C.size(); i++)
	{
		fout << C[i].ID << endl;
		fout << C[i].Course_Name << endl;
		fout << C[i].lecturer_account << endl;
		fout << C[i].Day << endl;
		fout << C[i].StartDate.d << endl;
		fout << C[i].StartDate.m << endl;
		fout << C[i].StartDate.y << endl;
		fout << C[i].StartDate.s << endl;
		fout << C[i].EndDate.d << endl;
		fout << C[i].EndDate.m << endl;
		fout << C[i].EndDate.y << endl;
		fout << C[i].EndDate.s << endl;
		fout << C[i].StartTime.h << endl;
		fout << C[i].StartTime.m << endl;
		fout << C[i].StartTime.s << endl;
		fout << C[i].EndTime.h << endl;
		fout << C[i].EndTime.m << endl;
		fout << C[i].EndTime.s << endl;
		fout << C[i].Room << endl;
	}
	fout.close();
}
// Done

void Academic_year::Add_Course(vector <Class> &sc, vector <Lecturer> &p)
{	
	VeKhungCH(0, 0, 122, 3, true);
	gotoxy(54, 1);
	std::cout << "ADD COURSE MODE" << endl;
	gotoxy(52, 2);
	std::cout << " - Add a course - " << endl;
	textcolor(9);
	VeKhungCH(0, 0, 122, 40, true);
	textcolor(10);
	VeKhungCH(23, 6, 78, 4, true);
	VeKhungCH(28, 7, strlen("Enter new DoB(yyyy/mm/dd): ") + 8, 2, true);
	VeKhungCH(66, 7, 30, 2, true);
	while (1)
	{
		
		Courses Cs;
		
		textcolor(10);
		while ((getchar()) != '\n');
		gotoxy(34, 8);
		std::cout << "Enter Course's ID: ";
		gotoxy(69, 8);
		getline(std::cin, Cs.ID, '\n');
		gotoxy(69, 8);
		std::cout << "                           ";
		gotoxy(34, 8);
		cout << "                            ";
		gotoxy(34, 8);
		gotoxy(34, 8);
		std::cout << "Enter Course's Name: ";
		gotoxy(69, 8);
		getline(std::cin, Cs.Course_Name, '\n');
		gotoxy(69, 8);
		std::cout << "                           ";
		gotoxy(34, 8);
		cout << "                            ";
		gotoxy(34, 8);
		gotoxy(34, 8);
		std::cout << "Enter Lecturer's account: ";
		gotoxy(69, 8);
		getline(std::cin, Cs.lecturer_account, '\n');
		gotoxy(69, 8);
		std::cout << "                          ";
		gotoxy(34, 8);
		cout << "                            ";
		gotoxy(34, 8);
		gotoxy(34, 8);
		std::cout << "Enter Day of week : ";
		gotoxy(69, 8);
		getline(std::cin, Cs.Day, '\n');
		gotoxy(69, 8);
		std::cout << "                           ";
		gotoxy(34, 8);
		cout << "                            ";
		gotoxy(34, 8);
		gotoxy(34, 8);
		std::cout << "Enter Start Date(dd mm yyyy):";
		gotoxy(69, 8);
		while ((getchar()) != '\n');
		std::cin >> Cs.StartDate.d >> Cs.StartDate.m >> Cs.StartDate.y;
		gotoxy(69, 8);
		std::cout << "                          ";
		gotoxy(34, 8);
		cout << "                            ";
		gotoxy(34, 8);
		gotoxy(34, 8);
		std::cout << "Enter End Date(dd mm yyyy):";
		gotoxy(69, 8);
		while ((getchar()) != '\n');
		std::cin >> Cs.EndDate.d >> Cs.EndDate.m >> Cs.EndDate.y;
		gotoxy(69, 8);
		std::cout << "                           ";
		gotoxy(34, 8);
		cout << "                            ";
		gotoxy(34, 8);
		std::cout << "Enter Start hour (hh mm): ";
		gotoxy(69, 8);
		while ((getchar()) != '\n');
		std::cin >> Cs.StartTime.h >> Cs.StartTime.m;
		gotoxy(69, 8);
		std::cout << "                           ";
		gotoxy(34, 8);

		cout << "                            ";
		gotoxy(34, 8);
		std::cout << "Enter End hour (hh mm): ";
		gotoxy(69, 8);
		while ((getchar()) != '\n');
		std::cin >> Cs.EndTime.h >> Cs.EndTime.m;
		gotoxy(69, 8);
		std::cout << "                           ";
		gotoxy(34, 8);
		cout << "                            ";
		gotoxy(34, 8);
		std::cout << "Enter Room: ";
		gotoxy(69, 8);
		getline(std::cin, Cs.Room, '\n');
		gotoxy(69, 8);
		std::cout << "                           ";
		gotoxy(34, 8);
		cout << "                            ";
		system("cls");
		Cs.StartDate.s = std::to_string(Cs.StartDate.d) + "/" + std::to_string(Cs.StartDate.m) + "/" + std::to_string(Cs.StartDate.y);
		
		
		
		Cs.EndDate.s = std::to_string(Cs.EndDate.d) + "/" + std::to_string(Cs.EndDate.m) + "/" + std::to_string(Cs.EndDate.y);
		
		
		Cs.StartTime.s = std::to_string(Cs.StartTime.h) + ":" + std::to_string(Cs.StartTime.m);
		
		
		Cs.EndTime.s = std::to_string(Cs.EndTime.h) + ":" + std::to_string(Cs.EndTime.m);

		
		
		std::cout << "Which class does this course teach? Can have multiple choices." << endl;
		int j = 1;
		for (int i = 0; i < sc.size(); i++)
		{
			string temp;
			std::cout << j << ". " << sc[i].Name << endl;
			std::cout << "This class (y/n): ";
			std::cin >> temp;
			if (temp == "y" || temp == "Y" || temp == "yes")
				for (int m = 0; m < sc[i].mon.size(); m++)
				{
					Cs.mon.push_back(sc[i].mon[m].ID);

					Credits newsub;
					newsub.ID = Cs.ID;
					newsub.mark.Mid = "-1";
					newsub.mark.Fin = "-1";
					newsub.mark.Avr = "-1";

					for (int i = 0; i < 10; i++) newsub.A[i] = -1;
					sc[i].mon[m].study.push_back(newsub);
				}
			j++;
		}
		for (int i = 0; i < p.size(); i++)
			if (Cs.lecturer_account == p[i].username)
				p[i].work.push_back(Cs);
		std::cout << endl;
		std::cout << "*** COMPLETED ***" << endl;
		C.push_back(Cs);
		Re_arrange();
		std::system("pause");
		char choice;
		std::cout << "Do you want to continue adding another course ? (y/n)";
		std::cin >> choice;
		if (choice == 'n' || choice == 'N') return;
		std::cout << endl;
	};
	return;
}
// Done

void Academic_year::Edit_Course(vector <Class> &sc, vector <Lecturer> &p)
{
	List_of_Courses();
	while ((getchar()) != '\n');
	std::cout << endl << endl;
	std::cout << "&*& EDIT COURSE INFORMATION &*&" << endl;
	std::cout << "Please enter the ID of the course you want to EDIT: ";
	string s;
	getline(std::cin, s, '\n');
	Courses cc;
	while (1)
	{
		while (!Find_Course(s, cc))
		{
			std::cout << "Course not found, do you want to input again (Y/N) ?" << endl;
			std::cout << "Your choice: ";
			string choice;
			std::cin >> choice;
			if (choice == "n" || choice == "N" || choice == "no") return;
			std::cout << "Please enter the ID of the course: ";
			getline(std::cin, s, '\n');
		}
		std::cout << endl;
		std::cout << "ID: " << cc.ID << endl;
		std::cout << "Course Name " << cc.Course_Name << endl;
		std::cout << "Lecturer's account: " << cc.lecturer_account << endl;
		std::cout << "Day of week: " << cc.Day << endl;
		std::cout << "Start - End Date: " << cc.StartDate.s << " - " << cc.EndDate.s << endl;
		std::cout << "Start - End Time: " << cc.StartTime.s << " - " << cc.EndTime.s << endl;
		std::cout << "Room: " << cc.Room << endl;
		std::cout << "Do you wish to EDIT this Course (y/n): ";
		string temp;
		std::cin >> temp;
		if (temp == "y" || temp == "Y" || temp == "yes") break;
		else
		{
			std::cout << "Do you want to continue ? (y/n)";
			std::cout << "Your choice: ";
			string choi;
			std::cin >> choi;
			while ((getchar()) != '\n');
			if (choi == "n" || choi == "N" || choi == "no") return;
			std::cout << "Please enter the ID of the course: ";
			getline(std::cin, s, '\n');
		}
	}
	Remove_one(cc);
	while ((getchar()) != '\n');
	std::cout << endl << endl;
	std::cout << "*@* Editing course *@*" << endl;
	std::cout << " -- Enter ' no ' if you dont want to change the category -- " << endl;
	std::cout << "Enter new course's ID: ";
	string k;
	string originID = cc.ID;
	std::cin >> k;
	while ((getchar()) != '\n');
	if (k != "no") cc.ID = k;
	std::cout << "Enter new course's NAME: ";
	std::cin >> k;
	while ((getchar()) != '\n');
	if (k != "no") cc.Course_Name = k;
	std::cout << "Enter new lecturer's account: ";
	std::cin >> k;
	while ((getchar()) != '\n');
	string originlecturer = cc.lecturer_account;
	if (k != "no") cc.lecturer_account = k;
	std::cout << "Enter new day of week (Ex: Mon, Tue): ";
	std::cin >> k;
	while ((getchar()) != '\n');
	if (k != "no") cc.Day = k;
	int a, b, c;
	std::cout << "Enter new Start Date (Enter ' 0 0 0' if you dont want to change): ";
	std::cin >> a >> b >> c;
	while ((getchar()) != '\n');
	if (!(a == 0 && b == 0 && c == 0))
	{
		cc.StartDate.d = a; cc.StartDate.m = b; cc.StartDate.y = c;
		cc.StartDate.s == to_string(cc.StartDate.d) + "/" + to_string(cc.StartDate.m) + "/" + to_string(cc.StartDate.y);
	}

	std::cout << "Enter new End Date (Enter ' 0 0 0' if you dont want to change): ";
	std::cin >> a >> b >> c;
	while ((getchar()) != '\n');
	if (!(a == 0 && b == 0 && c == 0))
	{
		cc.EndDate.d = a; cc.EndDate.m = b; cc.EndDate.y = c;
		cc.EndDate.s == to_string(cc.EndDate.d) + "/" + to_string(cc.EndDate.m) + "/" + to_string(cc.EndDate.y);
	}

	std::cout << "Enter new Start Time (Enter ' 0 0' if you dont want to change): ";
	std::cin >> a >> b;
	while ((getchar()) != '\n');
	if (!(a == 0 && b == 0))
	{
		cc.StartTime.h = a; cc.StartTime.m = b;
		cc.StartTime.s == to_string(cc.StartTime.h) + ":" + to_string(cc.StartTime.m);
	}

	std::cout << "Enter new End Time (Enter ' 0 0' if you dont want to change): ";
	std::cin >> a >> b;
	while ((getchar()) != '\n');
	if (!(a == 0 && b == 0))
	{
		cc.EndTime.h = a; cc.EndTime.m = b;
		cc.EndTime.s == to_string(cc.EndTime.h) + ":" + to_string(cc.EndTime.m);
	}
	std::cout << "Enter new course's room: ";
	std::cin >> k;
	if (k != "no") cc.Room = k;

	for (int i = 0; i < cc.mon.size(); i++)
	{
		bool found = false;
		for (int j = 0; j < sc.size(); j++)
		{
			for (int m = 0; m < sc[j].mon.size(); m++)
			{
				if (sc[j].mon[m].ID == cc.mon[i])
				{
					for (int k = 0; k < sc[j].mon[m].study.size(); k++)
					{
						if (originID == sc[j].mon[m].study[k].ID) sc[j].mon[m].study[k].ID = cc.ID;
						found = true;
						break;
					}
				}
				if (found) break;
			}
			if (found) break;
		}
	}

	for (int i = 0; i < p.size(); i++)
		if (originlecturer == p[i].username)
		{
			for (int j = 0; j < p[i].work.size(); j++)
				if (originID == p[i].work[j].ID)
				{
					p[i].work.erase(p[i].work.begin() + j);
					break;
				}
			break;
		}
	for (int i = 0; i < p.size(); i++)
		if (cc.lecturer_account == p[i].username)
			p[i].work.push_back(cc);
	std::cout << endl << endl;
	std::cout << "%%% The new course info %%%" << endl;
	std::cout << "No: " << cc.No << endl;
	std::cout << "ID: " << cc.ID << endl;
	std::cout << "Course Name " << cc.Course_Name << endl;
	std::cout << "Lecturer's account: " << cc.lecturer_account << endl;
	std::cout << "Day of week: " << cc.Day << endl;
	std::cout << "Start - End Date: " << cc.StartDate.s << " - " << cc.EndDate.s << endl;
	std::cout << "Start - End Time: " << cc.StartTime.s << " - " << cc.EndTime.s << endl;
	std::cout << "Room: " << cc.Room << endl;
	C.push_back(cc);
	Re_arrange();
	std::system("pause");
	return;
}
// Done

void Academic_year::Remove_Course(vector <Class> &sc, vector <Lecturer> &p)
{
	List_of_Courses();
	while ((getchar()) != '\n');
	std::cout << endl << endl;
	Courses cc;
	std::cout << "Please enter the ID of the course you want to REMOVE: ";
	string s;
	getline(std::cin, s, '\n');
	while (1)
	{
		while (!Find_Course(s, cc))
		{
			std::cout << "Course not found, do you want to input again (y/n) ?" << endl;
			std::cout << "Your choice: ";
			string choice;
			std::cin >> choice;
			if (choice == "n" || choice == "N" || choice == "no") return;
			std::cout << "Please enter the ID of the course: ";
			getline(std::cin, s, '\n');
		}
		std::cout << endl;
		std::cout << "ID: " << cc.ID << endl;
		std::cout << "Course Name " << cc.Course_Name << endl;
		std::cout << "Lecturer's account: " << cc.lecturer_account << endl;
		std::cout << "Day of week: " << cc.Day << endl;
		std::cout << "Start - End Date: " << cc.StartDate.s << " - " << cc.EndDate.s << endl;
		std::cout << "Start - End Time: " << cc.StartTime.s << " - " << cc.EndTime.s << endl;
		std::cout << "Room: " << cc.Room << endl;
		std::cout << "Do you wish to REMOVE this course (y/n): ";
		string temp;
		std::cin >> temp;
		if (temp == "y" || temp == "Y" || temp == "yes") break;
		else
		{
			std::cout << "Do you want to continue ? (y/n)";
			std::cout << "Your choice: ";
			string choi;
			std::cin >> choi;
			if (choi == "n" || choi == "N" || choi == "no") return;
			std::cout << "Please enter the ID of the course: ";
			getline(std::cin, s, '\n');
		}
	}
	for (int i = 0; i < p.size(); i++)
		if (cc.lecturer_account == p[i].username)
		{
			for (int j = 0; j < p[i].work.size(); j++)
				if (cc.ID == p[i].work[j].ID)
				{
					p[i].work.erase(p[i].work.begin() + j);
					break;
				}
			break;
		}

	for (int i = 0; i < cc.mon.size(); i++)
	{
		bool found = false;
		for (int j = 0; j < sc.size(); j++)
		{
			for (int m = 0; m < sc[j].mon.size(); m++)
			{
				if (sc[j].mon[m].ID == cc.mon[i])
				{
					for (int k = 0; k < sc[j].mon[m].study.size(); k++)
					{
						if (cc.ID == sc[j].mon[m].study[k].ID) sc[j].mon[m].study.erase(sc[j].mon[m].study.begin() + k);
						found = true;
						break;
					}
				}
				if (found) break;
			}
			if (found) break;
		}
	}

	Remove_one(cc);
	clrscr();
	std::cout << "&&& Course REMOVED &&&" << endl;
	return;
}
// Done

void List_of_Lecturer(vector <Lecturer> p)
{
	clrscr();
	std::cout << setw(75) << "                              -- @@@ List of Lecturer @@@ -- " << endl << endl;
	for (int k = 0; k < 123; k++) {
		gotoxy(k, 1);
		std::cout << char(178);
		gotoxy(k, 3);
		std::cout << char(178);
	}
	gotoxy(0, 2);
		std::cout << setw(5) << "Name" << setw(20) << "Account" << setw(20) << "Qualification" << setw(10) << "Gender" << setw(20) << "Phone number" << setw(25) << "Year(s) served" << setw(20) << "Currently" << endl;
		std::cout << endl << endl;
		for (int i = 0; i < p.size(); i++)

		{
			
		std::cout << setw(5) << p[i].Name;
		std::cout << setw(10) << p[i].username;
		std::cout << setw(20) << p[i].qualification;
		std::cout << setw(10) << p[i].gender;
		std::cout << setw(20) << p[i].cell_no;
		std::cout << setw(20) << p[i].serves;
		if (p[i].work.size() == 0) std::cout <<setw(20)<< "None" << endl << endl;
		else
		{
			for (int j = 0; j < p[i].work.size(); j++) std::cout << setw(20) << p[i].work[j].ID ;
			std::cout << endl << endl;
		}
		cout << endl;
	}
	std::cout << endl << endl;
	
}
// Done

bool Find_Lec(string name, Lecturer &result, vector <Lecturer> p)
{
	for (int i = 0; i < p.size(); i++)
		if (name == p[i].username)
		{
			result = p[i];
			return true;
		}
	return false;
}
// Done

void Add_Lecturer(vector <Lecturer> &p)
{
	VeKhungCH(0, 0, 122, 3, true);
	gotoxy(54, 1);
	std::cout << "ADD LECTURE MODE" << endl;
	gotoxy(52, 2);
	std::cout << " - Add a lecturer - " << endl;
	textcolor(9);
	VeKhungCH(0, 0, 122, 40, true);
	textcolor(10);
	VeKhungCH(23, 6, 78, 4, true);
	VeKhungCH(28, 7, strlen("Enter new DoB(yyyy/mm/dd): ") + 8, 2, true);
	VeKhungCH(66, 7, 30, 2, true);
	while (1)
	{
		
		
		Lecturer teacher;
		gotoxy(34, 8);
		std::cout << "Name: ";
		gotoxy(69, 8);
		getline(std::cin, teacher.Name, '\n');
		gotoxy(69, 8);
		std::cout << "                           ";	
		gotoxy(34, 8);
		cout << "                            ";
		gotoxy(34, 8);
		std::cout << "Qualification: ";
		gotoxy(69, 8);
		getline(std::cin, teacher.qualification, '\n');
		gotoxy(69, 8);
		std::cout << "                           ";
		gotoxy(34, 8);
		cout << "                            ";
		gotoxy(34, 8);
		std::cout << "Cellphone number: ";
		gotoxy(69, 8);
		getline(std::cin, teacher.gender, '\n');
		gotoxy(69, 8);
		std::cout << "                           ";
		gotoxy(34, 8);
		std::cout << "                            ";
		gotoxy(34, 8);
		std::cout << "Enter student's gender: ";
		gotoxy(69, 8);
		getline(std::cin, teacher.cell_no, '\n');
		gotoxy(69, 8);
		std::cout << "                           ";
		gotoxy(32, 8);
		cout << "                            ";
		gotoxy(32, 8);
		std::cout << "Year(s) served: ";
		gotoxy(69, 8);
		getline(std::cin, teacher.serves, '\n');
		gotoxy(32, 8);
		cout << "                              ";
		gotoxy(69, 8);
		std::cout << "                           ";
		gotoxy(34, 8);
		std::cout << "Account username: ";
		gotoxy(69, 8);
		getline(std::cin, teacher.username, '\n');
		gotoxy(69, 8);
		std::cout << "                           ";
		gotoxy(34, 8);
		cout << "                            ";
		gotoxy(34, 8);
		gotoxy(34, 8);
		std::cout << "Account password: ";
		gotoxy(69, 8);
		getline(std::cin, teacher.password, '\n');
		gotoxy(69, 8);
		std::cout << "                           ";
		gotoxy(34, 8);
		cout << "                            ";
		gotoxy(34, 8);
		p.push_back(teacher);
		system("cls");
		std::cout << "Do you want to continue adding more lecturers ? (y/n)" << endl;
		std::cout << endl;
		std::cout <<"Your choice : ";
	    char choice;
		std::cin >> choice;
		
		system("cls");
		VeKhungCH(0, 0, 122, 3, true);
		gotoxy(54, 1);
		std::cout << "ADD LECTURER MODE" << endl;
		gotoxy(52, 2);
		std::cout << " - Add a lecturer - " << endl;
		textcolor(9);
		VeKhungCH(0, 0, 122, 40, true);
		textcolor(10);
		VeKhungCH(23, 6, 78, 4, true);
		VeKhungCH(28, 7, strlen("Enter new DoB(yyyy/mm/dd): ") + 8, 2, true);
		VeKhungCH(66, 7, 30, 2, true);
		while ((getchar()) != '\n');
		if (choice == 'n' || choice == 'N') return;
		std::cout << endl;
	};
	system("cls");
	return;
}
// Done

void Edit_Lecturer(vector <Lecturer> &p, vector <Courses> &C)
{
	List_of_Lecturer(p);
	textcolor(240);
	Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 177);
	for (int i = 1; i < 122; i++) {
		gotoxy(i, 2);
		cout << char(176);
	}
	string a;
	cout << endl;
	gotoxy(3, 39);

	std::cout << "Please enter the ACCOUNT USERNAME of the lecturer you want to EDIT: ";
	gotoxy(74, 39);

	getline(std::cin, a, '\n');
	system("cls");
	while ((getchar()) != '\n');
	Lecturer s;
	while (1)
	{
		while (!Find_Lec(a, s, p))
		{
			gotoxy(0, 0);
			textcolor(2);
			std::cout << "Lecturer not found, do you want to input again (Y/N) ?" << endl;
			std::cout << "Your choice: ";
			string choice;
			std::cin >> choice;
			system("cls");
			if (choice == "n" || choice == "N" || choice == "no") return;
			cout << endl;
			Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 177);
			for (int i = 1; i < 122; i++) {
				gotoxy(i, 2);
				cout << char(176);
			}
			gotoxy(3, 39);
			std::cout << "Please enter the ACCOUNT USERNAME of the lecturer: ";
			getline(std::cin, a, '\n');
		}
		system("cls");
		gotoxy(56, 19);
		cout << "FOUND!!!" << endl;
		_getch();
		system("cls");
		std::cout << setw(5) << "Name" << setw(15) << "Account username" << setw(20) << "Qualification" << setw(20) << "Gender" << setw(20) << "Cellphone number" << setw(20) << "Year(s) served" << setw(20) << "Currently teaching" << endl;
		std::cout << setw(5) << s.Name;
		std::cout << setw(15) << s.username;
		std::cout << setw(20) << s.qualification;
		std::cout << setw(20) << s.gender;
		std::cout << setw(20) << s.cell_no;
		std::cout << setw(20) << s.serves;
		std::cout << "Currently teaching: ";
		for (int i = 1; i < 122; i++) {
			gotoxy(i, 3);
			cout << char(176);
		}
		std::cout << endl;

		if (s.work.size() == 0) {
			gotoxy(54, 38);
			std::cout << "None" << endl << endl;
		}
		else
		{
			for (int j = 0; j < s.work.size(); j++) std::cout << s.work[j].ID << " ";
			std::cout << endl << endl;
		}
		std::cout << "Do you wish to EDIT this lecturer (y/n): ";
		string temp;
		Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 177);
		gotoxy(2 + strlen("Do you wish to EDIT this lecturer (y/n): "), 39);
		std::cin >> temp;
		system("cls");
		if (temp == "y" || temp == "Y" || temp == "yes") break;
		else
		{
			std::cout << "Do you want to continue ? (y/n)";
			std::cout << "Your choice: ";
			string choi;
			std::cin >> choi;
			if (choi == "n" || choi == "N" || choi == "no") return;
			std::cout << "Please enter the ACCOUNT USERNAME of the lecturer: ";
			long c;
			std::cin >> c;
			a = c;
			system("cls");
		}
	}
	for (int i = 0; i < p.size(); i++)
	{
		if (p[i].username == s.username) p.erase(p.begin() + i);
		break;
	}
	std::cout << endl << endl;
	gotoxy(49, 5);
	std::cout << "*@* Editing lecturer *@*" << endl;
	Sleep(1200);
	system("cls");
	gotoxy(34, 8);
	std::cout << "Enter new lecturer's Name: ";
	string k;
	gotoxy(69, 8);
	getline(std::cin, k, '\n');
	if (k != "no") s.Name = k;
	gotoxy(34, 8);
	std::cout << "Enter new lecturer's account username: ";
	gotoxy(69, 8);
	std::cin >> k;
	if (k != "no")
	{
		s.username = k;
		for (int i = 0; i < s.work.size(); i++)
		{
			for (int j = 0; j < C.size(); j++)
				if (s.work[i].ID == C[j].ID)
				{
					C[j].lecturer_account = s.username;
					break;
				}
			s.work[i].lecturer_account = s.username;
		}
	}
	system("cls");
	gotoxy(34, 8);
	std::cout << "Enter new qualification: ";
	VeKhungCH(29, 7, strlen("Enter new DoB(yyyy/mm/dd): ") + 8, 2, true);
	VeKhungCH(66, 7, 30, 2, true);
	gotoxy(69, 8);
	getline(std::cin, k, '\n');
	if (k != "no") s.qualification = k;
	system("cls");
	gotoxy(34, 8);
	std::cout << "Enter new Gender: ";
	VeKhungCH(29, 7, strlen("Enter new DoB(yyyy/mm/dd): ") + 8, 2, true);
	VeKhungCH(66, 7, 30, 2, true);
	gotoxy(69, 8);
	getline(std::cin, k, '\n');
	if (k != "no") s.gender = k;
	system("cls");
	gotoxy(34, 8);
	std::cout << "Enter new cellphone number: ";
	VeKhungCH(29, 7, strlen("Enter new DoB(yyyy/mm/dd): ") + 8, 2, true);
	VeKhungCH(66, 7, 30, 2, true);
	gotoxy(69, 8);
	getline(std::cin, k, '\n');
	if (k != "no") s.cell_no = k;
	system("cls");
	gotoxy(34, 8);
	std::cout << "Enter new year(s) served: ";
	VeKhungCH(29, 7, strlen("Enter new DoB(yyyy/mm/dd): ") + 8, 2, true);
	VeKhungCH(66, 7, 30, 2, true);
	gotoxy(69, 8);
	getline(std::cin, k, '\n');
	if (k != "no") s.serves = k;
	system("cls");
	Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 177);
	std::cout << setw(5) << "Name" << setw(15) << "Account username" << setw(20) << "Qualification" << setw(20) << "Gender" << setw(20) << "Cellphone number" << setw(20) << "Year(s) served" << setw(20) << "Currently teaching" << endl;
	std::cout << setw(5) << s.Name;
	std::cout << setw(15) << s.username;
	std::cout << setw(20) << s.qualification;
	std::cout << setw(20) << s.gender;
	std::cout << setw(20) << s.cell_no;
	std::cout << setw(20) << s.serves;
	std::cout << "Currently teaching: ";
	if (s.work.size() == 0){
		gotoxy(54, 38);
	std::cout << "None" << endl << endl;}
	else
	{
		for (int j = 0; j < s.work.size(); j++) std::cout << s.work[j].ID << " ";
		std::cout << endl << endl;
	}
	p.push_back(s);
	std::system("pause");
	return;
}
// Done

bool Remove_Lecturer(vector <Lecturer> &p, vector <Courses> &C)
{
	List_of_Lecturer(p);
	while ((getchar()) != '\n');
	std::cout << endl << endl;
	Lecturer tea;
	std::cout << "Please enter the ACCOUNT USERNAME of the lecturer you want to REMOVE: ";
	string s;
	getline(std::cin, s, '\n');
	while (1)
	{
		while (!Find_Lec(s, tea, p))
		{
			std::cout << "Lecturer not found, do you want to input again (y/n) ?" << endl;
			std::cout << "Your choice: ";
			string choice;
			std::cin >> choice;
			if (choice == "n" || choice == "N" || choice == "no") return false;
			std::cout << "Please enter the ACCOUNT USERNAME of the lecturer: ";
			getline(std::cin, s, '\n');
		}
		std::cout << "Name: " << tea.Name << endl;
		std::cout << "Qualification: " << tea.qualification << endl;
		std::cout << "Gender: " << tea.gender << endl;
		std::cout << "Cellphone number: " << tea.cell_no << endl;
		std::cout << "Year(s) served: " << tea.serves << endl << endl;
		std::cout << "Account username: " << tea.username << endl;
		std::cout << "Account password: " << tea.password << endl;
		std::cout << "Currently teaching: ";
		if (tea.work.size() == 0) std::cout << "None" << endl << endl;
		else
		{
			for (int j = 0; j < tea.work.size(); j++) std::cout << tea.work[j].ID << " ";
			std::cout << endl << endl;
		}
		std::cout << "Do you wish to REMOVE this lecturer (y/n): ";
		string temp;
		std::cin >> temp;
		if (temp == "y" || temp == "Y" || temp == "yes") break;
		else
		{
			std::cout << "Do you want to continue ? (y/n)";
			std::cout << "Your choice: ";
			string choi;
			std::cin >> choi;
			if (choi == "n" || choi == "N" || choi == "no") return false;
			std::cout << "Please enter the ACCOUNT USERNAME of the lecturer: ";
			getline(std::cin, s, '\n');
		}
	}
	clrscr();
	std::cout << "&&& Lecturer REMOVED &&&" << endl << endl;
	if (tea.work.size() != 0)
	{
		std::cout << "These are the courses that the removed lecturer was teaching." << endl;
		std::cout << "Please assign new lecturer to the position!" << endl << endl;
		Sleep(100);
		for (int j = 0; j < tea.work.size(); j++)
		{
			std::cout << " - " << tea.work[j].ID << endl;
			std::cout << "Enter the ACCOUNT USERNAME of the replacing lecturer: ";
			string k;
			getline(std::cin, k, '\n');
			for (int k = 0; k < C.size(); k++)
				if (C[k].ID == tea.work[j].ID)
					C[k].lecturer_account = k;
			for (int i = 0; i < p.size(); i++)
				if (k == p[i].username)
					p[i].work.push_back(tea.work[j]);
		}
		std::cout << endl;
	}
	for (int i = 0; i < p.size(); i++)
		if (tea.Name == p[i].Name) p.erase(p.begin() + i);
	system("pause");
	return true;
}
// Done

void Lecturer_importTxT(vector <Lecturer> &p, vector <Courses> &C)
{
	ifstream fin;
	fin.open("Lecturer.txt");
	if (!fin.is_open()) return;
	string temm;

	while (getline(fin, temm, '\n'))
	{
		Lecturer teacher;
		teacher.Name = temm;
		getline(fin, teacher.qualification, '\n');
		getline(fin, teacher.gender, '\n');
		getline(fin, teacher.cell_no, '\n');
		getline(fin, teacher.serves, '\n');
		getline(fin, teacher.username, '\n');
		getline(fin, teacher.password, '\n');
		string ww;
		int now;
		getline(fin, ww, '\n');
		now = atoi(ww.c_str());
		for (int i = 0; i < now; i++)
		{
			string subject;
			getline(fin, subject, '\n');
			for (int j = 0; j < C.size(); j++)
				if (subject == C[j].ID)
				{
					teacher.work.push_back(C[j]);
					break;
				}
		}
		p.push_back(teacher);
	}
	fin.close();
}
// Done

void Lecturer_exportTxT(vector <Lecturer> &p)
{
	ofstream fout;
	fout.open("Lecturer.txt");
	if (!fout.is_open()) return;
	for (int i = 0; i < p.size(); i++)
	{
		fout << p[i].Name << endl;
		fout << p[i].qualification << endl;
		fout << p[i].gender << endl;
		fout << p[i].cell_no << endl;
		fout << p[i].serves << endl;
		fout << p[i].username << endl;
		fout << p[i].password << endl;
		fout << p[i].work.size() << endl;
		for (int j = 0; j < p[i].work.size(); j++)
			fout << p[i].work[j].ID << endl;
	}
	fout.close();
}
// Done

/*
void Add_Academic_year(vector <Academic_year> &edu)
{
	Academic_year add;
	std::cout << "Enter the Academic year (Ex: 2018-2019): ";
	getline(std::cin, add.Name, '\n');
	getline(std::cin, add.Name, '\n');
	edu.push_back(add);
	std::cout << "*** Completed ***" << endl;
	system("pause");
}
// Done

void View_Academic_years(vector <Academic_year> edu)
{
	for (int i = 0; i < edu.size(); i++)
	{
		std::cout << ' - ' << edu[i].Name << " : " << endl << endl;
		for (int j = 0; j < edu[i].C.size(); j++)
		{
			std::cout << "		ID: " << edu[i].C[j].ID << endl;
			std::cout << "		Course Name: " << edu[i].C[j].Course_Name << endl;
			std::cout << "		Lecturer's account: " << edu[i].C[j].lecturer_account << endl;
			std::cout << "		Day of week: " << edu[i].C[j].Day << endl;
			std::cout << "		Start Date - End Date: " << edu[i].C[j].StartDate.s << " to " << edu[i].C[j].EndDate.s << endl;
			std::cout << "		Start Time - End Time: " << edu[i].C[j].StartTime.s << " to " << edu[i].C[j].EndTime.s << endl;
			std::cout << "		Classroom: " << edu[i].C[j].Room << endl;
			std::cout << endl;
		}
	}
}
// Done
*/