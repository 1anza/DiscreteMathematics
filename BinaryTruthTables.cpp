/*
Print the truth table for any 2 variable propositional function.  Ask 3 questions:
Question 1- Do you want to use And or Or?
Question 2- Do you want to NOT p?
Question 3- Do you want to NOT q?
Use: V (or), A (and), ~ (not)

Output:
3 column truth table: p, q, answer.  Other intermediate columns are optional.
Output (after the questions) should be 5 lines long:
     Column headers, 4 lines for the table.

*/




#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int SIZE = 4;

int main() {
    
    
    string andOr;
    string pInput;
    string qInput;

    bool a[SIZE] = { true, true, false, false };
    bool b[SIZE] = { true, false, true, false };
    bool c[SIZE] = { true, true, false, false };
    bool d[SIZE] = { true, false, true, false };
    bool e[SIZE] = { true, true, false, false };
    bool notA[SIZE];
    bool notB[SIZE];
    bool notC[SIZE];
    bool notD[SIZE];
    bool notE[SIZE];
    
    bool* aTest;
    bool* bTest;
    bool* cTest;
    bool* dTest;
    bool* eTest;
    



    while (true) {

        cout << "Do you want to use And or Or?: AND/OR" << endl;
        cin >> andOr;

        if ((andOr.compare("AND") != 0) && (andOr.compare("OR") != 0)) {
            cerr << "Invalid: Please enter (AND or OR)." << endl;
        }  
        else if ((andOr.compare("AND") == 0) || (andOr.compare("OR") == 0))
            break;

    }

    while (true) {

        cout << "Do you want to NOT p?: Y/N" << endl;
        cin >> pInput;

        if ((pInput.compare("Y") != 0) && (pInput.compare("N") != 0)) {
            cerr << "Invalid: Please enter (Y or N)." << endl;
        }
        else if ((pInput.compare("Y") == 0) || (pInput.compare("N") == 0))
            break;

    }

    while (true) {

        cout << "Do you want to NOT q?: Y/N" << endl;
        cin >> qInput;

        if ((qInput.compare("Y") != 0) && (qInput.compare("N") != 0)) {
            cerr << "Invalid: Please enter (Y or N)." << endl;
        }
        else if ((qInput.compare("Y") == 0) || (qInput.compare("N") == 0))
            break;

    }


    for (int i = 0; i < SIZE; i++)
    {
        notP[i] = !p[i];
    }
   
    for (int i = 0; i < SIZE; i++)
    {
        notQ[i] = !q[i];
    }


   
    if (qInput == "Y") { // if Not q
        qTest = notQ;
    }
    else {
        qTest = q;
    }
    if (pInput == "Y") {  // if Not P
        pTest = notP;
    }
    else {
        pTest = p;
    }
    if (andOr == "AND") {
        cout << "p | q" << " | " << "p A q" << endl;
        for (int i = 0; i < SIZE; i++) {
            cout << setw(1) << pTest[i] << " | ";
            for (int j = 0; j < 1; j++) {
                cout << setw(1) << qTest[i] << " | " << setw(3) << (pTest[i] && qTest[i]);
            }
            cout << endl;
        }
    }
}


