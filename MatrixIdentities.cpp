/*
Hard code several, at least 4 4x4, binary matrices and determine if they are
symmetric, asymmetric, antisymmetric, reflexive or irreflexive (or none of course).
Print the matrices and something like:
A - symmetric, reflexive
B - reflexive
C – none
D – irreflexive, asymmetric
*/

#include <iostream>
using namespace std;

void Symmetric(int matrix[4][4]);
void AntiSymmetric(int matrix[4][4]);
void Reflexive(int matrix[4][4]);

int main() {
	int i, j;

	int matrixA[4][4] = {
		{1, 0, 1, 0},
		{1, 0, 1, 0},
		{0, 0, 0, 0},
		{1, 1, 1, 0}
	};
	int matrixB[4][4] = {
		{1, 1, 0, 0},
		{1, 1, 1, 0},
		{0, 1, 1, 1},
		{0, 0, 1, 1}
	};
	int matrixC[4][4] = {
		{0, 1, 1, 1},
		{1, 0, 0, 1},
		{1, 1, 0, 1},
		{1, 1, 1, 0}
	};
	int matrixD[4][4] = {
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0}
	};

	cout << "Matrix A\n";
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			cout << matrixA[i][j] << " ";
		cout << "\n";
	}

	cout << "\nMatrix B\n";
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			cout << matrixB[i][j] << " ";
		cout << "\n";
	}

	cout << "\nMatrix C\n";
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			cout << matrixC[i][j] << " ";
		cout << "\n";
	}

	cout << "\nMatrix D\n";
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			cout << matrixD[i][j] << " ";
		cout << "\n";
	}

	cout << "\nMatrixA is: \n";
	Symmetric(matrixA);
	AntiSymmetric(matrixA);
	Reflexive(matrixA);
	cout << "\n";

	cout << "MatrixB is: \n";
	Symmetric(matrixB);
	AntiSymmetric(matrixB);
	Reflexive(matrixB);
	cout << "\n";

	cout << "MatrixC is: \n";
	Symmetric(matrixC);
	AntiSymmetric(matrixC);
	Reflexive(matrixC);
	cout << "\n";

	cout << "MatrixD is: \n";
	Symmetric(matrixD);
	AntiSymmetric(matrixD);
	Reflexive(matrixD);
	cout << "\n";

	return 0;
}

void Symmetric(int matrix[4][4]) {

	int t[4][4];

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			t[j][i] = matrix[i][j];
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (matrix[i][j] != t[i][j]) {
				cout << "Asymmetric\n";
				return;
			}
		}
	}

	cout << "Symmetric\n";

}

void AntiSymmetric(int matrix[4][4]) {

	int t[4][4];
	int count = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			t[j][i] = matrix[i][j];
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (t[i][j] == -1 * matrix[i][j]) {
				count++;
			}
		}
	}

	if (count == 16)
		cout << "Antisymetric\n";
	else
		cout << "Not Antisymetric\n";

}

void Reflexive(int matrix[4][4]) {

	int count = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if ((i == j) && (matrix[i][j] == 1))
				count++;
		}
	}

	if (count == 4)
		cout << "Reflexive\n";
	else
		cout << "Irreflexive\n";

}

