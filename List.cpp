#pragma once
#include"Node.h"
class List
{
private:
	Node* head;

	int size;

public:
	List()
	{
		head = NULL;
		this->size = 0;
	}

	int getSize()
	{
		return this->size;
	}
	bool isImpty()
	{
		return (head == NULL);
	}

	void append(Student* pstu)
	{
		Node* new_node = new Node(pstu);

		if (isImpty())
		{
			head = new_node;
		}
		else
		{
			Node* temp = this->head;
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = new_node;
		}
		this->size++;
	}

	void removstu(int pid)
	{
		Node* temp = head;
		Node* delptr = NULL;
		int flag = 0;

		while (temp != NULL)
		{
			if (temp->stu->getID() == pid)
			{
				if (delptr == NULL)
				{
					head = temp->next;
				}
				else
				{
					delptr->next = temp->next;
				}
				cout << "is deleted from list" << endl;
				flag = 1;
				free(temp);
				break;
			}
			delptr = temp;
			temp = temp->next;
		}
		if (flag == 0)
		{
			cout << "Student is not found !!" << endl;
		}
	}

	void display()
	{
		if (isImpty())
		{
			cout << "Sorry, the list is impty !!" << endl;
		}
		else
		{
			Node* temp = head;
			while (temp != NULL)
			{
				cout << "The ID of student : " << temp->stu->getID() << endl;
				cout << "The name of student : " << temp->stu->getfirstName() << " " << temp->stu->getlastName() << endl;
				cout << "The age of student : " << temp->stu->getAge() << endl;
				cout << "The department of student : " << temp->stu->getDepartment() << endl;
				cout << "The first degree of student : " << temp->stu->getMark1() << endl;
				cout << "The second degree of student : " << temp->stu->getMark2() << endl;
				cout << "The third degree of student : " << temp->stu->getMark3() << endl;
				cout << "The total score of student : " << temp->stu->getSum() << endl;
				cout << "The average score of student : " << temp->stu->getGPA() << endl;
				temp = temp->next;
				cout << "----------------------------------------------------------------\n";
			}
		}
	}

	bool isFound(int pid)
	{
		bool found = false;
		if (isImpty())
		{
			cout << "Soory, the list is impty !! \n";
		}
		else
		{
			Node* temp = head;

			while (temp != NULL)
			{
				if (temp->stu->getID() == pid)
				{
					found = true;
				}
				temp = temp->next;
			}

		}
		return found;
	}
	void sortStu()
	{
		if (isImpty())
		{
			cout << "Sorry, the list is impty !!" << endl;
		}
		else
		{

			Node* temp = this->head;
			Node* current = head->next;

			while (current != NULL)
			{
				if (temp->stu->getGPA() < current->stu->getGPA())
				{
					temp->next = current->next;
					current->next = head;

					head = current;
					current = temp;
				}
				else
				{
					temp = current;
				}
				current = current->next;
			}


		}
	}

};

