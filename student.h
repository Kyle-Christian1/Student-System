#pragma once
#include "degree.h"
#include <string>
using namespace std;


class Student
{
public:

	void SetStudentID(string id);
	void SetFirstName(string firstName);
	void SetLastName(string lastName);
	void SetEmail(string email);
	void SetAge(int age);

	void SetDaysToComplete1(int daysLeft);
	void SetDaysToComplete2(int daysLeft);
	void SetDaysToComplete3(int daysLeft);

	void SetDegreeTypes(enum degreeTypes_);

	string GetStudentID();
	string GetFirstName();
	string GetLastName();
	string GetEmail();
	int GetAge();

	int GetDaysToComplete1();
	int GetDaysToComplete2();
	int GetDaysToComplete3();

	degreeTypes_ GetDegreeTypes();
	string Xform(degreeTypes_);

	virtual void print();
	virtual void getDegreeProgram();

	Student();
	Student(string, string, string, string, int, int, int, int, degreeTypes_);
	~Student();

	
private:

	string studentID_;
	string firstName_;
	string lastName_;
	string email_;
	int age_;
	int daysToComplete[3];
	int daysToComplete1_;
	int daysToComplete2_;
	int daysToComplete3_;
	degreeTypes_ Degree;

};

