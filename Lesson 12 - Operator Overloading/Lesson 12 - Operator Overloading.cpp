// Lesson 12 - Operator Overloading.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Matrix.h"

using namespace std;

int main()
{
	Matrix<int> mtx1;
	mtx1.set_element(0, 0, 1);
	mtx1.set_element(1, 1, 4);
	mtx1.set_element(2, 2, 6);
	cout << "matrix 1:\n" << mtx1;

	Matrix<int> mtx2;
	mtx2.set_element(0, 0, 1);
	mtx2.set_element(1, 1, 4);
	mtx2.set_element(2, 2, 2);

	cout << "matrix 2:\n" << mtx2;

	Matrix<int> mtx3;
	mtx3 = mtx2;
	cout << "matrix 3 assigned from matrix 2:\n" << mtx3;

	Matrix<int> product = (mtx1 * mtx3);
	cout << "matrix product assigned from mtx1 * mtx3:\n" << product;

	int x;
	cin >> x;
	return 0;
}

