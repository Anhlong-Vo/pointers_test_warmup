//============================================================================
// Name        : pointers_test_warmup.cpp
// Author      : 
// Version     :
// Copyright   : Steal this code!
// Description : just some pointer practice
//============================================================================

#include <iostream>
#include <string.h>

using namespace std;

void pointers_warmup()
{
	int x = 3;
	int y = 10;
	int *z = &x;
	z = &y;
	cout << "z points to " << *z << endl;

	z = &x;
	*z = 14;
	cout << "x is " << x << endl;
	z = &x;
	x = y;
	cout << "z points to " << *z << endl;

	*z = 28;
	cout << "z points to " << *z << endl;

	int b[2] = { 1, 2 };
	z = b;
	cout << "*b points to " << *b << endl;
	cout << "z+1 points to " << *(z + 1) << endl;

	int* a = new int(37);
	z = a;
	cout << "z points to " << *z << endl;
	cout << "z+1 points to (why does it look random?)" << *(z+1) << endl;

	char* A = "012345";
	char *B = A;
	cout << "B" << B << endl;
	cout << "*(B + 2)" << *(B + 2) << endl;
	cout << "(B + 2)[1]" << (B + 2)[1] << endl;
	cout << "(B + 1)" << (B + 1) << endl;
}

void pointers_new() {

	//uninitialized
	int *myint = new int;

	//initialized
	int *myint1 = new int(10);

	//uninitialized
	int *myint2 = new int[20];

	//set it to zero
	memset(myint2, 0, 20 *sizeof(int));

	for (int i = 0; i < 20; i++)
		*(myint2 + i) = i;

	//clean up
	delete myint;
	delete myint1;
	delete []myint2;
}

int main()
{
	pointers_warmup();
	pointers_new();
}




