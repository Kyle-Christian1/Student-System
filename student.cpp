#include <iostream>
#include "student.h"

Student::Student()
{
	studentID_ = "A0";
	firstName_ = "Default";
	lastName_ = "Default";
	email_ = "Default@default.com";
	daysToComplete1_ = 60000000;
	daysToComplete2_ = 60000000;
	daysToComplete3_ = 60000000;
	age_ = -1;
	Degree = SECURITY;
}

Student::Student(string id, string firstName, string lastName, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, degreeTypes_ degree)
{
	studentID_ = id,
	firstName_ = firstName;
	lastName_ = lastName;
	email_ = email;
	daysToComplete1_ = daysInCourse1;
	daysToComplete2_ = daysInCourse2;
	daysToComplete3_ = daysInCourse3;
	age_ = age;
	Degree = SECURITY;
}

Student::~Student()
{

}

void Student::SetStudentID(string id) 
{
	studentID_ = id;
	return;
}

void Student::SetAge(int age)
{
	age_ = age;
	return;
}

void Student::SetFirstName(string firstName)
{

	firstName_ = firstName;	
	return;
}

void Student::SetLastName(string lastName)
{

	lastName_ = lastName;
	
	return;
}

void Student::SetDaysToComplete1(int daysLeft)
{
	daysToComplete1_ = daysLeft;
	return;
}

void Student::SetDaysToComplete2(int daysLeft)
{
	daysToComplete2_ = daysLeft;
	return;
}

void Student::SetDaysToComplete3(int daysLeft)
{
	daysToComplete3_ = daysLeft;
	return;
}

void Student::SetEmail(string email)
{
	email_ = email;
	return;
}

void Student::SetDegreeTypes(enum degreeTypes_ degree)
{
	Degree = degree;
	return;
}

string Student::GetStudentID()
{
	return studentID_;
}

int Student::GetAge()
{
	return age_;
}

string Student::GetFirstName()
{
	return firstName_;
}

string Student::GetLastName()
{
	return lastName_;
}

int Student::GetDaysToComplete1()
{
	return daysToComplete1_;
}

int Student::GetDaysToComplete2()
{
	return daysToComplete2_;
}

int Student::GetDaysToComplete3()
{
	return daysToComplete3_;
}

string Student::GetEmail()
{
	return email_;
}

degreeTypes_ Student::GetDegreeTypes()
{
	return Degree;
}

string Student::Xform(degreeTypes_ Degree)
{
	if (Degree == 0)
		return "SECURITY";
	if (Degree == 1)
		return "NETWORKING";
	if (Degree == 2)
		return "SOFTWARE";
}


void Student::print() 
{
	cout << GetStudentID() << "\t" << "First Name: "
		<< GetFirstName() << "\t"
		<< "Last Name: " << GetLastName() << "\t" << "Age: "
		<< "\t" << GetAge() << "\t" << "daysInCourse: {"
		<< GetDaysToComplete1() << ","
		<< GetDaysToComplete2() << ","
		<< GetDaysToComplete3() << "}\t"
		<< "Degree Program: " << Xform(GetDegreeTypes()) << '\t' << endl;
	return;
}

void Student::getDegreeProgram()
{
	return;
}