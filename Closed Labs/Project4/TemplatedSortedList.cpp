/*
 * 
 * Name: Peyton Cox
 * Date: 3/28/2017
 * Description: "Implementation code for a Linked List program"
 * 
 */

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <fstream>
#include "TemplatedSortedList.h"
using namespace std;

//default constructor
TemplatedSortedList::TemplatedSortedList(){
	//initiate dummy head
	head = NULL;
	
}
//deconstructor
TemplatedSortedList::~TemplatedSortedList(){
	
	Node *cur;
	
	//cycles through the entire list until head is NULL and deletes nodes
	while(head) {
		cur = head;
		head = head->next;
		delete cur;
	}
	
}

//insert function for linked list (inserts string to end of list)
void TemplatedSortedList::insert( string name ){
	
	//initiate new node
	Node *newNode = new Node;
	//assign new node's name value
	newNode->name = name;
	//assign new node's next pointer's value
	newNode->next = head;
	//adjusts head to newest node
	head = newNode;
}

//remove function for linked list (removes string if found in list)
void TemplatedSortedList::remove(string name){
	
	
	Node *cur = head;
	Node *prev = NULL;
	
	//if list is empty do nothing
	if(cur == NULL){
		
		//delete cur;
		//head = NULL;
		return;
		
	}
	
	//if the string being removed is the first item in the list
	else if(cur->name == name){
		head = cur->next;
		delete cur;
		return;
	}
	
	//general delete function
	while(cur != NULL){
		//if the string is found, delete it and adjust previous "next" pointer
		if(cur->name == name){
			prev->next = cur->next;
			cur->next = NULL;
			delete cur;
			return;
		}
		//if string is not found, continue to the next node indicated
		//  by the "next" pointer
		else{ prev = cur; cur = cur->next; }
		
		
		
	}
	
}
	
//print function for linked list (prints string if found in list)
void TemplatedSortedList::print(string name){
	
	Node *cur = head;
	
	//searches through the list as long as cur isn't NULL
	while(cur != NULL){
		//if string is found print that it is in the list
		if(cur->name == name){
			cout << cur->name << " is in the list" << endl << endl;
			return;
		}
		//if string is not found, continue to next indicated node
		else{ cur = cur->next; }
		
		
		
	}
	
	//if string was not found
	cout << name <<" is not found in the list" << endl << endl; 
	
}

//printAll funtion for linked list (prints entire contents of the list)
void TemplatedSortedList::printAll(){
	
	Node *cur = head;
	int count = 0;
	
	//if list is empty print and exit
	if(cur == NULL){ cout << "There are no entries in the list to display" << endl << endl; return; }
	
	//check how many items are in the list
	while(cur != NULL){
		
		cur = cur->next;
		count++;
		
	}
	
	//reset cur to head
	cur = head;
	
	//if 1 item
	if(count == 1){ cout << "Displaying the single entry in the list:" << endl; }
	
	//if more than 1 item
	else{ cout << "Displaying all " << count << " entries in the list:" << endl; }
	
	//go through the entire list and print the contents
	while(cur != NULL){
		
		cout << cur->name << endl;
		cur = cur->next;
		
	}
	
	//spacing
	cout << endl;
	
}







