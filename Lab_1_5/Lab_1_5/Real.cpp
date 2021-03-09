#include "Real.h"
#include <iostream>

using namespace std;

void Real::Init(Number number)
{
	setNumber(number);
}
void Real::Display() const
{
	cout << endl;
	number.Display(); 
}
void Real::Read()
{
	Number n;
	n.Read(); 
	Init(n);
}

Real Real::Sqrt(int n)
{
	Real t;
	t.number.setDouble(pow(number.getDouble(),1./n));
	return t;
}

Real Real::PiPower(int n)
{
	Real t;
	double pi = atan(1)*4;
	t.number.setDouble(pow(pi,n));
	return t;
}
