#ifndef STUDENT_CPP
#define STUDENT_CPP

#include "Student.h"

Student::Student(string name, double average, int number)
{
	strcpy(this->name, name.c_str());
	this->averageGrade = average;
	this->phoneNumber = number;
}

void Student::setAverage(double average)
{
	this->averageGrade = average;
}

void Student::setNumber(int number)
{
	this->phoneNumber = number;
}

string Student::getName()
{
    return string(name);
}
#endif // STUDENT_CPP
