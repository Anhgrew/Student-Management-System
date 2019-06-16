#include "Function.h"

int main()
{
	vector <Class> school;
	vector <Lecturer> Principle;
	Academic_year MAIN;
	MAIN.Name = "2018 - 2019";
	Class CTT1_17;
	Class CTT2_18;
	Class CTT1_18;
	
	resizeConsole(820, 640);	
	int i = 0, j = 0;//for processing usage 
	char choice;//for getting choice
	string find;//for sorting
	string srch;
	int count = 0;
	int count1 = 0;
	//firstcreen();
	while (1)
	{
		system("cls");//clear screen
		MAIN.importTxT(MAIN.C);
		CTT1_18.importTxT("18CTT1.txt", "18CTT1", MAIN.C);
		school.push_back(CTT1_18);
		CTT2_18.importTxT("18CTT2.txt", "18CTT2", MAIN.C);
		school.push_back(CTT2_18);
		CTT1_17.importTxT("17CTT1.txt", "17CTT1", MAIN.C);
		school.push_back(CTT1_17);
		Lecturer_importTxT(Principle, MAIN.C);
		LoginStudent is_Student;
		LoginLecturer is_Lecturer;
		is_Student.check = false;
		is_Lecturer.check = false;
		if (count1 == 0) 
		{
			char id[21], pass[21];
			login(id, pass, is_Student, is_Lecturer, school, Principle);
		}
		VeKhungCH(36, 9, 43, 14, true);
		Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 178);
		system("cls");
		textcolor(10);
		VeKhungCH(39, 12, 43, 14, true);
		Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 178);
		textcolor(10);
		drawstraight(15, 15);
		drawstraight(23, 15);
		gotoxy(55, 13);
		cout << "MEGA MENU" << endl;
		Sleep(500);
		gotoxy(55, 17);
		cout << "1. MAIN MENU" << endl;
		gotoxy(55, 18);
		cout << "2. VIEW ACCOUNT INFO" << endl;
		gotoxy(55, 19);
		cout << "3. CHANGE PASSWORD" << endl;
		gotoxy(55, 20);
		cout << "4. LOGOUT" << endl;
		gotoxy(55, 21);
		cout << "5. EXIT." << endl;
		gotoxy(52, 25);		
		cout << "Enter your choice: " << endl;
		gotoxy(71, 25);
		cin >> choice;
		VeKhungCH(4, 4, 100, 30, true);
		system("cls");//Clear screen
		switch (choice)
		{
			case '1':
			{
				if (is_Student.check)
				{
					while (1)
					{
						VeKhungCH(36, 9, 43, 14, true);
						Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 178);
						system("cls");
						textcolor(10);
						VeKhungCH(39, 12, 43, 14, true);
						Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 178);
						textcolor(10);
						drawstraight(15, 15);
						drawstraight(23, 15);
						gotoxy(55, 13);
						cout << "MAIN MENU" << endl;
						Sleep(500);
						gotoxy(51, 17);
						cout << "1. CHECK IN  " << endl;
						gotoxy(51, 18);
						cout << "2. VIEW ATTENDANCE LIST" << endl;
						gotoxy(51, 19);
						cout << "3. VIEW SCORE BOARD" << endl;
						gotoxy(51, 20);
						cout << "4. VIEW SCHEDULE" << endl;
						gotoxy(51, 21);
						cout << "5. BACK TO MEGA MENU." << endl;
						gotoxy(52, 25);
						cout << "Enter your choice: " << endl;
						gotoxy(71, 25);
						cin >> choice;
						VeKhungCH(4, 4, 100, 30, true);
						system("cls");//Clear screen
						switch (choice)//First switch											  
						{
							case '1':
							{
								cout << "1";
							}
							continue;

							case '2':
							{
								clrscr();
								std::cout << "Course ID  W01  W02  W03  W04  W05  W06  W07  W08  W09  W10";
								for (int i = 0; i < is_Student.s.study.size(); i++)
								{
									std::cout << is_Student.s.study[i].ID << "   ";
									for (int j = 0; j < 10; j++)
									{
										switch (is_Student.s.study[i].A[j])
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
									std::cout << endl;
								}
								std::cout << endl;
								std::system("pause");
							}
							continue;

							case '3':
							{
								clrscr();
								std::cout << "Course ID     Midterm     Final     Average";
								for (int i = 0; i < is_Student.s.study.size(); i++)
								{
									std::cout << is_Student.s.study[i].ID << "     ";				
									std::cout << is_Student.s.study[i].mark.Mid << "      ";
									std::cout << is_Student.s.study[i].mark.Fin << "      ";
									std::cout << is_Student.s.study[i].mark.Avr << "      ";
									std::cout << endl;
								}
								std::cout << endl;
								std::system("pause");
							}//outer case 3
							continue;

							case '4':
							{
								clrscr();
								is_Student.s.Schedule(MAIN);
								std::system("pause");
							}
							continue;

							case '5':
							{
								count1++;
								count++;
								break;
							}
						}
						break;
					}
				}
				else if (is_Lecturer.check)
				{
					while (1)
					{
						while ((getchar()) != '\n');
						VeKhungCH(36, 9, 43, 14, true);
						Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 178);
						system("cls");
						textcolor(10);
						VeKhungCH(39, 12, 43, 14, true);
						Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 178);
						textcolor(10);
						drawstraight(15, 15);
						drawstraight(23, 15);
						gotoxy(55, 13);
						cout << "LECTURER MENU" << endl;
						Sleep(500);
						gotoxy(51, 17);
						cout << "1. COURSES  " << endl;
						gotoxy(51, 18);
						cout << "2. ATTENDANCE LIST" << endl;
						gotoxy(51, 19);
						cout << "3. SCOREBOARD" << endl;
						gotoxy(51, 20);
						cout << "4. BACK TO MAIN MENU." << endl;
						gotoxy(52, 25);
						cout << "Enter your choice: " << endl;
						gotoxy(71, 25);
						cin >> choice;
						VeKhungCH(4, 4, 100, 30, true);
						system("cls");//Clear screen
						switch (choice)//First switch
						{
						case '1':
						{
							{
								while ((getchar()) != '\n');

								int option;
								int answer;
								bool condition = true;
								while (condition)
								{
									VeKhungCH(0, 0, 119, 38, true);
									VeKhungCH(4, 8, 110, 27, true);
									VeKhungCH(51, 8, 19, 2, true);
									ToMau(52, 9, "COURSES", 240);
									VeKhungCH(36, 35, 48, 3, true);
									textcolor(14);
									gotoxy(43, 19);
									cout << "1. Show all courses" << endl;
									gotoxy(43, 20);
									cout << "2. Add a course" << endl;
									gotoxy(43, 21);
									cout << "3. Edit a course (CAN CHANGE THE TEACHING LECTURER HERE)" << endl;
									gotoxy(43, 22);
									cout << "4. Remove a course" << endl;
									gotoxy(43, 23);
									cout << "5. Show List of students of a course" << endl;
									gotoxy(43, 24);
									cout << "6. Exit." << endl;
									gotoxy(37, 36);
									cout << "Please enter your option base on the followings" << endl;
									gotoxy(51, 37);
									cout << "Your choice is: ";
									cin >> option;
									system("cls");
									if (!cin.good())
									{
										cout << "Incorrect input, please input again" << endl;
										cin.clear(); // Clear the error state
										string discard;
										getline(cin, discard);
										system("cls");
									}
									if (option == 6)
									{
										exit(1);
									}
									switch (option)
									{
									case 1: // Show all Courses
									{
										MAIN.List_of_Courses();
										VeKhungCH(0, 0, 150, 44, true);
										cout << endl;
										ToMau(52, 43, "1: Back to menu - 2: Exit - Please input your option: ", 12);
										cin >> answer;
										system("cls");
										if (!cin.good())
										{
											cout << "Incorrect input, please input again" << endl;
											cin.clear();
											string discard;
											getline(cin, discard);
											system("cls");
										}
										if (answer == 1)
										{

											continue;
										}
										if (answer == 2)
										{
											break;
										}
									}
									continue;

									case 2: // Add a course
									{
										clrscr();
										MAIN.List_of_Courses();
										while ((getchar()) != '\n');
										MAIN.Add_Course(school, Principle);
										for (int i = 0; i < school.size(); i++)
											school[i].exportTxT();
										MAIN.exportTxT();
										Lecturer_exportTxT(Principle);
									}
									continue;

									case 3: // Edit
										while (condition)
										{
											clrscr();
											while ((getchar()) != '\n');
											textcolor(10);
											VeKhungCH(0, 0, 119, 38, true);
											VeKhungCH(4, 8, 110, 27, true);
											VeKhungCH(54, 8, 12, 2, true);
											VeKhungCH(36, 35, 48, 3, true);
											ToMau(55, 9, "COURSE", 206);
											textcolor(14);
											gotoxy(49, 19);
											cout << "1. Edit a course info (You can change the lecturer here !!!)" << endl;
											gotoxy(49, 20);
											cout << "2. Add a student to course" << endl;
											gotoxy(49, 21);
											cout << "3. Remove a student from course" << endl;
											gotoxy(49, 22);
											cout << "4. Back to COURSE INFORMATION" << endl;
											gotoxy(37, 36);
											cout << "Please enter your option base on the followings" << endl;
											gotoxy(52, 37);
											cout << "Your choice is: ";
											int op;
											cin >> op;
											system("cls");
											if (!cin.good())
											{
												cin.clear(); // Clear the error state
												string discard;
												getline(cin, discard);
											}
											if (op == 4)
											{
												break;
											}
											else
											{
												switch (op)
												{
												case 1:
												{
													clrscr();
													while ((getchar()) != '\n');

													MAIN.Edit_Course(school, Principle);
												}
												continue;

												case 2:
												{
													clrscr();
													while ((getchar()) != '\n');

													MAIN.List_of_Courses();
													std::cout << "Enter the ID of the course: ";
													string choice;
													getline(std::cin, choice, '\n');
													for (int i = 0; i < MAIN.C.size(); i++)
													{
														if (choice == MAIN.C[i].ID)
														{
															MAIN.C[i].Adde(school, Principle);
															break;
														}
													}
												}
												continue;

												case 3:
												{
													clrscr();
													while ((getchar()) != '\n');

													MAIN.List_of_Courses();
													std::cout << "Enter the ID of the course: ";
													string choice;
													getline(std::cin, choice, '\n');
													for (int i = 0; i < MAIN.C.size(); i++)
													{
														if (choice == MAIN.C[i].ID)
														{
															MAIN.C[i].Removee(school, Principle);
															break;
														}
													}
												}
												continue;

												default:
												{
													gotoxy(42, 16);
													textcolor(4);
													cout << "Incorrect input - Please try again !!!" << endl;
													Sleep(2000);
													system("cls");
												}
												continue;
												}
												break;
											}
										}
										continue;

									case 4: //Remove a course
									{
										clrscr();
										while ((getchar()) != '\n');
										MAIN.Remove_Course(school, Principle);
										MAIN.exportTxT();
										for (int i = 0; i < school.size(); i++)
											school[i].exportTxT();
										Lecturer_exportTxT(Principle);
										VeKhungCH(0, 0, 150, 44, true);
										cout << endl;
										ToMau(52, 43, "1: Back to menu - 2: Exit - Please input your option: ", 12);
										cin >> answer;
										system("cls");
										if (!cin.good())
										{
											cout << "Incorrect input, please input again" << endl;
											cin.clear();
											string discard;
											getline(cin, discard);
											system("cls");
										}
										if (answer == 1)
										{

											continue;
										}
										if (answer == 2)
										{
											break;
										}
									}
									continue;

									case 5: // Show list of students
									{
										while (1)
										{
											clrscr();
											while ((getchar()) != '\n');
											MAIN.List_of_Courses();
											std::cout << "Enter the ID of the course: ";
											string choi;
											getline(std::cin, choi, '\n');
											for (int i = 0; i < MAIN.C.size(); i++)
											{
												if (choi == MAIN.C[i].ID)
													MAIN.C[i].List_of_Studente(school);
											}
											std::cout << endl;
											std::cout << "Do you want to continue ? (y/n) Your choice: ";
											string choice;
											getline(std::cin, choice, '\n');
											if (choice == "n" || choice == "N" || choice == "no") break;
										}
										VeKhungCH(0, 0, 150, 44, true);
										cout << endl;
										ToMau(52, 43, "1: Back to menu - 2: Exit - Please input your option: ", 12);
										cin >> answer;
										system("cls");
										if (!cin.good())
										{
											cout << "Incorrect input, please input again" << endl;
											cin.clear();
											string discard;
											getline(cin, discard);
											system("cls");
										}
										if (answer == 1)
										{

											continue;
										}
										if (answer == 2)
										{
											break;
										}
									}
									continue;

									case 6:
									{
										break;
									}
									continue;

									default:
									{
										gotoxy(42, 16);
										textcolor(4);
										cout << "Incorrect input - Please try again !!!" << endl;
										Sleep(2000);
										system("cls");
										continue;
									}
									continue;
									}
									break;
								}
							}
						}
						continue;

						case '2': //Attendance
						{
							clrscr();
							textcolor(10);
							VeKhungCH(0, 0, 119, 38, true);
							VeKhungCH(4, 8, 110, 27, true);
							VeKhungCH(54, 8, 12, 2, true);
							VeKhungCH(36, 35, 48, 3, true);
							ToMau(55, 9, "ATTENDANCE LIST", 206);
							textcolor(14);
							gotoxy(49, 19);
							cout << "1. Show attendance list" << endl;
							gotoxy(49, 20);
							cout << "2. Edit attendance list" << endl;
							gotoxy(49, 21);
							cout << "3. Back to COURSE INFORMATION" << endl;
							gotoxy(37, 36);
							cout << "Please enter your option base on the followings" << endl;
							gotoxy(52, 37);
							cout << "Your choice is: ";
							int op;
							cin >> op;
							system("cls");
							if (!cin.good())
							{
								cin.clear(); // Clear the error state
								string discard;
								getline(cin, discard);
							}
							if (op == 3)
							{
								break;
							}
							else
							{
								switch (op)
								{
								case 1:
								{
									clrscr();
									while ((getchar()) != '\n');
									MAIN.List_of_Courses();
									std::cout << "Enter the ID of the course: ";
									string choi;
									getline(std::cin, choi, '\n');
									for (int k = 0; k < MAIN.C.size(); k++)
									{
										if (choi == MAIN.C[k].ID)
										{
											MAIN.C[k].Show_attendance_list(school);
											break;
										}
									}
									std::cout << endl;
									std::system("pause");
								}
								continue;

								case 2:
								{
									clrscr();
									while ((getchar()) != '\n');

									std::cout << "Enter the ID of the course: ";
									string choice;
									getline(std::cin, choice, '\n');
									for (int i = 0; i < MAIN.C.size(); i++)
									{
										if (choice == MAIN.C[i].ID)
										{
											MAIN.C[i].Edit_attendance_list(school);
											break;
										}
									}
								}
								continue;

								default:
								{
									gotoxy(42, 16);
									textcolor(4);
									cout << "Incorrect input - Please try again !!!" << endl;
									Sleep(2000);
									system("cls");
								}
								continue;
								}
							}
							continue;
						}
						case '3': // Scoreboard
						{
							clrscr();
							textcolor(10);
							VeKhungCH(0, 0, 119, 38, true);
							VeKhungCH(4, 8, 110, 27, true);
							VeKhungCH(54, 8, 12, 2, true);
							VeKhungCH(36, 35, 48, 3, true);
							ToMau(55, 9, "SCOREBOARD", 206);
							textcolor(14);
							gotoxy(49, 19);
							cout << "1. Show scoreboard" << endl;
							gotoxy(49, 20);
							cout << "2. Edit scoreboard" << endl;
							gotoxy(49, 21);
							cout << "3. Back to COURSE INFORMATION" << endl;
							gotoxy(37, 36);
							cout << "Please enter your option base on the followings" << endl;
							gotoxy(52, 37);
							cout << "Your choice is: ";
							int op;
							cin >> op;
							system("cls");
							if (!cin.good())
							{
								cin.clear(); // Clear the error state
								string discard;
								getline(cin, discard);
							}
							if (op == 3)
							{
								break;
							}
							else
							{
								switch (op)
								{
								case 1:
								{
									clrscr();
									while ((getchar()) != '\n');
									MAIN.List_of_Courses();
									std::cout << "Enter the ID of the course: ";
									string choi;
									getline(std::cin, choi, '\n');
									for (int k = 0; k < MAIN.C.size(); k++)
									{
										if (choi == MAIN.C[k].ID)
										{
											MAIN.C[k].Show_scoreboard(school);
											break;
										}
									}
									std::cout << endl;
									std::system("pause");
								}
								continue;

								case 2:
								{
									clrscr();
									while ((getchar()) != '\n');

									std::cout << "Enter the ID of the course: ";
									string choice;
									getline(std::cin, choice, '\n');
									for (int i = 0; i < MAIN.C.size(); i++)
									{
										if (choice == MAIN.C[i].ID)
										{
											MAIN.C[i].Edit_scoreboard(school);
											break;
										}
									}
								}
								continue;

								default:
								{
									gotoxy(42, 16);
									textcolor(4);
									cout << "Incorrect input - Please try again !!!" << endl;
									Sleep(2000);
									system("cls");
								}
								continue;
								}
								break;
							}
							continue;
						}//outer case 3
						continue;

						case '4':
						{
							count1++;
							count++;
							break;
						}
						}
						break;
					}
				}
				else
				{
					while (1)
					{
						VeKhungCH(36, 9, 43, 14, true);
						Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 178);
						system("cls");
						textcolor(10);
						VeKhungCH(39, 12, 43, 14, true);
						Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 178);
						textcolor(10);
						drawstraight(15, 15);
						drawstraight(23, 15);
						gotoxy(55, 13);
						cout << "MAIN MENU" << endl;
						Sleep(500);
						gotoxy(55, 17);
						cout << "1. STUDENT " << endl;
						gotoxy(55, 18);
						cout << "2. LECTURER" << endl;
						gotoxy(55, 19);
						cout << "3. COURSE" << endl;
						gotoxy(55, 20);
						cout << "4. BACK TO MEGA MENU" << endl;
						gotoxy(52, 25);
						cout << "Enter your choice: " << endl;
						gotoxy(71, 25);
						cin >> choice;
						VeKhungCH(4, 4, 100, 30, true);
						system("cls");//Clear screen
						switch (choice)//First switch											  
						{
							case '1': //Student
							{
								while (1)//inner loop-1
								{
									system("cls");//Clear screen   
									VeKhungCH(39, 12, 43, 15, true);
									Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 178);
									drawstraight(15, 15);
									gotoxy(41, 14);
									cout << "STUDENTS INFORMATION AND BIODATA SECTION";
									Sleep(50);
									gotoxy(46, 17);
									cout << "1.Add student";
									Sleep(50);
									gotoxy(46, 18);
									cout << "2.Edit a student\n";
									Sleep(50);
									gotoxy(46, 19);
									cout << "3.Remove a student\n";
									Sleep(50);
									gotoxy(46, 20);
									cout << "4.Change class of a student\n";
									Sleep(50);
									gotoxy(46, 21);
									cout << "5.View list of classes\n";
									Sleep(50);
									gotoxy(46, 22);
									cout << "6.View list of all student \n";
									Sleep(50);
									gotoxy(46, 23);
									cout << "7.Jump to main.\n";
									Sleep(50);
									drawstraight(25, 15);
									gotoxy(50, 26);
									cout << "Enter your choice: ";
									Sleep(50);
									cin >> choice;
									system("cls");
									switch (choice)//Second switch
									{
										case '1'://Insert data
										{
											while ((getchar()) != '\n');
											VeKhungCH(15, 5, 90, 30, true);
											VeKhungCH(27, 9, 67, 22, true);
											VeKhungCH(47, 4, 26, 2, true);
											VeKhungCH(47, 16, 26, 2, true);
											VeKhungCH(47, 21, 26, 2, true);
											VeKhungCH(47, 26, 26, 2, true);
											VeKhungCH(43, 33, 34, 2, true);
											Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 177);
											List_of_Classes(school);
											gotoxy(35, 11);
											cout << "Which class do you want to add student (Ex: 18CTT1) ?" << endl;
											string choice;
											gotoxy(53, 34);
											cout << "Your choice: ";
											getline(cin, choice, '\n');
											for (int i = 0; i < school.size(); i++)
											{
												if (school[i].Name == choice)
												{
													clrscr();
													school[i].Add_a_student();
													school[i].exportTxT();
													break;
												}
												cout << endl;
											}
											system("cls");
											textcolor(2);
											Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 177);
											textcolor(14);
											gotoxy(51, 19);
											cout << "*** Completed ***";
											textcolor(10);
											Sleep(1000);
										}
										continue;//control back to inner loop -1

										case '2'://Edit a student
										{
											while ((getchar()) != '\n');
											VeKhungCH(15, 5, 90, 30, true);
											VeKhungCH(27, 9, 67, 22, true);
											VeKhungCH(47, 4, 26, 2, true);
											VeKhungCH(47, 16, 26, 2, true);
											VeKhungCH(47, 21, 26, 2, true);
											VeKhungCH(47, 26, 26, 2, true);
											VeKhungCH(43, 33, 34, 2, true);
											Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 178);
											string className;
											List_of_Classes(school);
											gotoxy(46, 34);
											cout << "Enter the class name: ";
											cin >> className;
											clrscr();
											for (int i = 0; i < school.size(); i++)
												if (school[i].Name == className)
												{
													school[i].Editstudent(MAIN.C, Principle);
													school[i].exportTxT();
													break;
												}
											MAIN.exportTxT();
											Lecturer_exportTxT(Principle);
										}
										continue;//control back to inner loop -1

										case '3': //Remove a student
										{
											while ((getchar()) != '\n');
											VeKhungCH(15, 5, 90, 30, true);
											VeKhungCH(27, 9, 67, 22, true);
											VeKhungCH(47, 4, 26, 2, true);
											VeKhungCH(47, 16, 26, 2, true);
											VeKhungCH(47, 21, 26, 2, true);
											VeKhungCH(47, 26, 26, 2, true);
											VeKhungCH(43, 33, 34, 2, true);
											Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 178);
											string className;
											List_of_Classes(school);
											gotoxy(46, 34);
											cout << "Enter the class name: ";
											cin >> className;
											clrscr();
											for (int i = 0; i < school.size(); i++)
												if (school[i].Name == className)
												{
													school[i].Remove(MAIN.C, Principle);
													school[i].exportTxT();
													MAIN.exportTxT();
													system("pause");
													break;
												}
										}
										continue;//control back to inner loop -1

										case '4': //Change class of a student
										{
											while ((getchar()) != '\n');
											switch_Class(school);
											for (int i = 0; i < school.size(); i++) school[i].exportTxT();
										}
										continue;//control back to inner loop -1

										case '5': //View list of classes & students in that class
										{
											while ((getchar()) != '\n');
											int answeri;
											VeKhungCH(15, 5, 90, 30, true);
											VeKhungCH(27, 9, 67, 22, true);
											VeKhungCH(47, 4, 26, 2, true);
											VeKhungCH(47, 16, 26, 2, true);
											VeKhungCH(47, 21, 26, 2, true);
											VeKhungCH(47, 26, 26, 2, true);
											VeKhungCH(43, 33, 34, 2, true);
											Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 178);
											string className;
											textcolor(6);
											List_of_Classes(school);
											gotoxy(46, 34);
											cout << "Enter the class name: ";
											cin >> className;
											clrscr();
											for (int i = 0; i < school.size(); i++)
												if (school[i].Name == className)
												{
													school[i].List_of_Student();
													break;
												}
											ToMau(36, 38, "1: Back to menu - 2: Exit - Please input your option: ", 12);
											cin >> answeri;
											Sleep(100);
											system("cls");
											if (answeri == 1)
											{
												continue;
											}
											if (answeri == 2)
											{
												exit(0);
												break;
											}
											_getch();
										}
										continue;//control back to inner loop -1

										case '6': //View list of all student in the school
										{
											clrscr();
											while ((getchar()) != '\n');
											List_all_Student(school);
											resizeConsole(820, 640);
										}
										continue;//control back to inner loop -1
	
										case '7'://Jump to main
										{
											break;//inner switch breaking
										}
									}
									break;//inner loop-1 breaking
								}
								continue;//Control pass to 1st loop 
							}
							continue;

							case '2'://Teachers biodata
							{
								while (1)//inner loop-1
								{
									while ((getchar()) != '\n');
									system("cls");//Clear screen   
									VeKhungCH(39, 12, 43, 15, true);
									Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 178);
									drawstraight(15, 15);
									gotoxy(49, 14);
									cout << "LECTURER BIODATA SECTION";
									Sleep(50);
									gotoxy(51, 17);
									cout << "1.Add lecturer\n";
									Sleep(55);
									gotoxy(51, 18);
									cout << "2.Edit a lecturer biodata "<<endl;
									gotoxy(45, 19);
									cout<<"	(not his/her teaching subjects)\n";
									Sleep(55);
									gotoxy(51, 20);
									cout << "3.Remove a lecturer\n";
									Sleep(55);
									gotoxy(51, 21);
									cout << "4.View all lecturer\n";
									Sleep(55);
									gotoxy(51, 22);
									cout << "5.Jump to main\n";
									Sleep(50);
									drawstraight(25, 15);
									gotoxy(50, 26);
									cout << "Enter your choice: ";
									Sleep(50);
									cin >> choice;
									system("cls");
									switch (choice)//Second switch
									{
										case '1'://Add Lecturer
										{
											clrscr();
											Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 177);
											while ((getchar()) != '\n');
											gotoxy((123 - strlen("ADD LECTURER MODE")) / 2, 2);
											std::cout << "ADD LECTURER MODE" << endl << endl;
											for (int k = 0; k < 123; k++) {
												gotoxy(k, 3);
												std::cout << char(178);
											}
											Add_Lecturer(Principle);
											Lecturer_exportTxT(Principle);
										}
										continue;//control back to inner loop -1

										case '2'://Edit a lecturer
										{
											clrscr();
											while ((getchar()) != '\n');
											VeKhungCH(15, 5, 90, 30, true);
											VeKhungCH(27, 9, 67, 22, true);
											VeKhungCH(47, 4, 26, 2, true);
											VeKhungCH(47, 16, 26, 2, true);
											VeKhungCH(47, 21, 26, 2, true);
											VeKhungCH(47, 26, 26, 2, true);
											VeKhungCH(43, 33, 34, 2, true);
											Rectangle1(0, 123, 0, 40, 0, 41, 0, 122, 178);
											Edit_Lecturer(Principle, MAIN.C);
											MAIN.exportTxT();
											Lecturer_exportTxT(Principle);
										}
										continue;//control back to inner loop -1

										case '3'://remove a lecturer
										{
											clrscr();
											while ((getchar()) != '\n');
											std::cout << "&&& REMOVING A LECTURER &&&" << endl << endl;
											if (Principle.size() <= 1)
											{
												std::cout << "There is only one teacher left, can't remove. Please add more lecturers if you want to remove! " << endl;
												std::cout << "YOU WANT TO SELL THIS SCHOOL, RIGHT ?!" << endl << endl;
												system("pause");
												continue;
											}
											Remove_Lecturer(Principle, MAIN.C);
											MAIN.exportTxT();
											Lecturer_exportTxT(Principle);
										}
										continue;

										case '4'://view all lecturer
										{
											List_of_Lecturer(Principle);
											system("pause");
										}
										continue;

										case '5'://Jump to main
										{
											break;//inner switch breaking
										}
									}
									break;
								}
							}//outer case 2
							continue;

							case '3':
							{
								int option;
								int answer;
								bool condition = true;
								while (condition)
								{
									clrscr();
									VeKhungCH(0, 0, 119, 38, true);
									VeKhungCH(4, 8, 110, 27, true);
									VeKhungCH(51, 8, 20, 2, true);
									ToMau(52, 9, "COURSES INFORMATION", 240);
									VeKhungCH(36, 35, 48, 3, true);
									textcolor(14);
									gotoxy(43, 16);
									cout << "1. Show all courses" << endl;
									gotoxy(43, 17);
									cout << "2. Add a course" << endl;
									gotoxy(43, 18);
									cout << "3. Edit a course (CAN CHANGE THE TEACHING LECTURER HERE)" << endl;
									gotoxy(43, 19);
									cout << "4. Remove a course" << endl;
									gotoxy(43, 20);
									cout << "5. Show List of students of a course" << endl;
									gotoxy(43, 21);
									cout << "6. Show Attendance list of a course" << endl;
									gotoxy(43, 22);
									cout << "7. Show Scoreboard of a course" << endl;
									gotoxy(43, 23);
									cout << "8. Exit." << endl;
									gotoxy(37, 36);
									cout << "Please enter your option base on the followings" << endl;
									gotoxy(51, 37);
									cout << "Your choice is: ";
									cin >> option;
									system("cls");
									if (!cin.good())
									{
										cout << "Incorrect input, please input again" << endl;
										cin.clear(); // Clear the error state
										string discard;
										getline(cin, discard);
										system("cls");
									}
									if (option == 8)
									{
										exit(1);
									}
									switch (option)
									{
									case 1: // Show all Courses
									{
										MAIN.List_of_Courses();
										VeKhungCH(0, 0, 150, 44, true);
							
										cout << endl;
								
										ToMau(52, 43, "1: Back to menu - 2: Exit - Please input your option: ", 12);
										cin >> answer;
							
										system("cls");
										resizeConsole(820, 640);
										system("cls");
										if (!cin.good())
										{
											cout << "Incorrect input, please input again" << endl;
											cin.clear();
											string discard;
											getline(cin, discard);
											system("cls");
											
											
										}
										if (answer == 1)
										{
											break;
										}
										if (answer == 2)
										{
											exit(1);
											break;
										}
										
									}
									continue;

									case 2: // Add a course
									{	  
									
										MAIN.Add_Course(school, Principle);
										for (int i = 0; i < school.size(); i++)
											school[i].exportTxT();
										MAIN.exportTxT();
										Lecturer_exportTxT(Principle);
									}
									continue;

									case 3: // Edit
										while (condition)
										{
											clrscr();
											while ((getchar()) != '\n');
											textcolor(10);
											VeKhungCH(0, 0, 119, 38, true);
											VeKhungCH(4, 8, 110, 27, true);
											VeKhungCH(54, 8, 12, 2, true);
											VeKhungCH(36, 35, 48, 3, true);
											ToMau(55, 9, "EDIT COURSE", 206);
											textcolor(14);
											gotoxy(49, 19);
											cout << "1. Edit a course info (You can change the lecturer here !!!)" << endl;
											gotoxy(49, 20);
											cout << "2. Add a student to course" << endl;
											gotoxy(49, 21);
											cout << "3. Remove a student from course" << endl;
											gotoxy(49, 22);
											cout << "4. Edit attendance list of course" << endl;
											gotoxy(49, 23);
											cout << "5. Edit scoreboard of course" << endl;
											gotoxy(49, 24);
											cout << "6. Back to COURSE INFORMATION" << endl;
											gotoxy(37, 36);
											cout << "Please enter your option base on the followings" << endl;
											gotoxy(52, 37);
											cout << "Your choice is: ";
											int op;
											cin >> op;
											system("cls");
											if (!cin.good())
											{
												cin.clear(); // Clear the error state
												string discard;
												getline(cin, discard);
											}
											if (op == 6)
											{
												break;
											}
											else
											{
												switch (op)
												{
												case 1:
												{
													clrscr();
													while ((getchar()) != '\n');

													MAIN.Edit_Course(school, Principle);
												}
												continue;

												case 2:
												{
													clrscr();
													while ((getchar()) != '\n');

													MAIN.List_of_Courses();
													std::cout << "Enter the ID of the course: ";
													string choice;
													getline(std::cin, choice, '\n');
													for (int i = 0; i < MAIN.C.size(); i++)
													{
														if (choice == MAIN.C[i].ID)
														{
															MAIN.C[i].Adde(school, Principle);
															break;
														}
													}
												}
												continue;

												case 3:
												{
													clrscr();
													while ((getchar()) != '\n');

													MAIN.List_of_Courses();
													std::cout << "Enter the ID of the course: ";
													string choice;
													getline(std::cin, choice, '\n');
													for (int i = 0; i < MAIN.C.size(); i++)
													{
														if (choice == MAIN.C[i].ID)
														{
															MAIN.C[i].Removee(school, Principle);
															break;
														}
													}
												}
												continue;

												case 4:
												{
													clrscr();
													while ((getchar()) != '\n');
													MAIN.List_of_Courses();

													std::cout << "Enter the ID of the course: ";
													string choice;
													getline(std::cin, choice, '\n');
													for (int i = 0; i < MAIN.C.size(); i++)
													{
														if (choice == MAIN.C[i].ID)
														{
															MAIN.C[i].Edit_attendance_list(school);
															break;
														}
													}
												}
												continue;

												case 5:
												{
													clrscr();
													while ((getchar()) != '\n');
													MAIN.List_of_Courses();

													std::cout << "Enter the ID of the course: ";
													string choice;
													getline(std::cin, choice, '\n');
													for (int i = 0; i < MAIN.C.size(); i++)
													{
														if (choice == MAIN.C[i].ID)
														{
															MAIN.C[i].Edit_scoreboard(school);
															break;
														}
													}
												}
												continue;

												default:
												{
													gotoxy(42, 16);
													textcolor(4);
													cout << "Incorrect input - Please try again !!!" << endl;
													Sleep(2000);
													system("cls");
												}
												continue;
												}
											}
										}
										continue;

									case 4: //Remove a course
									{
										clrscr();
										MAIN.List_of_Courses();
										while ((getchar()) != '\n');
										MAIN.Remove_Course(school, Principle);
										MAIN.exportTxT();
										for (int i = 0; i < school.size(); i++)
											school[i].exportTxT();
										Lecturer_exportTxT(Principle);
										VeKhungCH(0, 0, 150, 44, true);
										cout << endl;
										ToMau(52, 43, "1: Back to menu - 2: Exit - Please input your option: ", 12);
										cin >> answer;
										system("cls");
										if (!cin.good())
										{
											cout << "Incorrect input, please input again" << endl;
											cin.clear();
											string discard;
											getline(cin, discard);
											system("cls");
										}
										if (answer == 1)
										{

											continue;
										}
										if (answer == 2)
										{
											break;
										}
									}
									continue;

									case 5: // Show list of students
									{
										while (1)
										{
											clrscr();
											while ((getchar()) != '\n');
											MAIN.List_of_Courses();
											std::cout << "Enter the ID of the course: ";
											string choi;
											getline(std::cin, choi, '\n');
											for (int i = 0; i < MAIN.C.size(); i++)
											{
												if (choi == MAIN.C[i].ID)
													MAIN.C[i].List_of_Studente(school);
											}
											std::cout << endl;
											std::cout << "Do you want to continue ? (y/n) Your choice: ";
											string choice;
											getline(std::cin, choice, '\n');
											if (choice == "n" || choice == "N" || choice == "no") break;
										}
										VeKhungCH(0, 0, 150, 44, true);
										cout << endl;
										ToMau(52, 43, "1: Back to menu - 2: Exit - Please input your option: ", 12);
										cin >> answer;
										system("cls");
										if (!cin.good())
										{
											cout << "Incorrect input, please input again" << endl;
											cin.clear();
											string discard;
											getline(cin, discard);
											system("cls");
										}
										if (answer == 1)
										{

											continue;
										}
										if (answer == 2)
										{
											break;
										}
									}
									continue;

									case 6: // Show attendance list
									{
										clrscr();
										while ((getchar()) != '\n');
										MAIN.List_of_Courses();
										std::cout << "Enter the ID of the course: ";
										string choi;
										getline(std::cin, choi, '\n');
										for (int k = 0; k < MAIN.C.size(); k++)
										{
											if (choi == MAIN.C[k].ID)
											{
												MAIN.C[k].Show_attendance_list(school);
												break;
											}
										}
										std::cout << endl;
										std::system("pause");
									}
									continue;

									case 7: // Show scoreboard
									{
										clrscr();
										while ((getchar()) != '\n');
										MAIN.List_of_Courses();
										std::cout << "Enter the ID of the course: ";
										string choi;
										getline(std::cin, choi, '\n');
										for (int k = 0; k < MAIN.C.size(); k++)
										{
											if (choi == MAIN.C[k].ID)
											{
												MAIN.C[k].Show_scoreboard(school);
												break;
											}
										}
										std::cout << endl;
										std::system("pause");
									}
									continue;

									case 8:
									{
										break;
									}
									continue;

									default:
									{
										gotoxy(42, 16);
										textcolor(4);
										cout << "Incorrect input - Please try again !!!" << endl;
										Sleep(2000);
										system("cls");
										continue;
									}
									continue;
									}
									break;
								}
							}//outer case 3
							continue;

							case '4':
							{
								count1++;
								break;
							}
						}
						break;
					}
					continue;
				}


			}
			continue;

			case '2':
			{
				while ((getchar()) != '\n');
				clrscr();
				if (is_Student.check)
				{
					std::cout << "ID: " << is_Student.s.ID << endl;
					std::cout << "Name: " << is_Student.s.lName << " " << is_Student.s.fName << endl;
					std::cout << "Gender: " << is_Student.s.Gender << endl;
					std::cout << "Class: " << is_Student.s.Class << endl;
					std::cout << "Date of birth: " << is_Student.s.DoB << endl;
					std::cout << "Account username: " << is_Student.s.username << endl;
					std::cout << "Password: ";
					for (int i = 0; i < is_Student.s.password.length(); i++) std::cout << "*";
					std::cout << endl;
				}
				else if (is_Lecturer.check)
				{
					std::cout << "Name: " << is_Lecturer.t.Name << endl;
					std::cout << "Qualification: " << is_Lecturer.t.qualification << endl;
					std::cout << "Gender: " << is_Lecturer.t.gender << endl;
					std::cout << "Cellphone number: " << is_Lecturer.t.cell_no << endl;
					std::cout << "Year(s) served: " << is_Lecturer.t.serves << endl;
					std::cout << "Currently teaching: ";
					if (is_Lecturer.t.work.size() == 0) std::cout << "None" << endl << endl;
					else
					{
						for (int j = 0; j < is_Lecturer.t.work.size(); j++) std::cout << is_Lecturer.t.work[j].ID << " ";
						std::cout << endl << endl;
					}
					std::cout << "Account username: " << is_Lecturer.t.username << endl;
					std::cout << "Account password: ";
					for (int i = 0; i < is_Lecturer.t.password.length(); i++) std::cout << "*";
					std::cout << endl;
				}
				else
				{
					gotoXY(45, 18);
					std::cout << "THE ALMIGHTY ADMIN" << endl;
				}
				std::system("pause");
				break;
			}
			continue;

			case '3':
			{
				while ((getchar()) != '\n');
				clrscr();
				if (is_Student.check ||is_Lecturer.check)
				{
					changepassword(is_Student, is_Lecturer, school, Principle);
					for (int i = 0; i < school.size(); i++)
						school[i].exportTxT();
					Lecturer_exportTxT(Principle);
					gotoxy(42, 38);
					std::cout << "You need to re-login to continue !" << endl;
					std::system("pause");
				}
				
				else {
					gotoXY(30, 18);
					std::cout << "THE ALMIGHTY ADMIN DOES NOT CHANGE PASSWORD!";
					gotoXY(38, 19);
					std::cout << "CHANGING PASSWORD IS FOR THE WEAK!";
					_getch();
					break;
				}
			}
			continue;

			case '4':
			{
				count++;
				count1 = 0;
				break;
			}
			continue;

			case '5':
			{
				exit(1);
				break;
			}
			continue;

			default:
				cout << "Invalid menu choice" << endl;
		}
	}
}







