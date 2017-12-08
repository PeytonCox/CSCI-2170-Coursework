/*
 * 
 * Name: Peyton Cox
 * Date: 3/28/2017
 * Description: "Header file for a Linked List program"
 * 
 */

//guard
#ifndef LINKEDLIST
#define LINKEDLIST

#include <string>

//declaring struct for Node
struct Node{
	
	//the name stored in the node of the linked list
	std::string	name;
	//pointer that points to the next item in the list (if there is one)
	Node*	next;
	
};

//declaring LinkedList as a class
class LinkedList{

public:
	//default constructor
	LinkedList();
	//default destructor
	~LinkedList();
	//insert function for linked list (inserts string to end of list)
	void insert( std::string name);
	//remove function for linked list (removes string if found in list)
	void remove( std::string name);
	//print function for linked list (prints string if found in list)
	void print( std::string name);
	//printAll funtion for linked list (prints entire contents of the list)
	void printAll();
	
private:
	
	//declaring the head pointer
	Node* head;
	
};

#endif
