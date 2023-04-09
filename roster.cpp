/* Kyle Christian */

#include <iostream>
#include <vector>
#include "securityStudent.h"
#include "networkStudent.h"
#include "roster.h"
#include "softwareStudent.h"
#include "degree.h"

void main()
{
	const int MAX = 5;
	cout << "C 867 Scripting and Programming, C++, Kchr134, Kyle Christian \n";	
	
	vector<Student*> classRosterArray;
	
	

	Student* newStudent = nullptr;
	Student* newStudent2 = nullptr;
	Student* newStudent3 = nullptr;
	Student* newStudent4 = nullptr;
	Student* newStudent5 = nullptr;

	newStudent = new SecurityStudent("A1", "John", "Smith", "John1989@gm ail.com", 20, 30, 35, 40, SECURITY);
	newStudent2 = new NetworkStudent("A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 19, 50, 30, 40, NETWORKING);
	newStudent3 = new SoftwareStudent("A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 19, 20, 40, 33, SOFTWARE);
	newStudent4 = new SecurityStudent("A4", "Erin", "Black", "Erin.black@comcast.net", 22, 50, 58, 40, SECURITY);
	newStudent5 = new SoftwareStudent("A5", "Kyle", "Christian", "kylec.thejourney@gmail.com", 29, 23, 45, 35, SOFTWARE);

	classRosterArray.push_back(newStudent);
	classRosterArray.push_back(newStudent2);
	classRosterArray.push_back(newStudent3);
	classRosterArray.push_back(newStudent4);
	classRosterArray.push_back(newStudent5);



	Roster classRoster;
	int pos = 2;

	classRoster.printAll(classRosterArray);
	cout << endl;

	classRoster.printInvalidEmails(classRosterArray);
	cout << endl;

	classRoster.printAverageDaysInCourse(classRosterArray, "A3");
	cout << endl;

	classRoster.printByDegreeProgram(classRosterArray, SECURITY);
	cout << endl;

	classRoster.remove(classRosterArray, "A3");
	
	

	//expected: the above line should print a message saying such a student with this ID was not found.
	
	delete[] &classRosterArray;

	return;
}

Roster::Roster()
{

	studentID_ = "";
	firstName_ = "";
	lastName_ = "";
	email_ = "";
	age_ = -1;
	daysInCourse1_ = -1;
	daysInCourse2_ = -1;
	daysInCourse3_ = -1;
	degreeProgram_ = -1;
}

Roster::Roster(string studentID, string firstName, string lastName, string emailAddress,
	int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, degreeTypes_ degreeProgram)
{
	studentID_ = studentID;
	firstName_ = firstName;
	lastName_ = lastName;
	email_ = emailAddress;
	daysInCourse1_ = daysInCourse1;
	daysInCourse2_ = daysInCourse2;
	daysInCourse3_ = daysInCourse3;
	degreeProgram_ = degreeProgram;

}

Roster::~Roster()
{
	delete &students;
}
