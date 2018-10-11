// Lesson 12 - Operator Overloading.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Matrix.h"
#include "ArmedEnemy.h"
#include "ComplexNumber.h"

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

	Matrix<int> sum = (mtx1 + mtx3);
	cout << "matrix sum assigned from mtx1 + mtx3:\n" << sum;

	Matrix<int> subtract = (mtx1 - mtx3);
	cout << "matrix subtraction assigned from mtx1 + mt3:\n" << subtract;

	ComplexNumber cn1(1, 3);
	ComplexNumber cn2(5, 2);

	ComplexNumber cnMult = cn1 * cn2;
	cout << "Real: " << cnMult.get_real() << ", Imaginary: " << cnMult.get_imaginary() << "\n\n";

	Matrix<ComplexNumber> mtxCN1;
	ComplexNumber cn3(9, 1);
	mtxCN1.set_element(0, 0, cn1);
	mtxCN1.set_element(1, 1, cn2);
	mtxCN1.set_element(2, 2, cn3);

	Matrix<ComplexNumber> mtxCN2;
	ComplexNumber cn4(2, 6);
	ComplexNumber cn5(4, 4);
	ComplexNumber cn6(8, 2);
	mtxCN2.set_element(0, 0, cn4);
	mtxCN2.set_element(1, 1, cn5);
	mtxCN2.set_element(2, 2, cn6);

	cout << "matrix CN1:\n" << mtxCN1;
	cout << "matrix CN2:\n" << mtxCN2;

	Matrix<ComplexNumber> mtxCNMult = mtxCN1 * mtxCN2;
	cout << "matrix CN assigned from matrix CN1 * matrix CN2:\n" << mtxCNMult;

	Matrix<ComplexNumber> mtxCNSum = mtxCN1 + mtxCN2;
	cout << "matrix CN assigned from matrix CN1 + matrix CN2:\n" << mtxCNSum;

	Matrix<ComplexNumber> mtxCNSubtract = mtxCN1 - mtxCN2;
	cout << "matrix CN assigned from matrix CN1 - matrix CN2:\n" << mtxCNSubtract;

	int x;
	cin >> x;
	return 0;
}

