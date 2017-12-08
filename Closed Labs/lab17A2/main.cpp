// asgn BY student name,  CSCI ####-sec, Due: mm/dd/yyyy
// PROGRAM ID:  file-name.cpp / one-line description
// AUTHOR:  student name
// INSTALLATION:  MTSU
// REMARKS:  short description

/* Name:
 * Date:
 * Description: 
 */
#include <iostream>
#include <vector>

using namespace std;

int main(){
    cout << "---------------------- STL vector ----------------------\n";
    // declare container here
	vector<int> vec;
	int tempVar1;

    cout << "Enter numbers to store in STL containers (enter a letter to stop)\n";
    // read in integers from STDIN here and store them in the vector
	do {
		cin >> tempVar1;
		vec.push_back (tempVar1);
	} while (tempVar1);
    
    ////cout << "There are " <<           << " integers in the vector" << endl;

    // print out the contents of the container in the reverse order that they were read in
    
    cout << "---------------------- STL list ----------------------\n";
    // declare container here

    // copy elements from the vector into this container (in the order that they were entered)
    
    ////cout << "There are " <<          << " integers in the list" << endl;

    // print out the contents of the container in the reverse order that they were read in
    // Hint: Make a copy of the elements into a second list first . . .

    cout << "---------------------- STL deque ----------------------\n";
    // declare container here

    // copy elements from the vector into this container (in the order that they were entered) 
    
    ////cout << "There are " <<          << " integers in the deque" << endl;

    // print out the contents of the container in the reverse order that they were read in
    
    cout << "---------------------- STL stack ----------------------\n";
    // declare container here
    // Optionally, for a challenge, specify the underlying container (and it's type) when declaring the stack container (and it's type)

    // copy elements from the vector into this container (in the order that they were entered) 
    
    ////cout << "There are " <<          << " integers in the stack" << endl;

    // print out the contents of the container in the reverse order that they were read in
    
    cout << "---------------------- STL queue ----------------------\n";
    // declare container here

    // copy elements from the vector into this container (in the order that they were entered) 
    
    ////cout << "There are " <<          << " integers in the queue" << endl;

    // print out the contents of the container in the reverse order that they were read in
    // Hint: For each element, make a temporary queue with all of the remaining elements in it . . . 
    
    cout << "---------------------- STL priority_queue ----------------------\n";
    // declare container here

    // copy elements from the vector into this container (in the order that they were entered) 
    
    ////cout << "There are " <<          << " integers in the priority_queue" << endl;

    cout << "Priority queues do not keep track of the insertion order of their contents, but here's it's contents:\n";
    // print out the contents of the container

    
    cout << "\nCan the number of elements and the contents be printed out in the order that they were entered for associative containers? Why?\n";
    /*
     * Answer the question here with a cout statement
     */

    
    return 0;
}
