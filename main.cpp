#include <iostream>
#include "StudentDatabase.h"

using namespace std;

int main()
{
    Student st("ivan", 3.30, 760);
	StudentDatabase sd;
	sd.readFromFile();
	sd.addStudent();
	sd.saveDatabase();
}
