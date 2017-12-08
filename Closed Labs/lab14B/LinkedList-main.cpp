#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h> // for exit()

using std::string;
using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::getline;
using std::ifstream;

#include "LinkedList.h"

bool DEBUG = false; // toggles extra printing

const string DEFAULT_INPUT_FILENAME  = "project4-inputA.tab";

// Action characters in the input file
const char ADMIT = 'A';
const char DISCHARGE = 'D';
const char VISIT = 'V';
const char FIND = 'F';

// Process the patient records in inputFilename
void processPatients( string inputFilename );

int main( /*int argc, char* argv[] */){

    // If just a return ('\n') is entered, then use DEFAULT_INPUT_FILENAME.
    // Otherwise, read in the input filename from STDIN.
    string inputFilename;
    cout << "Please enter the input filename (or simply press return to use " << DEFAULT_INPUT_FILENAME << ")\n";
    getline( cin, inputFilename);
    if( inputFilename == ""){
        inputFilename = DEFAULT_INPUT_FILENAME;
    }

    // process transactions in the file
    processPatients( inputFilename );
    
    return 0;
}


void processPatients( string inputFilename ){
    LinkedList patientList;  // list to store patients

    // open file
    ifstream fileStream;
    fileStream.open( inputFilename.c_str() );

    // verify the file is opened correctly
    if( ! fileStream ){
        cerr << "ERROR: Can not open input file " << inputFilename << "!" << endl;
        exit(1);
    }

    cout << "Importing patients from " << inputFilename << " ..." << endl;
    
    char action = '\0';
    
    // while there's more patients to process
    // read in the action and make sure that we're not at the end of the file
    while( fileStream >> action ){
        if( DEBUG ){ cout << "action: " << action << endl; }
        string name;
        switch( action ){

        case ADMIT:
            // get the patient's name from the file
            fileStream >> name;
            
            // add them to the list
            patientList.insert( name );
            if( DEBUG ){ patientList.printAll(); }
            break;
        case DISCHARGE:
            // get the patient's name from the file
            fileStream >> name;
            
            // remove them from the list
            patientList.remove( name );
            if( DEBUG ){ patientList.printAll(); }
            break;
        case FIND:
            // get the patient's name from the file
            fileStream >> name;
            
            // look for this patient in the list
            patientList.print( name );
            break;
        case VISIT:
            // display all patients in the list
            patientList.printAll();
            break;
        default:
            cerr << "ERROR: Unknown action " << action << "!" << endl;
            exit(1);
        }
    }

    // close the file
    fileStream.close();
}
