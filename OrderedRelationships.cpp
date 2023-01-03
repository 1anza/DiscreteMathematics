/*
Ask for user input for a series of ordered pairs comprised of integers.
Print out the relation, the domain, and range.  The output should be properly
formatted, though if you have a trailing "," it's not a big deal.  Output should
look similar to the following:

Relation = {(1,2), (2,1), (3,2), (4, 5)}
D = {1, 2, 3, 4}
R = {1, 2, 5}
*/

#include <iostream>
#include <utility>
using namespace std;

int main()
{
    int input;
    cout << "\nHow many pairs would you like to enter?: \n ";
    cin >> input;

    int i = 0, x = 0, y = 0;
    int arr[100][2];
    while (i < input) {

        cout << "\nEnter a pair: \n";
        cin >> x >> y;
        arr[i][0] = x;
        arr[i][1] = y;
        
        i++;
    }

    int j = 0, k = 0;
    int domain[100], range[100];
    for (int i = 0; i < input; i++) {
        int temp;
        int unique = 0;

        for (temp = 0; temp < j; temp++)
            if (arr[i][0] == domain[temp])
                unique = 1;
        if (!unique)
            domain[j++] = arr[i][0];

        unique = 0;
        for (temp = 0; temp < k; temp++)
            if (arr[i][1] == range[temp])
                unique = 1;
        if (!unique)
            range[k++] = arr[i][1];
    }

    cout << "\nRelation {";
    for (int i = 0; i < input; i++)
        cout << "(" << arr[i][0] << "," << arr[i][1] << "), ";
    cout << "\b\b}";

    cout << "\nDomain {";
    for (int i = 0; i < j; i++)
        cout << domain[i] << ", ";
    cout << "\b\b}";

    cout << "\nRange {";
    for (int i = 0; i < k; i++)
        cout << range[i] << ", ";
    cout << "\b\b}\n";
    
    return 0;
}