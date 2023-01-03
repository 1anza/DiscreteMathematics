/*
Convert between bases manually.

Start with base 10 and convert to bases 2, 8, 16.
Do NOT use built-in conversion methods for the conversion.
You must do your own math to compute the values.  Input the value to
be converted, and this should be the only input for this program.

*/

#include <iostream>
using namespace std;

void baseConversion(int x, int y);

int main() {

	int input;

	cout << "Enter a decimal to convert: ";
	cin >> input;

	baseConversion(input, 16);
	cout << "Decimal		(base 10):	" << input << endl;
	baseConversion(input, 8);
	baseConversion(input, 2);

	return 0;
}

void baseConversion(int x, int y) {
	
	int i = 0;

	if (y == 16) {

		char arr[100];
		while (x != 0) {

			int remainder = x % y;

			if (remainder < 10)
				arr[i++] = remainder + 48;

			else
				arr[i++] = remainder + 55;

			x = x / y;
		}

		cout << "Hexadecimal	(base 16):	";
		for (int j = i - 1; j >= 0; j--)
			cout << arr[j];
		cout << endl;

	}

	if (y == 8) {

		int arr[100];
		while (x != 0) {
			
			int remainder = x % y;

			arr[i++] = remainder;

			x = x / y;
		}

		cout << "Octal		(base 8):	";
		for (int j = i - 1; j >= 0; j--)
			cout << arr[j];
		cout << endl;

	}

	else if (y == 2) {

		int arr[100];
		while (x != 0) {
			
			int remainder = x % y;

			arr[i++] = remainder;

			x = x / y;
		}

		cout << "Binary		(base 2):	";
		for (int j = i - 1; j >= 0; j--)
			cout << arr[j];
		cout << endl;
	}
}