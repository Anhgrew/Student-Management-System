#pragma once

#define Class_h_
#ifdef Class_h_ 

#include "Login.h"
#include <string>
#include <string.h>
#include <vector>

using namespace std;

class Academic_year;
class Class;
struct Student;
struct Courses;
struct Lecturer;
struct Date;
struct Time;
struct Score;
struct Credits;

struct Date
{
	int y; // year
	int m; // month
	int d; // day
	string s;
};

struct Time
{
	int m; // minute
	int h; // hour
	string s;
};

struct Score
{
	string Mid, Fin, Avr;
};

struct Credits
{
	string ID;
	Score mark;
	int A[10];
};

struct Student
{
	int No;
	long ID;
	string fName;
	string lName;
	string Gender;
	string DoB;
	string Class;
	string username;
	string password;

	void Schedule(Academic_year MAIN);
	vector <Credits> study;
};

class Class
{
public:
	vector <Student> mon;
	string Name;

	void Remove_one(Student s);
	void Add_one(Student s);
	bool Find_Student(long ID, Student &result);

	void Re_arrange();
	void List_of_Student();

	void importCSV(const char *path, string clName);
	void importTxT(const char *path, string clName, vector <Courses> &C);
	void exportTxT();

	void Remove(vector <Courses> &C, vector <Lecturer> &p);
	void Add_a_student();
	void Editstudent(vector <Courses> &C, vector <Lecturer> &p);
	void search_info();
};

bool Find_Student(long ID, vector <Class> cl);
bool Find(vector <Class> &sc, Student &result, string k);
bool switch_Class(vector <Class> &sc);
void List_of_Classes(vector <Class> sc);
void List_all_Student(vector <Class> sc);

//
// 
//        Courses Section
//
//

struct Courses
{
	int No;
	string ID;
	string Course_Name;
	string lecturer_account;
	string Day;
	Date StartDate, EndDate;
	Time StartTime, EndTime;
	string Room;

	vector <long> mon;

	bool Find_Studente(long ID, Student &result);
	void Remove_onee(Student s);

	void List_of_Studente(vector <Class> &sc);
	void Re_arrangee();
	void Show_attendance_list(vector <Class> &sc);
	void Show_scoreboard(vector <Class> &sc);

	void Edit_attendance_list(vector <Class> &sc);
	void Edit_scoreboard(vector <Class> &sc);
	void Removee(vector <Class> &sc, vector <Lecturer> &p);
	void Adde(vector <Class> &sc, vector <Lecturer> &p);
};

struct Lecturer
{
	string Name, username;
	string qualification;
	string gender;
	string cell_no;
	string serves;
	string password;

	vector <Courses> work;
};

class Academic_year
{
public:
	vector <Courses> C;
	string Name;

	bool Find_Course(string ID, Courses &result);
	void Remove_one(Courses cc);

	void Re_arrange();
	void List_of_Courses();

	void importTxT(vector <Courses> &C);
	void exportTxT();

	void Add_Course(vector <Class> &sc, vector <Lecturer> &p);
	void Edit_Course(vector <Class> &sc, vector <Lecturer> &p);
	void Remove_Course(vector <Class> &sc, vector <Lecturer> &p);
};

void List_of_Lecturer(vector <Lecturer> p);

void Add_Lecturer(vector <Lecturer> &p);
bool Remove_Lecturer(vector <Lecturer> &p, vector <Courses> &C);
void Edit_Lecturer(vector <Lecturer> &p, vector <Courses> &C);
void Lecturer_importTxT(vector <Lecturer> &p, vector <Courses> &C);
void Lecturer_exportTxT(vector <Lecturer> &p);

void Add_Academic_year(vector <Academic_year> &edu);
void View_Academic_years(vector <Academic_year> edu);

#endif
