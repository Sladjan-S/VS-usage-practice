// Dynamic m-alloc-c++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//OOP
class Box
{
public:
	Box()
	{
		cout << "Constructor called!" << endl;
	}

	~Box()
	{
		cout << "Destructor called!" << endl;
	}
};


int main()
{
	double* pvalue = NULL;//pointer init to null
	pvalue = new double;  //request memory for the var -malloc

	*pvalue = 29494.99;    //store value @ allocated address
	cout << "value of pvalue: " << *pvalue << endl;

	delete pvalue;           //free memory

	Box* myBoxarray = new Box[4];
	delete[]myBoxarray;

    return 0;
}

