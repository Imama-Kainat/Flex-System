//     admin password     1000
#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
using namespace std;

//represents a teacher and contains various attributes
// such as first name, last name, department, password, username, registration date, gender,
//  contact number, qualification, address, and salary.
class  A
{
public:
	string First_Name;
	string Last_Name;
	string Department;
	int  Password;
	string Username;
	string Registeration_Date;							//////    TEACHER		///////
	string Gender;
	double Contact_No;
	string Qualification;
	string Address;
	double salary;

};
//represents a student and contains attributes such as
// first name, last name, department, registration date, gender, contact number, blood group, address,
//  fee status, qualifications, password, username, marks, grades, and attendance
class B
{
public:
	B() {}
	string first_name;
	string last_name;
	string deprt;
	string reg_date;
	string gender;
	int    contact_no;								///////		STUDENT		///////
	string Blood_group;
	string address;
	string Fee_status;
	string qualifics;
	int    pass;
	string us_name;

	double MARKS[10];
	string GRDES[10];
	char  ATTENDENCE[10];
	int m = 0;
	int a = 0;
	int g = 0;
};
//inherits from both the A and B classes and includes additional attributes and methods specific to the administrator.
// It has attributes such as no_of_teacher and no_of_student to keep track of the number of teachers 
//and students, respectively. It also has a method AD_log_in() to log in as an administrator and 
//addteacher() and addstudent() methods to add new teachers and students,
// also methods for saving and loading data from files.
class Administrator :public A, public B
{
public:
	A* teacher;
	B* student;
	int no_of_teacher;
	int no_of_student;
	string ad_username;
	int ad_pass;
	Administrator()
	{
		student = nullptr;
		teacher = nullptr;
		no_of_teacher = 0;
		no_of_student = 0;

	}

	~Administrator()
	{
		delete[]teacher;
		delete[]student;

	}
	void AD_log_in()
	{
		system("cls");

		cout << "ADMIN SECTION LOG IN" << endl << endl;
		cout << " Enter Your username  :  ";
		cin >> ad_username; //   admin user name   AD + 100
		cout << " Enter your Password  :  ";
		cin >> ad_pass; //     admin password     1000
		if (ad_pass >= 1000 && ad_pass < 2000)
		{
			cout << " WELCOME " << endl << endl;
		}
		else {
			cout << " Incorrect username or password " << endl;
			cout << " Enter Your username  :  ";
			cin >> ad_username;
			cout << " Enter your Password  :  ";
			cin >> ad_pass;
		}

		system("cls");


	}

	void addteacher()
	{
		system("cls");
		cout << "ADD TEACHER " << endl << endl;
		A* newarray = new A[no_of_teacher + 1];
		for (int i = 0; i < no_of_teacher; i++)
		{
			newarray[i] = teacher[i];
		}

		delete[]teacher;
		teacher = newarray;
		no_of_teacher++;

		/////    one teacher is added //////
		cout << " Enter the data for the new teacher" << endl;
		cout << "First Name	 :	";
		cin.ignore(); getline(cin, teacher[no_of_teacher - 1].First_Name);
		cout << "Last Name  :  ";
		cin.ignore(); getline(cin, teacher[no_of_teacher - 1].Last_Name);
		cout << "Department Name :  " << endl;
		cout << "1.Computer Science " << endl;
		cout << "2.Electrical Enginnering " << endl;
		cout << "3.Software Enginnering " << endl;
		cout << "4.Buissness " << endl;
		cout << "5.Social Science " << endl;
		int choice = 0;
		cout << " Enter your department No   :  ";
		cin >> choice;
		if (choice == 1)
		{
			teacher[no_of_teacher - 1].Department = "Computer Science";
		}
		if (choice == 2)
		{
			teacher[no_of_teacher - 1].Department = "Electrical Enginnering";
		}
		if (choice == 3)
		{
			teacher[no_of_teacher - 1].Department = "Software Enginnering";
		}
		if (choice == 4)
		{
			teacher[no_of_teacher - 1].Department = "Buissness";
		}
		if (choice == 5)
		{
			teacher[no_of_teacher - 1].Department = "Social Science";
		}
		teacher[no_of_teacher - 1].Password = 2000 + no_of_teacher;       ///////// passs word   is set to  2000 + no of teacher //////

		teacher[no_of_teacher - 1].Username = "T" + (200 + no_of_teacher);  //// username is set to 200 + T ////
		teacher[no_of_teacher - 1].salary = 100000;
		cout << "Registration date  : ";
		cin.ignore(); getline(cin, teacher[no_of_teacher - 1].Registeration_Date);
		cout << "Conatct No  :  ";
		cin >> teacher[no_of_teacher - 1].Contact_No;
		cout << "Gender  :  ";
		cin.ignore(); getline(cin, teacher[no_of_teacher - 1].Gender);
		cout << "Address  :  ";
		cin.ignore(); getline(cin, teacher[no_of_teacher - 1].Address);
		cout << "Qualifications : ";
		cin.ignore(); getline(cin, teacher[no_of_teacher - 1].Qualification);



		system("cls");
	}



	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	void addstudent()
	{
		system("cls");
		cout << "ADD STUDENT " << endl << endl;
		B* array = new B[no_of_student + 1];
		for (int i = 0; i < no_of_student; i++)
		{
			array[i] = student[i];
		}

		delete[]student;
		student = array;
		no_of_student++;

		////////// one student is added /////////
		cout << " Enter the data for the new teacher  " << endl;
		cout << "First Name  :  ";
		cin.ignore();
		getline(cin, student[no_of_student - 1].first_name);
		cout << "Last name  :  ";
		cin.ignore(); getline(cin, student[no_of_student - 1].last_name);
		cout << "Department Name :  " << endl;
		cout << "1.Computer Science " << endl;
		cout << "2.Electrical Enginnering " << endl;
		cout << "3.Software Enginnering " << endl;
		cout << "4.Buissness " << endl;
		cout << "5.Social Science " << endl;
		int choice = 0;
		cout << " Enter your department No   :  ";
		cin >> choice;
		if (choice == 1)
		{
			student[no_of_student - 1].deprt = "Computer Science";
		}
		if (choice == 2)
		{
			student[no_of_student - 1].deprt = "Electrical Enginnering";
		}
		if (choice == 3)
		{
			student[no_of_student - 1].deprt = "Software Enginnering";
		}
		if (choice == 4)
		{
			student[no_of_student - 1].deprt = "Buissness";
		}
		if (choice == 5)
		{
			student[no_of_student - 1].deprt = "Social Science";
		}



		cout << "Registration date  : ";
		cin.ignore(); getline(cin, student[no_of_student - 1].reg_date);
		cout << "Gender  :  ";
		cin.ignore(); getline(cin, student[no_of_student - 1].gender);
		cout << "Address  :  ";
		cin.ignore(); getline(cin, student[no_of_student - 1].address);
		cout << "Qualifications : ";
		cin.ignore(); getline(cin, student[no_of_student - 1].qualifics);
		cout << "Blood Group  :  ";
		cin.ignore(); getline(cin, student[no_of_student - 1].Blood_group);
		cout << "Fee status  :  ";
		cin.ignore(); getline(cin, student[no_of_student - 1].Fee_status);
		cout << "Conatct No  :  ";
		cin >> student[no_of_student - 1].contact_no;

		for (int j = 0; j < 10; j++)
		{
			student[no_of_student - 1].MARKS[j] = 0;
		}
		for (int j = 0; j < 10; j++)
		{
			student[no_of_student - 1].GRDES[j] = "";
		}
		for (int j = 0; j < 10; j++)
		{
			student[no_of_student - 1].ATTENDENCE[j] = 'X';
		}

		student[no_of_student - 1].pass = 3000 + no_of_student;       ///////// passs word   is set to  3000 + no of student //////

		student[no_of_student - 1].us_name = "22F" + (300 + no_of_student);  //// username is set to 300 + 22F ////

		system("cls");




	}

	/// ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	void save_teacher()
	{

		ofstream outfile("teacher.txt");
		for (int i = 0; i < no_of_teacher; i++)
		{
			outfile << teacher[i].First_Name << " " << teacher[i].Last_Name << " " << teacher[i].Department << " " << teacher[i].Password << " " << teacher[i].Username << " " <<
				teacher[i].Registeration_Date << " " << teacher[i].Gender << " " << teacher[i].Contact_No << " " << teacher[i].Qualification << " " <<
				teacher[i].Address << " " << teacher[i].salary << endl;

		}
		outfile.close();



	}

	void add_teacher_object()
	{
		A* newarr = new A[no_of_teacher + 1];
		for (int i = 0; i < no_of_teacher; i++)
		{
			newarr[i] = teacher[i];
		}
		delete[] teacher;
		teacher = newarr;
		no_of_teacher++;

		teacher[no_of_teacher - 1].Address = "";
		teacher[no_of_teacher - 1].Contact_No = 0;
		teacher[no_of_teacher - 1].Department = "";
		teacher[no_of_teacher - 1].First_Name = "";
		teacher[no_of_teacher - 1].Gender = "";
		teacher[no_of_teacher - 1].Last_Name = "";
		teacher[no_of_teacher - 1].Password = 0;
		teacher[no_of_teacher - 1].Qualification = "";
		teacher[no_of_teacher - 1].Registeration_Date = "";
		teacher[no_of_teacher - 1].salary = 0;
		teacher[no_of_teacher - 1].Username = "";
	}
	/// ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	void load_teacher()
	{
		ifstream infile("teacher.txt");
		if (!infile)
		{
			cout << "File not found" << endl;
			return;
		}
		int count = 0;
		while (true)
		{
			string First_Name;
			string Last_Name;
			string Department;
			int  Password;
			string Username;
			string Registeration_Date;							//////    TEACHER		///////
			string Gender;
			double Contact_No;
			string Qualification;
			string Address;
			double salary;

			infile >> First_Name >> Last_Name >> Department >> Password >> Username >> Registeration_Date >> Gender >> Contact_No >> Qualification >> Address >> salary;

			if (infile.eof())
			{
				break;
			}
			if (count == no_of_teacher)
			{
				add_teacher_object();
			}
			teacher[count].First_Name = First_Name;
			teacher[count].Last_Name = Last_Name;
			teacher[count].Department = Department;
			teacher[count].Password = Password;
			teacher[count].Username = Username;
			teacher[count].Registeration_Date = Registeration_Date;
			teacher[count].Gender = Gender;
			teacher[count].Contact_No = Contact_No;
			teacher[count].Qualification = Qualification;
			teacher[count].Address = Address;
			teacher[count].salary = salary;
			count++;
		}

		cout << "  DATA LOADED " << endl;
		infile.close();

	}

	/// <summary>
	/// ////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// </summary>


	void save_student()
	{
		ofstream outfile("student.txt");
		for (int i = 0; i < no_of_student; i++)
		{
			outfile << student[i].first_name << " " << student[i].last_name << " " << student[i].deprt << " " << student[i].reg_date << " " << student[i].gender << " " <<
				student[i].contact_no << " " << student[i].Blood_group << " " << student[i].address << " " << student[i].Fee_status << " " << student[i].qualifics << " " <<
				student[i].pass << " " << student[i].us_name << " ";
			for (int j = 0; j < 10; j++)
			{
				outfile << student[i].MARKS[j] << " ";
			}
			for (int j = 0; j < 10; j++)
			{
				outfile << student[i].GRDES[j] << " ";
			}
			for (int j = 0; j < 10; j++)
			{
				outfile << student[i].ATTENDENCE[j] << " ";
			}
			outfile << endl;

		}
		outfile.close();



	}


	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	void add_student_object()
	{
		B* newarr = new B[no_of_student + 1];
		for (int i = 0; i < no_of_student; i++)
		{
			newarr[i] = student[i];
		}
		delete[]student;
		student = newarr;
		no_of_student++;


		student[no_of_student - 1].first_name = "";
		student[no_of_student - 1].last_name = "";
		student[no_of_student - 1].deprt = "";
		student[no_of_student - 1].reg_date = "";
		student[no_of_student - 1].gender = "";
		student[no_of_student - 1].contact_no = 0;
		student[no_of_student - 1].Blood_group = "";
		student[no_of_student - 1].address = "";
		student[no_of_student - 1].Fee_status = "";
		student[no_of_student - 1].qualifics = "";
		student[no_of_student - 1].pass = 0;
		student[no_of_student - 1].us_name = "";
		for (int i = 0; i < 10; i++)
		{
			student[no_of_student - 1].MARKS[i] = 0;
		}
		for (int i = 0; i < 10; i++)
		{
			student[no_of_student - 1].GRDES[i] = "";
		}
		for (int i = 0; i < 10; i++)
		{
			student[no_of_student - 1].ATTENDENCE[i] = 'X';
		}


	}

	void load_student()
	{
		ifstream infile("student.txt");
		if (!infile)
		{
			cout << "File not found " << endl;
			return;
		}
		int temp = 0;
		while (true)
		{

			string first_name;
			string last_name;
			string deprt;
			string reg_date;
			string gender;
			double contact_no;								///////		STUDENT		///////
			string Blood_group;
			string address;
			string Fee_status;
			string qualifics;
			int pass;
			string us_name;

			double MARKS[10];
			string GRDES[10];
			char  ATTENDENCE[10];

			infile >> first_name >> last_name >> deprt >> reg_date >> gender >> contact_no >> Blood_group >> address >> Fee_status >> pass >> us_name;
			for (int j = 0; j < 10; j++)
			{
				infile >> MARKS[j];
			}
			for (int j = 0; j < 10; j++)
			{
				infile >> GRDES[j];
			}
			for (int j = 0; j < 10; j++)
			{
				infile >> ATTENDENCE[j];
			}
			if (infile.eof())
			{
				break;
			}
			if (temp == no_of_student)
			{add_student_object();
			}
			student[temp].first_name = first_name;
			student[temp].last_name = last_name;
			student[temp].deprt = deprt;
			student[temp].reg_date = reg_date;
			student[temp].gender = gender;
			student[temp].contact_no = contact_no;
			student[temp].Blood_group = Blood_group;
			student[temp].address = address;
			student[temp].Fee_status = Fee_status;
			student[temp].qualifics = qualifics;
			student[temp].pass = pass;
			student[temp].us_name = us_name;
			for (int j = 0; j < 100; j++)
			{
				student[temp].MARKS[j] = MARKS[j];
			}
			for (int j = 0; j < 100; j++)
			{
				student[temp].GRDES[j] = GRDES[j];
			}
			for (int j = 0; j < 100; j++)
			{
				student[temp].ATTENDENCE[j] = ATTENDENCE[j];
			}
			temp++;
		}


		cout << "STUDENT DATA LOADED " << endl;
		infile.close();



	}


	///////////////////////////////////////////////////////////////////////////////////////////////////
	void edit_student()
	{
		system("cls");
		cout << " EDIT STUDENT DETAILS" << endl << endl;
		int id;
		string user;
		cout << " Enter the  id of the sudent  :  ";
		cin >> id;
		for (int i = 0; i < no_of_student; i++)
		{
			if (student[i].pass == id)
			{
				cout << "Edit your details  " << endl;
				cout << "First Name  :  ";
				cin >> student[i].first_name;
				cout << "Last Name  :  ";
				cin >> student[i].first_name;
				cout << "Fee Status  :  ";
				cin >> student[i].Fee_status;
				cout << " Address  :  ";
				cin >> student[i].address;
				cout << " Conatac tNumber  :  ";
				cin >> student[i].contact_no;
			}
			else
				cout << " Student with ID : " << id << " not found " << endl;
		}


		system("cls");

	}


	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	void edit_teacher()
	{
		system("cls");
		cout << " EDIT TEACHER DETAILS " << endl << endl;
		int id;
		cout << "Enter the id of the teacher  :  ";
		cin >> id;
		for (int i = 0; i < no_of_teacher; i++)
		{
			if (teacher[i].Password == id)
			{
				cout << "Eddit your details " << endl;
				cout << "Addreess  :  ";
				cin >> teacher[i].Address;
				cout << "Contact Number  :  ";
				cin >> teacher[i].Contact_No;
				cout << "Salary  :  ";
				cin >> teacher[i].salary;
			}
		}

		system("cls");
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	void view_all_teachers()
	{
		system("cls");
		cout << " ALL TEACHERS DATA" << endl << endl;
		for (int i = 0; i < no_of_teacher; i++)
		{
			cout << "Name  :  " << teacher[i].First_Name << " " << teacher[i].Last_Name << endl;
			cout << "Gender  :  " << teacher[i].Gender << endl;
			cout << "Qualifications  :  " << teacher[i].Qualification << endl;
			cout << "Contact No  :  " << teacher[i].Contact_No << endl;
			cout << "User Name  :  " << teacher[i].Password << endl;
			cout << endl << endl;
		}



	}

	void view_all_students()
	{
		system("cls");
		cout << " ALL STUDENTS DATA" << endl << endl;
		for (int i = 0; i < no_of_student; i++)
		{
			cout << "Name  :   " << student[i].first_name << " " << student[i].last_name << endl;
			cout << "Department  :  " << student[i].deprt << endl;
			cout << "Student id  :  " << student[i].pass << endl;
			cout << endl << endl;
		}
	}




};




class Teacher : public Administrator
{
public:
	void T_log_in()
	{
		system("cls");

		cout << " TEACHER SECTION LOG IN " << endl << endl;

		string us;
		int ps;
		cout << "Enter the user name  : ";
		cin >> us;
		cout << "Enter the pass : ";
		cin >> ps;
		for (int i = 0; i < no_of_teacher; i++)
		{
			if (student[i].pass == ps)
			{
				cout << teacher[i].First_Name << " " << teacher[i].Last_Name << endl << endl;
			}
			else
			{
				while (teacher[i].Password == ps)
				{
					cout << " Incoorect username or password" << endl;
					cout << "Enter the user name  : ";
					cin >> us;
					cout << "Enter the pass : ";
					cin >> ps;
				}
			}
		}

		system("cls");


	}

	void Assign_marks()
	{
		system("cls");
		cout << "ASSIGN MARKS " << endl << endl;
		int id;
		cout << " Enter the id of the student to Assign marks " << endl;
		cin >> id;
		for (int i = 0; i < no_of_student; i++)
		{
			if (student[i].pass = id)
			{
				cout << "Enter the marks   :  ";
				cin >> student[i].MARKS[m];
				m++;
			}
		}
		system("cls");
	}

	void Assign_grades()
	{
		system("cls");
		cout << "ASSIGN GRADES " << endl << endl;
		int id;
		cout << " Enter the id of the student to Assign Grades " << endl;
		cin >> id;
		for (int i = 0; i < no_of_student; i++)
		{
			if (student[i].pass = id)
			{
				cout << "Enter the Grade   :  ";
				cin >> student[i].GRDES[g];
				g++;
			}
		}
		cout << " DATA updated" << endl;
		system("cls");
	}

	void Asssign_attendece()
	{
		system("cls");
		cout << "ASSIGN ATTENDENCE " << endl << endl;
		int id;
		cout << " Enter the id of the student to Mark Attendece " << endl;
		cin >> id;
		for (int i = 0; i < no_of_student; i++)
		{
			if (student[i].pass = id)
			{
				cout << " Just mark as P , A or L " << endl;
				cout << "Mark Attendence   :  ";
				cin >> student[i].ATTENDENCE[a];
				a++;
			}
		}
		system("cls");
	}


	void Time_table()
	{
		system("cls");
		cout << "TIME TABLE " << endl << endl;
		cout << "\t\t\t<----------TIME TABLE---------->\t\t\t" << endl;
		cout << "Monday\t\tTuesday\t\tWednesday\tThursday\tFriday" << endl;
		cout << "9:00-10:00am\tMaths\t\tEnglish\t\tMaths\t\tScience" << endl;    //Printing Time Table
		cout << "10:00-11:00am\tScience\t\tMaths\t\tEnglish\t\tMaths" << endl;
		cout << "11:00-11:15am\tBreak\t\tBreak\t\tBreak\t\tBreak" << endl;
		cout << "11:15-12:15pm\tEnglish\t\tScience\t\tMaths\t\tEnglish" << endl;
		cout << "12:15-1:15pm\tSocial Studies\tScience\t\tScience\t\tSocial Studies" << endl;

		cout << endl << endl;

	}

};


class Student : virtual public Teacher
{
public:
	string u;
	int p;
	void ST_log_in()
	{
		system("cls");

		cout << " Student Section LOG IN" << endl << endl;

		cout << "Enter the user name  : ";
		cin >> u;
		cout << "Enter the pass : ";
		cin >> p;
		for (int i = 0; i < no_of_student; i++)
		{
			if (student[i].pass == p)
			{
				cout << student[i].first_name << " " << student[i].last_name << endl << endl;
			}
			else
			{
				while (student[i].pass == p)
				{
					cout << " Incoorect username or password" << endl;
					cout << "Enter the user name  : ";
					cin >> u;
					cout << "Enter the pass : ";
					cin >> p;
				}
			}
		}
		system("cls");

	}
	void  View_Attendece()
	{

		system("cls");
		cout << "SHOWING ATTENDENCE " << endl << endl;

		for (int i = 0; i < no_of_student; i++)
		{
			if (student[i].pass == p)
			{
				for (int j = 0; j < m; j++)
				{
					cout << "DAY  " << j + 1 << "      " << student[i].ATTENDENCE[j] << endl;
					break;
				}

			}


		}



	}
	void View_Marks()
	{
		system("cls");
		cout << "SHOWING MARKS " << endl << endl;
		for (int i = 0; i < no_of_student; i++)
		{
			if (student[i].pass == p)
			{
				for (int j = 0; j < m; j++)
				{
					cout << "Subject  " << j + 1 << "       " << student[i].MARKS[j] << endl;
				}
			}
		}

	}

	void View_grades()
	{
		system("cls");
		cout << " SHOWING GRADES" << endl << endl;
		for (int i = 0; i < no_of_student; i++)
		{
			if (student[i].pass == p)
			{
				for (int j = 0; j < m; j++)
				{
					cout << "COURSE  " << j + 1 << "     " << student[i].GRDES[j] << endl;
				}
			}
		}
		cout << endl << endl << endl;
	}

	void Fee_status()
	{
		system("cls");
		cout << " FEE STATUS" << endl << endl;
		for (int i = 0; i < no_of_student; i++)
		{
			if (student[i].pass == p)
			{
				cout << " NAME : " << student[i].first_name << " " << student[i].last_name << endl;
				cout << " ID  :  " << student[i].pass << endl;
				cout << "Fee status  :  " << student[i].Fee_status << endl;
			}
			cout << endl << endl;
		}
	}
};


int main()
{

	Student obj;

	obj.load_teacher();
	cout << "dead" << endl;

	int x;
	int ch1, ch2, ch3;
	while (1)
	{

		system("cls");
		     cout << "\t\t\t\t_________________________________________________ \n";
				cout << "\t\t\t\t|*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_|\n";
				cout << "\t\t\t\t|               FLEX FAST NUCES	              |\n";
				cout << "\t\t\t\t|*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_|\n";
				cout << "\t\t\t\t__________________________________________________\n";
		cout << "\t\t\t\t|Please enter your status " << endl;
		cout << "\t\t\t\t|1. Administrator" << endl;
		cout << "\t\t\t\t|2. Student	 " << endl;
		cout << "\t\t\t\t|3. Teacher  " << endl;
		cout << "\t\t\t\t|4. Exit" << endl;

		cout << endl << endl;
		cout << "choice  :  ";
		cin >> x;
		switch (x)
		{
		case 1:
			obj.AD_log_in();
			//......................................................................admin login
			while (1)
			{
				cout << "\t\t\t\t|Welcome to Administrator section                        |" << endl;
				cout << "\t\t\t\t|1.Add new student                                       |" << endl;
				cout << "\t\t\t\t|2.Add new Teacher                                       |" << endl;
				cout << "\t\t\t\t|3.View All Students                                     |" << endl;
				cout << "\t\t\t\t|4.View All Teachers                                     |" << endl;
				cout << "\t\t\t\t|5.Edit Students                                         |" << endl;
				cout << "\t\t\t\t|6.Edit Teachers                                         |" << endl;
				cout << "\t\t\t\t|7.Home Page " << endl;


				cout << endl << "Enter choice : ";
			

				cin >> ch1;


				if (ch1 == 1)
				{
					obj.addstudent();


				}
				if (ch1 == 2)
				{
					obj.addteacher();


				}
				if (ch1 == 3)
				{
					obj.view_all_students();
				}
				if (ch1 == 4)
				{
					obj.view_all_teachers();
				}
				if (ch1 == 5)
				{
					obj.edit_student();
				}
				if (ch1 == 6)
				{
					obj.edit_teacher();
				}				                  ///         Home		/////////
				if (ch1 == 7)
					break;

			}
			break;
		case 2:
			obj.ST_log_in();//...........................................student login
			while (1)
			{
				cout << "\t\t\t\t|Welocme To student section             |" << endl;
				cout << "\t\t\t\t|1.View Attendece                       |" << endl;
				cout << "\t\t\t\t|2.View Marks                           |" << endl;
				cout << "\t\t\t\t|3.View Grades                          |" << endl;
				cout << "\t\t\t\t|4.Fee Status                           |" << endl;
				cout << "\t\t\t\t|5.Home Page                            |" << endl << endl;
				cout << "\t\t\t\t|enter choice  :  ";

				cin >> ch2;
				if (ch2 == 1)
				{
					obj.View_Attendece();
				}
				if (ch2 == 2)
				{
					obj.View_Marks();
				}
				if (ch2 == 3)																
				{
					obj.View_grades();
				}

				if (ch2 == 4) {
					obj.Fee_status();
				}
				if (ch2 == 5)                    
					break;
			}
			break;
		case 3://.................................................................teacher login
			obj.T_log_in();
			while (1)
			{
				cout << "\t\t\t\t|Welcome to teacher section                   |" << endl;
				cout << "\t\t\t\t|1.Assign marks                               |" << endl;
				cout << "\t\t\t\t|2.Mark Attendnce                             |" << endl;
				cout << "\t\t\t\t|3.Assign Grades                              |" << endl;
				cout << "\t\t\t\t|4.Time Table                                 | " << endl;
				cout << "\t\t\t\t|5.Home Page                                  | " << endl << endl;
				cout << "\t\t\t\t|enter choice  :  ";

				cin >> ch3;
				if (ch3 == 1)
				{
					obj.Assign_marks();
				}
				if (ch3 == 2)													
				{
					obj.Asssign_attendece();
				}
				if (ch3 == 3)
				{
					obj.Assign_grades();
				}
				if (ch3 == 4)
				{
					obj.Time_table();
				}
				if (ch3 == 5)						
					break;
			}
			break;

		case 4:
			obj.save_student();
			obj.save_teacher();
			exit(0);																								  

		}
	}


}


 
			
