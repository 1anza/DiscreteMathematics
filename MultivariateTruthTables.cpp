/*
Print out the truth table for the following proposition using the variables a, b, c, d, e.
The output should contain the header and 32 more lines for the table.

Proposition:
(( c V ~d ) A b ) A ~( d V a A e )

*/

#include <iostream>
using namespace std;

void truthTable(int x, int y, int arr[]);

int main() {
	
	int arr[32] = {};

	cout << "a	b	c	d	e	((c || !d) && (b)) && (!(d || a && e))" << endl;
	cout << "__________________________________________________________________________________" << endl;

	truthTable(0, 5, arr);

	return 0;
}

void truthTable(int x, int y, int arr[]) {
	int temp[6] = {};
	if (x == y) {
		for (int i = 0; i < y; i++) {
			cout << arr[i] << "	";
			
		}
		cout << "		";
		if (((arr[2] || !arr[3]) && (arr[1])) && (!((arr[3] || arr[0]) && arr[4]))) {	//calculate condition against each row
			temp[5] = 1;
			cout << temp[5];
		}
		else {
			temp[5] = 0;
			cout << temp[5];
		}
		cout << endl;
	}
	else {
		for (int i = 0; i < 2; i++) {
			arr[x] = i;
			truthTable(x + 1, y, arr);
		}
	}
}


	//bool a = true, b = true, c = true, d = true, e = true;	//initializing elements
	//bool truthTable[32][5] = {		
	//	{!a, !b, !c, !d, !e},
	//	{!a, !b, !c, !d, e},
	//	{ !a, !b, !c, d, !e },
	//	{ !a, !b, !c, d, e },
	//	{ !a, !b, c, !d, !e },
	//	{ !a, !b, c, !d, e },
	//	{ !a, !b, c, d, !e },
	//	{ !a, !b, c, d, e },
	//	{ !a, b, !c, !d, !e },
	//	{ !a, b, !c, !d, e },
	//	{ !a, b, !c, d, !e },
	//	{ !a, b, !c, d, e },
	//	{ !a, b, c, !d, !e },
	//	{ !a, b, c, !d, e },
	//	{ !a, b, c, d, !e },
	//	{ !a, b, c, d, e },
	//	{ a, !b, !c, !d, !e },
	//	{ a, !b, !c, !d, e },
	//	{ a, !b, !c, d, !e },
	//	{ a, !b, !c, d, e },
	//	{ a, !b, c, !d, !e },
	//	{ a, !b, c, !d, e },
	//	{ a, !b, c, d, !e },
	//	{ a, !b, c, d, e },
	//	{ a, b, !c, !d, !e },
	//	{ a, b, !c, !d, e },
	//	{ a, b, !c, d, !e },
	//	{ a, b, !c, d, e },
	//	{ a, b, c, !d, !e },
	//	{ a, b, c, !d, e },
	//	{ a, b, c, d, !e },
	//	{ a, b, c, d, e } };									

	//bool result[32] = {};

	//for (int i = 0; i < 32; i++) {	
	//	a = truthTable[i][0];			//setting variables to represent those in truth table array.
	//	b = truthTable[i][1];
	//	c = truthTable[i][2];
	//	d = truthTable[i][3];
	//	e = truthTable[i][4];
	//	for (int j = 0; j < 5; j++) {
	//			cout << truthTable[i][j] << "	";		//printing elements of truth table

	//			if (((c || !d) && (b)) && (!((d || a) && e))) {	//calculate condition against each row
	//				result[i] = true;
	//			}
	//			else
	//				result[i] = false;
	//			
	//	}
	//	cout << "		" << result[i];		//printing result of equation function
	//	cout << endl;
	//}