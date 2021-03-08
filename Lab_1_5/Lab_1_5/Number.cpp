#include "Number.h"
#include <string>
#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

void Number::Init(double a)
{
	setDouble(a);
}
void Number::Display() const
{
	cout << endl;
	cout << toString();
}
void Number::Read()
{
	double a;
	cout << endl;
	cout << "number = ? "; cin >> a;
	Init(a);
}

string Number::toString() const
{
	stringstream sout;
	sout <<"Number = "<<a << endl;
	return sout.str();
}

Number Mult(Number b, Number c)
{
	Number t;
	t.a = b.a * c.a;
	return t;
}

Number Substr(Number b, Number c)
{
	Number t;
	if (b.a >= c.a) t.a = b.a - c.a;
	else t.a = c.a - b.a;
	return t;
}

Number Number::SqrtAction(Number b)
{
	Number res;
	res.a = sqrt(b.a);
	return res;
}

Number Number::PiPow(Number b)
{
	Number res;
	double pi = 3.14159;
	res.a = pow(pi,b.a);
	return res;
}