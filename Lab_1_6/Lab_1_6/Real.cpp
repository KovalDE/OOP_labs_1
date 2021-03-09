#include "Real.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void Real::Init(Real::Number number)
{
	setNumber(number);
}
void Real::Display() const
{
	number.Display(); 
}

void Real::Read()
{
	Real::Number m;
	cout << endl;
	m.Read(); 
	Init(m);
}

void Real::Number::Init(double a)
{
	setDouble(a);
}

string Real::Number::toString() const
{
	stringstream sout;
	sout << "Number = " << a << endl;
	return sout.str();
}

void Real::Number::Display() const
{
	cout << endl;
	cout << toString();
}

void Real::Number::Read()
{
	double a;
	cout << endl;
	cout << "number = ? "; cin >> a;
	Init(a);
}

Real Real::Sqrt(int n)
{
	Real t;
	t.number.setDouble(pow(number.getDouble(), 1. / n));
	return t;
}

Real Real::PiPower(int n)
{
	Real t;
	double pi = atan(1) * 4;
	t.number.setDouble(pow(pi, n));
	return t;
}


Real::Number Mult(Real::Number b, Real::Number c)
{
	Real::Number t;
	t.a = b.a * c.a;
	return t;
}

Real::Number Substr(Real::Number b, Real::Number c)
{
	Real::Number t;
	if (b.a >= c.a) t.a = b.a - c.a;
	else t.a = c.a - b.a;
	return t;
}