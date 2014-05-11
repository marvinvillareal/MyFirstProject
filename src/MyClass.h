/*
 * MyClass.h
 *
 *  Created on: May 7, 2014
 *      Author: Sinchioco Family
 */

#ifndef MYCLASS_H_
#define MYCLASS_H_

#include <iostream>
using namespace std;



class MyClass {
private:
	unsigned int a;
	string b;

public:
	MyClass();
	virtual ~MyClass();

	void DanBranchFunction();
};

#endif /* MYCLASS_H_ */
