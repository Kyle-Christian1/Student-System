#pragma once

#include <iostream>
#include "student.h"
#include <vector>

class Roster
{
public:
	vector<Student*> students;
	string studentID_;
	string firstName_;
	string lastName_;
	string email_;
	int age_;
	int daysInCourse1_;
	int daysInCourse2_;
	int daysInCourse3_;
	int degreeProgram_;

	Roster();

	Roster(string studentID, string firstName, string lastName, 
		string emailAddress, int age, int daysInCourse1, 
		int daysInCourse2, int daysInCourse3, degreeTypes_ degreeProgram);
	
	void add(string studentID, string firstName, string lastName,
		string emailAddress, int age, int daysInCourse1,
		int daysInCourse2, int daysInCourse3, degreeTypes_ degreeProgram)
	{
		
			
		studentID_ = studentID;
		firstName_ = firstName;
		lastName_ = lastName;
		email_ = emailAddress;
		age_ = age;
		daysInCourse1_ = daysInCourse1;
		daysInCourse2_ = daysInCourse2;
		daysInCourse3_ = daysInCourse3;
		degreeProgram_ = degreeProgram;


	}

	void remove(vector<Student*> s, string pos)
	{
		int numPos = NULL;
		if (pos == "A1")
			numPos = 0;
		else if (pos == "A2")
			numPos = 1;
		else if (pos == "A3")
			numPos = 2;
		else if (pos == "A4")
			numPos = 3;
		else if (pos == "A5")
			numPos = 4;
		{
			if (s[numPos]->GetStudentID() != pos)
				cout << "This item does not exist.";
			else
			{
				cout << "Removed item " << s[numPos]->GetStudentID() << "." << endl;
				delete s[numPos];
			}

		}
		
	}

	void printAll(vector<Student*> student)
	{
		
		for (int i = 0; i < student.size(); i++)
		{
			(*student.at(i)).print();
		}
	
	}

	void printDaysInCourse()
	{
		int avgDays = daysInCourse1_ + daysInCourse2_ + daysInCourse3_;
		cout << "The average days spent in a course were " << avgDays << endl;
	}

	bool isWhite(string email)
	{
		for (int i = 0; i < email.size(); ++i)
		{
			if (email.find_first_of(' '))
				return true;
		}
	}

	void printInvalidEmails(vector<Student*> s)
	{
		
		for (int i = 0; i < s.size(); i++)
		{
			size_t found = s[i]->GetEmail().find('@');
			size_t found1 = s[i]->GetEmail().find('.');
			size_t found2 = s[i]->GetEmail().find(" ");

			bool isValid = NULL;

			if(found && found1)
			{
				isValid = true;
			}

			if (found2)
				isValid = false;

			if (isValid == true)
			{
				cout << s[i]->GetEmail() << " is valid. \n";
			}
			else
				cout << s[i]->GetEmail() << " is INVALID. \n";
		}
	}

	void printByDegreeProgram(vector<Student*> s, degreeTypes_ degree)
	{

		for(int i = 0; i < s.size(); i++)
		{
			if (s[i]->GetDegreeTypes() == degree)
				s[i]->print();
				
		}
			

	}

	void printAverageDaysInCourse(vector<Student*> s, string courseID)
	{
		const int NUMOFCLASS = 3;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i]->GetStudentID() == courseID)
			{
				int avgDays = (s[i]->GetDaysToComplete1() + s[i]->GetDaysToComplete2() + s[i]->GetDaysToComplete3()) / NUMOFCLASS;
				cout << "The average days student A3 spent on a class were " << avgDays
					 << "." << endl;
			}
		}
	}

	~Roster();
private:

	



};