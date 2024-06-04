#include<iostream>
#include"Student.h"
using namespace std;
class Node
{
public:
	Student* stu;
	Node* next;


	
	Node(Student* pstu)
	{
		this->stu = pstu;
		this->next = NULL;
	}


};