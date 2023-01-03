/*
Input 2 numbers, n and r.  Compute and show the values of each permutation and combination,
both with and without repeats.  Output should be the 4 numbers C(n,r) and P(n,r) for
repeats and without repeats.  NOTE: when entering n and r, care should be taken with values
above 8.  Try to figure out why and how to work around it.
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

long double factorial(long double n);

int main() {

		long double n, r, p, c, pr, cr;

		while (true) {
			cout << "Enter n: ";
			cin >> n;
			cout << "Enter r: ";
			cin >> r;

			cout << endl;

			if (!cin) {
				cout << "Input must be a number: Try Again" << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}

			while (((n < 0) || (r < 0)) || (r > n)) {
				cout << "Invalid Input: Try Again" << endl;
				cout << " - Input must be greater than or equal to zero" << endl;
				cout << " - There cannot be more elements(r) than exist in the set(n)" << endl;
				cout << endl;


				cout << "Enter n: ";
				cin >> n;
				cout << "Enter r: ";
				cin >> r;

				cout << endl;
			}


			while ((n >= 0) && (r >= 0)) {

				c = factorial(n) / (factorial(r) * factorial(n - r));
				cr = factorial(n + r - 1.0) / (factorial(r) * factorial((n + r - 1.0) - r));
				p = factorial(n) / factorial(n - r);
				pr = pow(n, r);


				cout << "Combination : " << setprecision(c) << c << endl;
				if ((n == 0) && (r == 0)) {
					cout << "Combination with repeats: " << "N/A" << endl;
				}
				else {
					cout << "Combination with repeats : " << setprecision(cr) << cr << endl;
				}

				cout << "Permutation : " << setprecision(p) << p << endl;
				cout << "Permutation with repeats : " << setprecision(pr) << pr << endl;
				return 0;
			}
		}

			cout << "You found a way to break my code - cut it out.";

	return 0;
}

long double factorial(long double n) {

	long double factorial = 1.0;

	for (int i = 1; i <= n; ++i) {
		factorial *= i;
	}
	return factorial;
	
}

//#include <iostream>
//using namespace std;
//
//int main() {
//	int* p;
//
//	while (true) {
//
//		p = new int;
//
//	}
//	return 0;
//}
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    // Initialise all variables
//    int iterations = 0;
//    int swap = 0;
//    int stay = 0;
//    int doorPicked, doorLeft, doorOpened, doorPrize;
//
//    // To ensure random function always gives differnt values
//    srand(time(NULL));
//
//    //Simulate game 10000 times
//    while (iterations < 100000) {
//        //take random door chosed by participant, random winning door and random revealed door
//        doorPicked = rand() % 3 + 1;
//        doorOpened = rand() % 3 + 1;
//        doorPrize = rand() % 3 + 1;
//
//        // rechoose revealed door if it's same as chosen or winning door
//        while (doorOpened == doorPicked || doorOpened == doorPrize) {
//            doorOpened = rand() % 3 + 1;
//        }
//
//        //remaining door from chosen and revealed door
//        doorLeft = rand() % 3 + 1;
//
//        // rechoose remaining door if it's same as chosen or revealed door
//        while (doorLeft == doorPicked || doorLeft == doorOpened) {
//            doorLeft = rand() % 3 + 1;
//        }
//
//        // since question mentions chosen door is swithed to now chosen door is the remaining door
//        doorPicked = doorLeft;
//
//        // total wins increase if it's same as winning door
//        if (doorPicked == doorPrize) {
//            swap++;
//        }
//        else {
//            stay++;
//        }
//        iterations++;
//    }
//
//    // Calculate percentage
//    float swappingOdds = (swap / (float)iterations) * 100;
//    float stayingOdds = (stay / (float)iterations) * 100;
//
//    cout << "Chance of success from swapping: " << swappingOdds << '%' << endl;
//    cout << "Chance of success from staying: " << stayingOdds << '%' << endl;
//
//    return 0;
//}
