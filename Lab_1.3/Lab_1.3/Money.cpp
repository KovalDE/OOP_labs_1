#include "Money.h"
#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
using namespace std;

void Money::Init(long valueGr, unsigned int valueCop)
{
	if (valueGr >= 0 && valueCop >= 0)
	{
		gr = valueGr;
		cop = valueCop;
	}
	else
	{
		cout << "EROR"<<endl;
	}
	while (valueCop >= 100)
	{
		valueCop -= 100;
		valueGr += 1;
	}
	gr = valueGr;
	cop = valueCop;
}

void Money::Read()
{
	long valueGr;
	unsigned int valueCop;
		cout << "Input value:" << endl;
		cout << " Grivnas  = "; cin >> valueGr;
		cout << " Kopiikas = "; cin >> valueCop;
		Init(valueGr, valueCop);
}

string Money::toString() const
{
	stringstream sout;
	sout << gr << '.' << cop << endl;
	return sout.str();
}

void Money::Display()
{
	cout << endl;
	cout << "Summa = " << gr << '.' << cop<<endl;
}

Money Substr(Money l, Money r)
{
	Money t;
	if (l.gr > r.gr)
	{
		if(l.cop<r.cop) 
		{
			l.cop += 100;
			l.gr -= 1;
		}
		t.cop = l.cop - r.cop;
		t.gr = l.gr - r.gr;
	}
	else
	{	
		if (r.cop < l.cop)
		{
			r.cop += 100;
			r.gr -= 1;
		}
		t.cop = r.cop - l.cop;
		t.gr = r.gr - l.gr;
	}
	return t;
}

Money Mult(Money l,double a)
{
	Money t;
	t.gr = l.gr * a;
	t.cop = l.cop * a + (((l.gr*a)-t.gr)*100);
	while (t.cop >= 100)
	{
		t.cop-=100;
		t.gr += 1;
	}
	return t;
}

void Money::Compar(Money l, Money r)
{
	cout << endl;
	if (l.gr > r.gr)
		cout << "Bigger 1 summ: " << l.gr << '.' << l.cop<<endl;
	else if (l.gr < r.gr)
		cout << "Bigger 2 summ: " << r.gr << '.' << r.cop << endl;
	else if (l.gr = r.gr)
	{
		if(l.cop>r.cop)
		    cout << "Bigger 1 summ: " << l.gr << '.' << l.cop << endl;
		if (l.cop < r.cop)
			cout << "Bigger 2 summ: " << r.gr << '.' << r.cop << endl;
	}
}
