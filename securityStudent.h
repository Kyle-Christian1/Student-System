#pragma once
#include "student.h"

class SecurityStudent : public Student
{
public:
	SecurityStudent();
	SecurityStudent(string, string, string, string, int, int, int, int, degreeTypes_);
	void getDegreeProgram();

private:

	degreeTypes_ Degree = SECURITY;
};