/*
 * 
 * nodeVal: Peyton Cox
 * Date: 3/28/2017
 * Description: "Header file for a Linked List program"
 * 
 */

//guard
#ifndef TEMPLATEDSORTEDLIST
#define TEMPLATEDSORTEDLIST

#include <string>
#include <iostream>
//using nodeValspace std;


template<class T>
//declaring struct for Node
struct Node{
	
	//the nodeVal stored in the node of the linked list
	T	nodeVal;
	//pointer that points to the next item in the list (if there is one)
	Node<T>*	next;
	
};

template<class T>
//declaring LinkedList as a class
class TemplatedSortedList{

public:
	//default constructor
	TemplatedSortedList(){
		//initiate dummy head
		head = NULL;
		
	};
	
	TemplatedSortedList(const TemplatedSortedList& oldList){
		//initiate dummy head
		head = NULL;
		Node<T> *oldNode = new Node<T>;
		oldNode = oldList.head;
		
		//make sure list is not empty
		if (oldNode != NULL){
			
			//initiate new node
			Node<T> *newNode = new Node<T>;
			//assign new node's nodeVal value
			newNode->nodeVal = oldNode->nodeVal;
			//assign new node's next pointer's value from oldList nodeVal value
			newNode->next = head;
			//adjusts head to newest node
			head = newNode;
			
			
			//cycles through the entire list until oldNode->next is NULL and copies the values
			while(oldNode->next) {
				
				Node<T> *newNode = new Node<T>;
				//assign new node's nodeVal value from oldList nodeVal value
				newNode->nodeVal = oldNode->nodeVal;
				//assign new node's next pointer's value
				newNode->next = head;
				//adjusts head to newest node
				head = newNode;
				
				oldNode = oldNode->next;
			}
			
			
			
		}
	};
	
	//default destructor
	~TemplatedSortedList(){
		
		Node<T> *cur;
		
		//cycles through the entire list until head is NULL and deletes nodes
		while(head) {
			cur = head;
			head = head->next;
			delete cur;
		}
		
};
	//insert function for linked list (inserts string to end of list)
	void insert( T nodeVal){
	
	//initiate new node
	Node<T> *newNode = new Node<T>;
	//assign new node's nodeVal value
	newNode->nodeVal = nodeVal;
	//assign new node's next pointer's value
	newNode->next = head;
	//adjusts head to newest node
	head = newNode;
};
	//remove function for linked list (removes string if found in list)
	void remove( T nodeVal){
	
	
	Node<T> *cur = head;
	Node<T> *prev = NULL;
	
	//if list is empty do nothing
	if(cur == NULL){
		
		//delete cur;
		//head = NULL;
		return;
		
	}
	
	//if the string being removed is the first item in the list
	else if(cur->nodeVal == nodeVal){
		head = cur->next;
		delete cur;
		return;
	}
	
	//general delete function
	while(cur != NULL){
		//if the string is found, delete it and adjust previous "next" pointer
		if(cur->nodeVal == nodeVal){
			prev->next = cur->next;
			cur->next = NULL;
			delete cur;
			return;
		}
		//if string is not found, continue to the next node indicated
		//  by the "next" pointer
		else{ prev = cur; cur = cur->next; }
		
		
		
	}
	
};
	//print function for linked list (prints string if found in list)
	void print( T nodeVal){
	
	Node<T> *cur = head;
	
	//searches through the list as long as cur isn't NULL
	while(cur != NULL){
		//if string is found print that it is in the list
		if(cur->nodeVal == nodeVal){
			cout << cur->nodeVal << " is in the list" << endl << endl;
			return;
		}
		//if string is not found, continue to next indicated node
		else{ cur = cur->next; }
		
		
		
	}
	
	//if string was not found
	cout << nodeVal <<" is not found in the list" << endl << endl; 
	
	};

	/*std::ostream& printAll(std::ostream& os){  GOT RID OF THIS AS IT IS REPLACES BY THE << OVERLOADER
		
		
		Node *cur = head;
		int count = 0;
		
		//if list is empty print and exit
		if(cur == NULL){ os << "There are no entries in the list to display" << endl << endl; return os; }
		
		//check how many items are in the list
		while(cur != NULL){
			
			cur = cur->next;
			count++;
			
		}
		
		//reset cur to head
		cur = head;
		
		//if 1 item
		if(count == 1){ os << "Displaying the single entry in the list:" << endl; }
		
		//if more than 1 item
		else{ os << "Displaying all " << count << " entries in the list:" << endl; }
		
		//go through the entire list and print the contents
		while(cur != NULL){
			
			os << cur->nodeVal << endl;
			cur = cur->next;
			
		}
		
		//spacing
		os << endl;
		
		return os;
		
	}; */

	
	//***************************************//
	//         OVERLOADED OPERATORS          //
	//***************************************//
	
	TemplatedSortedList operator+=(T nodeVal) {
		//basically does the same exact thing as the insert function
		
		//initiate new node
		Node<T> *newNode = new Node<T>;
		//assign new node's nodeVal value
		newNode->nodeVal = nodeVal;
		//assign new node's next pointer's value
		newNode->next = head;
		//adjusts head to newest node
		head = newNode;
		//return object
		return *this;
	};
	
	TemplatedSortedList operator-=(T nodeVal) {
		//calls remove class function
		remove(nodeVal);
		//returns object
		return *this;
	};
	
	//OVERLOADED "<<" AND ">>" OPERATORS//
	//Overloaded "<<" Operator
	friend std::ostream& operator<<( std::ostream& os, const TemplatedSortedList<T>& rhs){
		
		Node<T> *cur = rhs.head;
		int count = 0;
		
		//if list is empty print and exit
		if(cur == NULL){ os << "There are no entries in the list to display" << endl << endl; return os; }
		
		//check how many items are in the list
		while(cur != NULL){
			
			cur = cur->next;
			count++;
			
		}
		
		//reset cur to head
		cur = rhs.head;
		
		//if 1 item
		if(count == 1){ os << "Displaying the single entry in the list:" << endl; }
		
		//if more than 1 item
		else{ os << "Displaying all " << count << " entries in the list:" << endl; }
		
		//go through the entire list and print the contents
		while(cur != NULL){
			
			os << cur->nodeVal << endl;
			cur = cur->next;
			
		}
		
		//spacing
		os << endl;
		//return ostream
		return os;
		
	};
	
	
	//Overloaded ">>" Operator
	friend std::istream& operator>>( std::istream& is, std::string nodeVal ){
		//apparently this wasnt needed but I already did it so it's staying
		//nodeVal is set to istream value
		is >> nodeVal;
		//return istream
		return is;
		
	};
	
	
private:
	
	//declaring the head pointer
	Node<T>* head;
	
};

/* Junk code, I think including the code within the friend overload will work

template<typenodeVal T>
std::ostream& operator<<( std::ostream& os, const TemplatedSortedList<T>& rhs){
	os << rhs.printAll();
	return os;
}

template<typenodeVal T>
std::istream& operator>>( std::istream& is, TemplatedSortedList<T>& rhs){
	while(!is.eof()){
		T nodeVal;
		is >> nodeVal;
		rhs.add(nodeVal);
	}
	return is;
}
 */

#endif
