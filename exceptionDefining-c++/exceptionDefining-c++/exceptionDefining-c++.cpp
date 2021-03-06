// exceptionDefining-c++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <exception>
using namespace std;

struct MyException : public exception
{
	const char* what() const throw()
	{
		return "some exception";
	}
};


int main()
{
	try
	{
		throw MyException();
	}
	catch (MyException& e)
	{
		std::cout << "My exc. caught" << std::endl;
		std::cout << e.what() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << "other errors" << std::endl;
	}
    return 0;
}

