#include "softwareStudent.h"

SoftwareStudent::SoftwareStudent()
{

}


SoftwareStudent::SoftwareStudent(string id, string firstName, string lastName,
	string email, int age, int daysToComplete1, int daysToComplete2,
	int daysToComplete3, degreeTypes_ degree)
{
	SetStudentID(id);
	SetFirstName(firstName);
	SetLastName(lastName);
	SetEmail(email);
	SetDaysToComplete1(daysToComplete1);
	SetDaysToComplete2(daysToComplete2);
	SetDaysToComplete3(daysToComplete3);
	SetAge(age);
	SetDegreeTypes(degree);
}

void SoftwareStudent::getDegreeProgram()
{

}