/* 
	Name:		Mark mccleane 
	StNo:		c00191900
	Due Date:	13/12/2017 @ 17:00
	Purpose :	To create an implementation of a linked list
*/

#include <iostream>
using namespace std;

class Node
{
public:
	SimpleString *data;
	Node *next;
	//Create a SimpleString pointed to by data.
	//next set to n
	Node(const SimpleString &d, Node *n = 0);
	~Node();
};

class SimpleString
{
public:
	int numofCharacters;
	char  *characters;
	//create memory for characters and copy the str array 
	SimpleString(int t_numofCharacters, char str[]) :numofCharacters(t_numofCharacters) {

		characters = new char[numofCharacters];
		for (int i = 0; i<numofCharacters - 1; i++)
		{
			characters[i] = str[i];
		}
		characters[numofCharacters - 1] = 0;
	}
	SimpleString() {
		numofCharacters = 0;
		characters = null;
	}
	~SimpleString();
	bool isEqual(const SimpleString &d);
};

class List
{
	Node *head;
public:
	List();
	~List();
	// insert a copy of d
	void insertBefore(Node *loc, const SimpleString &d);
	void insertAfter(Node *loc, const SimpleString &d);
	//push a copy of d
	void push_back(const SimpleString &d);
	void push_front(const SimpleString &d);
	//returns true if  pop_back successful. Fill d with a copy the data in the node
	bool pop_back(SimpleString &d);
	//returns true if  pop_front successful.Fill d with a copy of the data in the node

	bool pop_front(SimpleString &d);
	// erase the node and delete it from memory
	void erase(Node *loc);

	//Simple display the list to console using cout 
	void displayToConsole();
	//return a pointer the the searched node. If nullptr is returned then the node is not found
	Node search(const SimpleString &d);
};

void List::push_front(const SimpleString &d)
{
	Node *new_node = new Node(d, 0);
	if (!head) {
		head = new_node;
		return;
	}
	new_node->next = head;
	head = new_node;
	return;
}
void List::insertBefore(Node * loc, const SimpleString & d)
{

}
void List::insertAfter(Node * loc, const SimpleString & d)
{

}
void List::push_back(const SimpleString &d)
{
	Node *new_node = new Node(d, 0);
	if (!head) {
		head = head->next;
		return;
	}
}
bool List::pop_back(SimpleString & d)
{
	return false;
}
bool List::pop_front(SimpleString & d)
{
	return false;
}
void List::erase(Node * loc)
{
	delete loc;		//deletes the node
}
void List::displayToConsole()
{
	cout << "The list is " << List <<endl;
}
Node List::search(const SimpleString &d)
{
	Node current = new Node();
	if (d == current) {
		return current;
	}
	else {
		return 0;
	}
}

SimpleString::~SimpleString()
{
}

bool SimpleString::isEqual(const SimpleString & d)
{
	return false;
}
