#include <iostream>
#include <string.h>
#include "Student.cpp"
#include"Node.cpp"
#include"List.cpp"
using namespace std;
Student * print()
{
	Student * pstu = new Student();
	int id = 0, age = 0,  mark1 = 0, mark2 = 0, mark3 = 0, sum = 0;
	string fisrtName , lastName , department;
	
	float gpa = 0.0f;
	cout << "Enter the ID of student : " << endl;
	cin >> id;
	pstu->setID(id);
	cout << "Enter the name of student : " << endl;
	cin >> fisrtName >> lastName;
	pstu->setName(fisrtName, lastName);
	cout << "Enter the age of student : " << endl;
	cin >> age;
	pstu->setAge(age);
	cout << "Enter the department of student : " << endl;
	cin >> department;
	pstu->setDepartment(department);
	cout << "Enter the first degree of student : " << endl;
	cin >> mark1;
	pstu->setMark1(mark1);
	cout << "Enter the second degree of student : " << endl;
	cin >> mark2;
	pstu->setMark2(mark2);
	cout << "Enter the third degree of student : " << endl;
	cin >> mark3;
	pstu->setMark3(mark3);

	return pstu;

}
int main()
{
	List student;

	int x = 0;

	while (x != 6)
	{
		cout << "----------------------------------------\n";
		cout << "What do you want : " << endl;
		cout << "1) View list of students." << endl;
		cout << "2) Add a students." << endl;
		cout << "3) Delete a students." << endl;
		cout << "4) Sort by high GPA." << endl;
		cout << "5) Serach on a student." << endl;
		cout << "6) To exit." << endl;

		cin >> x;
		
		Student* stu;
		int pid = 0;
		switch (x)
		{
		case 1:
			student.display();
			break;
		case 2:;
			stu = print();
			student.append(stu);
			break;
		case 3:

			cout << "Enter the id to be deleted please : " << endl;
			cin >> pid;
			student.removstu(pid);
			
			break;
		case 4:
			student.sortStu();
			break;
		case 5:

			cout << "Enter the id to be searched please : " << endl;
			cin >> pid;
			if (student.isFound(pid))
			{
				cout << "The student is found." << endl;
			}
			else
			{
				cout << "The student is not found." << endl;
			}
			break;
		default:
			break;
		}


	}

}