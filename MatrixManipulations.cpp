/*
Matrix multiplication/addition programming problem.  Only allow 2x2, 2x3,
3x2, and 3x3 matrices.  Hard code a matrix of each size to use in the
calculations.  This program should use human input to determine which matrices
to use and whether to use addition or multiplication (the whole list of
possibilities is too big).  Print out M, N, and the results for each choice
using both addition and multiplication (if possible).  These are NOT binary
matrices.
*/

#include <iostream>
using namespace std;

int main()
{
	int i, j, k, matrixResult[3][3] = { 0 },
		choice1 = 0, choice2 = 0, addOrMult = 0;

	int matrixA[2][2] = {
		{1, 1},
		{1, 1}
	};
	int matrixB[2][3] = {
		{2, 2, 2},
		{2, 2, 2}
	};
	int matrixC[3][2] = {
	 {3, 3},
	 {3, 3},
	 {3, 3}
	};
	int matrixD[3][3] = {
	 {4, 4, 4},
	 {4, 4, 4},
	 {4, 4, 4}
	};

	cout << "Matrix A (2 x 2):\n";
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++)
			cout << matrixA[i][j] << " ";
		cout << "\n";
	}

	cout << "\nMatrix B (2 x 3):\n";
	for (i = 0; i < 2; i++){
		for (j = 0; j < 3; j++)
			cout << matrixB[i][j] << " ";
		cout << "\n";
	}

	cout << "\nMatrix C (3 x 2):\n";
	for (i = 0; i < 3; i++){
		for (j = 0; j < 2; j++)
			cout << matrixC[i][j] << " ";
		cout << "\n";
	}

	cout << "\nMatrix D (3 x 3):\n";
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++)
			cout << matrixD[i][j] << " ";
		cout << "\n";
	}

	while ((choice1 >= 5) || (choice1 <= 0)) {
		cout << "\nSelect your first matrix. \n"
			"1 for Matrix A \n"
			"2 for Matrix B \n"
			"3 for Matrix C \n"
			"4 for Matrix D \n";
		cin >> choice1;
		if ((choice1 >= 5) || (choice1 <= 0) || (!cin)) {
			cout << "\nTry Again. \n";
			cin.clear();
			cin.ignore(100, '\n');
			choice1 = 0;
		}
	}

	while ((choice2 >= 5) || (choice2 <= 0)) {
		cout << "\nSelect your second matrix. \n"
			"1 for Matrix A \n"
			"2 for Matrix B \n"
			"3 for Matrix C \n"
			"4 for Matrix D \n";
		cin >> choice2;
		if ((choice2 >= 5) || (choice2 <= 0) || (!cin)) {
			cout << "\nTry Again. \n";
			cin.clear();
			cin.ignore(100, '\n');
			choice2 = 0;
		}
	}

	while ((addOrMult >= 3) || (addOrMult <= 0)) {
		cout << "\nAdd or Multiply? \n"
			"1 for Add \n"
			"2 for Multiply \n";
		cin >> addOrMult;
		if ((addOrMult >= 3) || (addOrMult <= 0) || (!cin)) {
			cout << "\nTry Again. \n";
			cin.clear();
			cin.ignore(100, '\n');
			addOrMult = 0;
		}
	}

	switch (addOrMult) {

	case 1:

		if (((choice1 == 1) && (choice2 == 1)) || ((choice1 == 2) && (choice2 == 2)) ||
			((choice1 == 3) && (choice2 == 3)) || ((choice1 == 4) && (choice2 == 4))) {
			cout << "\nMatrix Addition: \n";

			if ((choice1 == 1) && (choice2 == 1)) {
				for (i = 0; i < 2; i++) {
					for (j = 0; j < 2; j++) {
						matrixResult[i][j] = matrixA[i][j] + matrixA[i][j];
						cout << matrixResult[i][j] << " ";
					}
					cout << "\n";
				}
			}

			if ((choice1 == 2) && (choice2 == 2)) {
				for (i = 0; i < 2; i++) {
					for (j = 0; j < 3; j++) {
						matrixResult[i][j] = matrixB[i][j] + matrixB[i][j];
						cout << matrixResult[i][j] << " ";
					}
					cout << "\n";
				}
			}

			if ((choice1 == 3) && (choice2 == 3)) {
				for (i = 0; i < 3; i++) {
					for (j = 0; j < 2; j++) {
						matrixResult[i][j] = matrixC[i][j] + matrixC[i][j];
						cout << matrixResult[i][j] << " ";
					}
					cout << "\n";
				}
			}

			if ((choice1 == 4) && (choice2 == 4)) {
				for (i = 0; i < 3; i++) {
					for (j = 0; j < 3; j++) {
						matrixResult[i][j] = matrixD[i][j] + matrixD[i][j];
						cout << matrixResult[i][j] << " ";
					}
					cout << "\n";
				}
			}
		}

		else {
			cout << "\nImpossible. Can't add these matrices together.\n";
		}
		break;

	case 2:

		if (((choice1 == 1) && (choice2 == 1)) || ((choice1 == 1) && (choice2 == 2)) ||
			((choice1 == 2) && (choice2 == 3)) || ((choice1 == 2) && (choice2 == 4)) ||
			((choice1 == 3) && (choice2 == 1)) || ((choice1 == 3) && (choice2 == 2)) ||
			((choice1 == 4) && (choice2 == 3)) || ((choice1 == 4) && (choice2 == 4))) {
			cout << "\nMatrix Multiplication: \n";

			if ((choice1 == 1) && (choice2 == 1)) {
				for (i = 0; i < 2; i++) {
					for (j = 0; j < 2; j++) {
						for (k = 0; k < 2; k++)
							matrixResult[i][j] = matrixResult[i][j] + matrixA[i][k] * matrixA[k][j];
					}
				}
				for (i = 0; i < 2; i++) {
					for (j = 0; j < 2; j++)
						cout << matrixResult[i][j] << " ";
					cout << "\n";
				}
			}

			if ((choice1 == 1) && (choice2 == 2)) {
				for (i = 0; i < 2; i++) {
					for (j = 0; j < 3; j++) {
						for (k = 0; k < 2; k++)
							matrixResult[i][j] = matrixResult[i][j] + matrixA[i][k] * matrixB[k][j];
					}
				}
				for (i = 0; i < 2; i++) {
					for (j = 0; j < 3; j++)
						cout << matrixResult[i][j] << " ";
					cout << "\n";
				}
			}

			if ((choice1 == 2) && (choice2 == 3)) {
				for (i = 0; i < 3; i++) {
					for (j = 0; j < 3; j++) {
						for (k = 0; k < 3; k++)
							matrixResult[i][j] = matrixResult[i][j] + matrixB[i][k] * matrixC[k][j];
					}
				}
				for (i = 0; i < 2; i++) {
					for (j = 0; j < 2; j++)
						cout << matrixResult[i][j] << " ";
					cout << "\n";
				}
			}

			if ((choice1 == 2) && (choice2 == 4)) {
				for (i = 0; i < 3; i++) {
					for (j = 0; j < 3; j++) {
						for (k = 0; k < 3; k++)
							matrixResult[i][j] = matrixResult[i][j] + matrixB[i][k] * matrixD[k][j];
					}
				}
				for (i = 0; i < 2; i++) {
					for (j = 0; j < 3; j++)
						cout << matrixResult[i][j] << " ";
					cout << "\n";
				}
			}

			if ((choice1 == 3) && (choice2 == 1)) {
				for (i = 0; i < 3; i++) {
					for (j = 0; j < 2; j++) {
						for (k = 0; k < 2; k++)
							matrixResult[i][j] = matrixResult[i][j] + matrixC[i][k] * matrixA[k][j];
					}
				}
				for (i = 0; i < 3; i++) {
					for (j = 0; j < 2; j++)
						cout << matrixResult[i][j] << " ";
					cout << "\n";
				}
			}

			if ((choice1 == 3) && (choice2 == 2)) {
				for (i = 0; i < 3; i++) {
					for (j = 0; j < 3; j++) {
						for (k = 0; k < 2; k++)
							matrixResult[i][j] = matrixResult[i][j] + matrixC[i][k] * matrixB[k][j];
					}
				}
				for (i = 0; i < 3; i++) {
					for (j = 0; j < 3; j++)
						cout << matrixResult[i][j] << " ";
					cout << "\n";
				}
			}

			if ((choice1 == 4) && (choice2 == 3)) {
				for (i = 0; i < 3; i++) {
					for (j = 0; j < 2; j++) {
						for (k = 0; k < 3; k++)
							matrixResult[i][j] = matrixResult[i][j] + matrixD[i][k] * matrixC[k][j];
					}
				}
				for (i = 0; i < 3; i++) {
					for (j = 0; j < 2; j++)
						cout << matrixResult[i][j] << " ";
					cout << "\n";
				}
			}

			if ((choice1 == 4) && (choice2 == 4)) {
				for (i = 0; i < 3; i++) {
					for (j = 0; j < 3; j++) {
						for (k = 0; k < 3; k++)
							matrixResult[i][j] = matrixResult[i][j] + matrixD[i][k] * matrixD[k][j];
					}
				}
				for (i = 0; i < 3; i++) {
					for (j = 0; j < 3; j++)
						cout << matrixResult[i][j] << " ";
					cout << "\n";
				}
			}
		}

		else {
			cout << "\nImpossible. Can't multiply these matrices together.\n";
		}

		break;
	}

	return 0;
}