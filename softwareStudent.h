#pragma once

#include "student.h"

class SoftwareStudent : public Student
{
public:
	SoftwareStudent();
	SoftwareStudent(string, string, string, string, int, int, int, int, degreeTypes_);
	void getDegreeProgram();

private:

	degreeTypes_ Degree = SOFTWARE;
};