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

Real::Number Real::Number::SqrtAction(Real::Number b)
{
	Real::Number res;
	res.a = sqrt(b.a);
	return res;
}

void Real::SqrtAction()
{
	Real::Number t = number.SqrtAction(number);
	cout << t.getDouble();
}

Real::Number Real::Number::PiPower(Real::Number b)
{
	Real::Number res;
	double pi = 3.14159;
	res.a = pow(pi, b.a);
	return res;
}

void Real::PiPower()
{
	Real::Number t = number.PiPower(number);
	cout << t.getDouble();
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