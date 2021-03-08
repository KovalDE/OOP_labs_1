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

void Real::SqrtAction()
{
	Number t;
	t = number.SqrtAction(number);
	cout << t.getDouble();
}

void Real::PiPower()
{
	Number t;
	t = number.PiPow(number);
	cout << t.getDouble();
}
