/*Sec 1.1, 1.2
Hardcode 2 sets of 5 integers A = {1, 3, 5, 6, 8} and B = {2, 3, 4, 7, 9}.
Compute A U B, A n B, and A – B.  Do NOT actually use a set data type.*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {

	const int SIZE = 5;
	const int MERGE = SIZE + SIZE;

	int a[SIZE] = { 1, 3, 5, 6, 8 };
	int b[SIZE] = { 2, 3, 4, 7, 9 };
	int c[MERGE];

	cout << "Elements of array A: ";
	for (int i = 0; i < SIZE; i++) 
		cout << a[i];
	cout << endl;

	cout << "Elements of array B: ";
	for (int i = 0; i < SIZE; i++)
		cout << b[i];
	cout << endl;


	cout << "The Union of A and B: ";
	for (int i = 0; i < SIZE; i++) {
		c[i] = a[i];
		c[i + SIZE] = b[i];
	}
	for (int i = 0; i < MERGE; i++)
		cout << c[i];	//Having a hard time conceptually wrapping my head around dropping the duplicate '3'
	cout << endl;


	cout << "The Intersection of A and B: ";
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (a[i] == b[j])
				cout << c[i];
		}
	}
	cout << endl;


	cout << "The Difference of A and B: "; 
	for (int i = 0; i < SIZE; i++) {
		c[i] = a[i];
		c[i + SIZE] = b[i];
	}
	for (int i = 0; i < MERGE; i++) {
			if (a[i] != b[i]) {
				cout << c[i];	//Drops '2' from the set for some nonsensical reason, can't figure out why.
			}
	}
		

	return 0;
}

/*
for (int i = 0; i < 5; i++)
	union*/