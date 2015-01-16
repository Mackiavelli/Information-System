#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <ostream>
#include <string>

using namespace std;

class Student
{
public:
	Student(string, double, int);
	Student();

	void setAverage(double average);
	void setNumber(int number);

	string getName();

	friend ofstream& operator<<(ofstream& os, const Student& temp)
	{
		os << string(temp.name) << ' ' << temp.averageGrade << ' ' << temp.phoneNumber << endl;
		return os;
	}

private:
	char name[31];
	double averageGrade;
	int phoneNumber;
};
#endif // STUDENT_H
