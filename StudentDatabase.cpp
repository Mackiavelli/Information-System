#ifndef STUDENTDATABASE_CPP
#define STUDENTDATABASE_CPP

#include "StudentDatabase.h"

void StudentDatabase::readFromFile()
{
	ifstream in("testing.txt", ios::binary);

	while (in.good())
	{
		Student temp;
		in.read((char*)&temp, sizeof(Student));
		database.insert(std::make_pair(temp.getName(), temp));
	}
	in.close();
}

Student StudentDatabase::findAverageGradeByName(string name)
{
	database.find(name);
}

bool StudentDatabase::addStudent()
{
	string name;
	double average;
	int number;

	cout << "Enter student name: ";
	cin >> name;
	cout << "Enter average greade: ";
	cin >> average;
	cout << "Enter number: ";
	cin >> number;

	Student temp(name, average, number);
	database.insert(std::make_pair(name, temp));

}

bool StudentDatabase::updateAverageGradeByName()
{
	cout << "Name to search for: ";
	string name;

	cin >> name;

	cout << "New average grade: ";

	double average;

	cin >> average;

	(*database.find(name)).second.setAverage(average);
}

bool StudentDatabase::updateNumberByName()
{
	cout << "Name to search for: ";
	string name;
	cin >> name;
	cout << "New number: ";
	int number;
	cin >> number;
	(*database.find(name)).second.setNumber(number);
}

bool StudentDatabase::deleteStudent()
{
	cout << "Enter the name of the student to be deleted: ";
	string name;
	cin >> name;
	database.erase(database.find(name));
}

bool StudentDatabase::saveDatabase()
{
	ofstream out("database.txt",  ios::trunc);

	btree::btree_map<string, Student>::iterator it = database.begin();

	while (it != database.end())
	{
		out << (*it).second;
		it++;
	}

	out.close();
}
#endif // STUDENTDATABASE_CPP
