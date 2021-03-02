#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <sstream> 
#include "Money.h"
using namespace std;
int main()
{
	Money l, r;
	double a;
	l.Read();
	l.Display();
	cout << endl;
	r.Read();
	r.Display();
	Money t = Substr(l, r);
	cout << endl << "subtraction = "<< t.GetGr()<<'.'<<t.GetCop()<<endl;
	cout << "multiplier: ";cin >> a;
	t = Mult(l, a);
	cout << "Result = " << t.GetGr() << '.' << t.GetCop()<<endl;
	t = Mult(r, a);
	cout << "Result = " << t.GetGr() << '.' << t.GetCop();
	cout << endl;
	t.Compar(l, r);
	cout << endl;

	cout << "ToString: " << endl;
	string s1;
	s1.assign(l.toString());
	cout << "Summa = " << s1;
	cout << endl;

	cout << "ToString: " << endl;
	string s2;
	s2.assign(r.toString());
	cout << "Summa = " << s2;
	cout << endl;

	return 0;
}