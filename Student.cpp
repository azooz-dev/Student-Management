#include <iostream>
using namespace std; 
class Student 
{

private:
	int id;
	string firstName, lastName;
	int age;
	string department;
	int mark1 = 0, mark2 = 0, mark3 = 0, sum = 0;
	float gpa;



public:

	int getID()
	{
		return this->id;
	}


	string getfirstName()
	{
		return this->firstName;
	}
	string getlastName()
	{
		return this->lastName;
	}
	int getAge()
	{
		return this->age;
	}
	string getDepartment()
	{
		return this->department;
	}
	int getMark1()
	{
		return this->mark1;
	}
	int getMark2()
	{
		return this->mark2;
	}
	int getMark3()
	{
		return this->mark3;
	}
	int getSum()
	{
		this->sum = this->mark1 + this->mark2 + this->mark3;
		return this->sum;
	}
	float getGPA()
	{
		this->gpa = this->sum / static_cast<float>(3);
		return this->gpa;
	}

	void setID(int pid)
	{
		this->id = pid;
	}

	void setName(string pfirstName, string plastName)
	{
		this->firstName = pfirstName;
		this->lastName = plastName;
	}

	void setAge(int page)
	{
		this->age = page;
	}
	void setDepartment(string pdepartment)
	{
		this->department = pdepartment;
	}
	void setMark1(int pmark1)
	{
		this->mark1 = pmark1;
	}
	void setMark2(int pmark2)
	{
		this->mark2 = pmark2;
	}
	void setMark3(int pmark3)
	{
		this->mark3 = pmark3;
	}

};