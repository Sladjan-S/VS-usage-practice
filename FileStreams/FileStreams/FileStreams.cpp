// FileStreams.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
using namespace std;


int main()
{
	char data[100];

	//open file in write mode
	ofstream outfile;
	outfile.open("afile.dat");

	cout << "Writing to file" << endl;
	cout << "Enter name: ";
	cin.getline(data, 100);

	//send input into file
	outfile << data << endl;

	cout << "Enter age:";
	cin >> data;
	cin.ignore();

	//again input to file
	outfile << data << endl;

	//close file
	outfile.close();

	//open for read
	ifstream infile;
	infile.open("afile.dat");

	cout << "Reading from the file" << endl;
	infile >> data;

	//data to screen
	cout << data << endl;

	//again read from file and display it
	infile >> data;
	cout << data << endl;

	infile.close();

    return 0;
}

