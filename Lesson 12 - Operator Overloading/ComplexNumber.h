#pragma once
#include <iostream>

using namespace std;

class ComplexNumber
{
public:
	ComplexNumber(int real, int imaginary);
	ComplexNumber();
	~ComplexNumber();
	ComplexNumber& ComplexNumber::operator=(const ComplexNumber& rhs);
	void ComplexNumber::operator+=(const ComplexNumber& rhs);
	friend ComplexNumber operator*(const ComplexNumber& a, const ComplexNumber& b);
	friend ComplexNumber operator+(const ComplexNumber& a, const ComplexNumber& b);
	friend ComplexNumber operator-(const ComplexNumber& a, const ComplexNumber& b);
	friend ostream& operator<<(ostream& ostr, const ComplexNumber& cn);
	int get_real() const;
	int get_imaginary() const;
private:
	int real, imaginary;
};

