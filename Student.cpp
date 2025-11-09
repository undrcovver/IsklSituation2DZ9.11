#pragma once
#include <iostream>
#include <string>
using namespace std;


class Student
{
	string name;
	string surname;
	int age;
	double average;
	int year;//cours studing 1 up to 5
public:
	Student();
	Student(string n, string s, int a, double Av, int y);
	void Print();
	

	void SetName(string n);
	void SetSurname(string s);
	void SetAge(int a);
	void SetAverage(int Av);
	void SetYear(int y);
	int GetAge();
	double GetAverage();
	int GetYear();
	void Input();

};
Student::Student()
{
	age = 0;
	average = 0;
	year = 0;
}

Student::Student(string n, string s, int a, double Av, int y)
{
	name = n;
	surname = s;
	if (a < 17 || a > 65)
	{
		throw" Age exeption!!!";
	}
	age = a;
	if (Av < 0)
	{
		throw "Average exeption!!!";
	}
	average = Av;
	if (y < 1 || y > 5)
	{
		throw "Age exeption!!!";
	}
	year = y;




}

void Student::Print()
{
	cout << "Name: " << name << "\t"
		<< "Surame: " << surname << "\t"
		<< "Age: " << age << "\t"
		<< "Average: " << average << "\t"
		<< "Year: " << year << endl << endl;

}


inline void Student::SetName(string n)
{
	name = n;
}

inline void Student::SetSurname(string s)
{
	surname = s;
}

void Student::SetAge(int a)
{
	 if (a < 17 || a > 65)
	 {
		 throw "Age error!!!";
	 }
	 age = a;
}

 void Student::SetAverage(int Av)
{
	 if (Av < 0 || Av >12)
	 {
		 throw "Aveage errror!!!";
	 }
	 average = Av;
}

 void Student::SetYear(int y)
{
	if (y < 1 || y>5)
	{
		throw "Year error!!!";
	}
	year = y;
}

 int Student::GetAge()
 {
	 return age;
 }

 double Student::GetAverage()
 {
	 return average;
 }

 inline int Student::GetYear()
 {
	 return year;
 }

 inline void Student::Input()
 {
	 cout << "Enter name:";
	 cin >> name;
	 cout << "Enter surname:";
	 cin >> surname;
	 cout << "Enter age:";
	 int a;
	 cin >> a;
	 if (a < 17 || a > 65)
	 {
		 throw "Age error!!!";
	 }
	 age = a;

	 cout << "Enter average:";
	 int Av;
	 cin >> Av;
	 if (Av < 0 || Av > 12)
	 {
		 throw "Average error!!!";
	 }
	 average = Av;

	 cout << "Enter year:";
	 int y;
	 cin >> y;
	 if (y < 1 || y > 5)
	 {
		 throw "Year error!!!";
	 }
	 year = y;
 }
