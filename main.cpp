#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
	try {
		Student obj;
		obj.SetAge(18);
		obj.SetAverage(11);
		obj.SetYear(3);
		obj.GetAge();
		obj.GetYear();

		obj.GetAverage();

		obj.Input();
		obj.Print();

	}
	catch (...)
	{
		cout << "Error\t";

	}
}