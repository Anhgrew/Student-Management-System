#pragma once
#define Function_h_
#ifdef Function_h_ 

#include "Class.h"

using namespace std;

struct LoginStudent
{
	bool check;
	Student s;
};

struct LoginLecturer
{
	bool check;
	Lecturer t;
};

void login(char id[21], char pass[21], LoginStudent &is_Student, LoginLecturer &is_Lecturer, vector <Class> sc, vector <Lecturer> p);
void changepassword(LoginStudent &is_Student, LoginLecturer &is_Lecturer, vector <Class> &sc, vector <Lecturer> &p);
string capitalizeString(string input);
void firstcreen();

#endif



