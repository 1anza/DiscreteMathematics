/*
Generate the sequence 11110000111000110010

Special rules:
1 - Do not use switch or if statements, and don't manipulate loops to make them match
    if statements either.
2 - Do not use more than 5 for/do while/while loops in any combination.
*/

#include <iostream>
using namespace std;

int main() {

    unsigned int size = 4;
    int x = 1;
    int y = 0;

    for (int i = size; i >= 1; i--) {
        for (int j = i; j > 0; j--) {
            
            cout << x;
            
        }  
        for (int j = i; j > 0; j--) {

            cout << y;

        }
    }

    return 0;
}
