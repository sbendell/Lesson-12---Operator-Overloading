#include "stdafx.h"
#include "ComplexNumber.h"

using namespace std;

ComplexNumber::ComplexNumber(int real, int imaginary):
	real(real),
	imaginary(imaginary)
{
}

ComplexNumber::ComplexNumber()
{
}

ComplexNumber::~ComplexNumber()
{
}

int ComplexNumber::get_real() const {
	return real;
}

int ComplexNumber::get_imaginary() const {
	return imaginary;
}

ComplexNumber& ComplexNumber::operator=(const ComplexNumber& rhs) {
	real = rhs.get_real();
	imaginary = rhs.get_imaginary();
	return *this;
}

void ComplexNumber::operator+=(const ComplexNumber& rhs) {
	*this = *this + rhs;
}

ComplexNumber operator*(const ComplexNumber& a, const ComplexNumber& b) {
	ComplexNumber result;
	result.real = ((a.real * b.real) - (a.imaginary * b.imaginary));
	result.imaginary = ((a.imaginary * b.real) + (a.real * b.imaginary));
	return result;
}

ComplexNumber operator+(const ComplexNumber& a, const ComplexNumber& b) {
	ComplexNumber result;
	result.real = (a.real + b.real);
	result.imaginary = (a.imaginary + b.imaginary);
	return result;
}

ComplexNumber operator-(const ComplexNumber& a, const ComplexNumber& b) {
	ComplexNumber result;
	result.real = (a.real - b.real);
	result.imaginary = (a.imaginary - b.imaginary);
	return result;
}

ostream& operator<<(ostream& ostr, const ComplexNumber& cn) {
	ostr << "Real: " << cn.get_real() << ", Imaginary: " << cn.get_imaginary();
	return ostr;
}
