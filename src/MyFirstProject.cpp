//============================================================================
// Name        : MyFirstProject.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
#include <list>
#include <thread>
using namespace std;

#include "MyClass.h"



class Employee
{
public:
    char m_strName[25];
    int m_nID;
    double m_dWage;

    // Set the employee information
    void SetInfo(char *strName, int nID, double dWage)
    {
        strncpy(m_strName, strName, 25);
        m_nID = nID;
        m_dWage = dWage;
    }

    // Print employee information to the screen
    void Print()
    {
        using namespace std;
        cout << "Name: " << m_strName << "  Id: " <<
            m_nID << "  Wage: $" << m_dWage << endl;
    }
};







int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	 // Declare two employees
	    Employee cAlex;
	    cAlex.SetInfo("Alex", 1, 25.00);

	    Employee cJoe;
	    cJoe.SetInfo("Joe", 2, 22.25);

	    // Print out the employee information
	    cAlex.Print();
	    cJoe.Print();

	    char myName[25];

	    strcpy(myName, "Marvin Villareal");

	    cout << myName;

	    thread first (foo);     // spawn new thread that calls foo()
	      std::thread second (bar,0);  // spawn new thread that calls bar(0)

	      std::cout << "main, foo and bar now execute concurrently...\n";

	      // synchronize threads:
	      first.join();                // pauses until first finishes
	      second.join();               // pauses until second finishes

	      std::cout << "foo and bar completed.\n";






	return 0;
}
