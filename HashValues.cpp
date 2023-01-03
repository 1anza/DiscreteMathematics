/*
#2 Sec 5.1, 5.2
Write a program to generate a hash value of any word or sentence.  
Enter a “sentence” that may be as small as a single word.  
Then compute a hash of the “sentence” using the numeric value of each letter (A=a=1, Z=z=26, space=31).  
Use %31 as the hash function.  So, if we enter the word CAB, we get 3+1+2=6.  6%31=6.  The answer is 6.
If we enter CABZ, we get 3+1+2+26=32.  32%31=1.  The answer is 1.
*/


#include <iostream>
using namespace std;

int main() {

	char* input = new char[1000];

	cout << "Please enter a sentece to find its hash value... ";
	cin.getline(input, 1000);

	for (int i = 0; i < strlen(input); i++) {
		if (input[i] >= 65 && input[i] <= 90) {
			input[i] = input[i] + 32;
		}
	}

	int hash = 0;
	int size = 0;

	for (int i = 0; i < strlen(input); i++) {
		if (input[i] != 32) {
			input[i] = input[i] - '`';
		}
		else {
			input[i];
		}
		size++;
	}
	for (int i = 0; i < size; i++) {
		hash = hash + input[i];
	}
	cout << "The hash value at mod 31 is: " << hash % 31;

	return 0;
}