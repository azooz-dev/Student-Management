#include<iostream>
#include"Student.cpp"
using namespace std;
class Node
{
	public :
		Student* stu;
		Node* next;


		Node(Student* pstu)
		{
			this->stu = pstu;
			next = NULL;
		}
		

};