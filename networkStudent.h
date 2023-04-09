#pragma once
#include "student.h"

class NetworkStudent : public Student
{
public:
	NetworkStudent();
	NetworkStudent(string, string, string, string, int, int, int, int, degreeTypes_);
	void getDegreeProgram();


private:

	degreeTypes_ Degree = NETWORKING;


};