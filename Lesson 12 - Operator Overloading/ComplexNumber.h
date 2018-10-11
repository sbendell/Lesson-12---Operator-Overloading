#pragma once
class ComplexNumber
{
public:
	ComplexNumber();
	~ComplexNumber();
	friend ComplexNumber operator*(const ComplexNumber& a, const ComplexNumber& b);
	template <typename E>
	friend ComplexNumber operator+(const ComplexNumber& a, const ComplexNumber& b);
	template <typename E>
	friend ComplexNumber operator-(const ComplexNumber& a, const ComplexNumber& b);
private:
	int real, imaginary;
};

