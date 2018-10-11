#include "stdafx.h"
#include "ComplexNumber.h"


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


ComplexNumber operator*(const ComplexNumber& a, const ComplexNumber& b) {
	ComplexNumber result;
	result.real = ((a.real * b.real) - (a.imaginary * b.imaginary));
	result.imaginary = ((a.imaginary * b.real) + (a.real * b.imaginary));
	return result;
}

ComplexNumber operator+(const ComplexNumber& a, const ComplexNumber& b) {
	ComplexNumber result;
	result.real = (a.real + b.real);
	return result;
}

ComplexNumber operator-(const ComplexNumber& a, const ComplexNumber& b) {
	ComplexNumber result;
	result.real = (a.real - b.real);
	return result;
}
