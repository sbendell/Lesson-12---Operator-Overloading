#pragma once
class ComplexNumber
{
public:
	ComplexNumber(int real, int imaginary);
	ComplexNumber();
	~ComplexNumber();
	friend ComplexNumber operator*(const ComplexNumber& a, const ComplexNumber& b);
	friend ComplexNumber operator+(const ComplexNumber& a, const ComplexNumber& b);
	friend ComplexNumber operator-(const ComplexNumber& a, const ComplexNumber& b);
	int get_real() const;
	int get_imaginary() const;
private:
	int real, imaginary;
};

