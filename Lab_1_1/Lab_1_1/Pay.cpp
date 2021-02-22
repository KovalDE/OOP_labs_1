#include "Pay.h"
#include <iostream>
using namespace std;

double Pay::GetFirst() const
{
	return first;
}

int Pay::GetSecond() const
{
	return second;
}

void Pay::SetFirst(double value)
{
	if (value > 0)
		first = value;
	else
		first = 0;
}

void Pay::SetSecond(int value)
{
	if (value > 0)
		second = value;
	else
		second = 0;
}

bool Pay::Init(double f, int s)
{
	if (f > 0 && s > 0)
	{
		SetFirst(f);
		SetSecond(s);
		return true;
	}
	else
		return false;
}

void Pay::Read()
{
	double f;
	int s;
	do
	{
		cout << "first  = ? "; cin >> f;
		cout << "second = ? "; cin >> s;
	} while (!Init(f, s));
}

void Pay::Display()
{
	cout << "first  = " << first << endl;
	cout << "second = " << second << endl;
}

double Pay::summa(int k)
{
	return first / k * second;
}
