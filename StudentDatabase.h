#ifndef STUDENTDATABASE_H
#define STUDENTDATABASE_H

#include <fstream>
#include <iostream>
#include <string>
#include "Student.h"
#include "btree_map.h"

using namespace std;

class StudentDatabase
{
public:
	void readFromFile();
	Student findAverageGradeByName(string name);
	Student findNumberByName(int number);
	bool addStudent();
	bool updateAverageGradeByName();
	bool updateNumberByName();
	bool deleteStudent();
	bool saveDatabase();

private:
	btree::btree_map<string, Student> database;
};
#endif // STUDENTDATABASE_H
