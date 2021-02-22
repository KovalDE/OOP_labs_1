#include "Pay.h"
#include <iostream>
using namespace std;

Pay makePay(double f, int s)
{
	Pay p;
	if (!p.Init(f, s))
		cout << "ERROR" << endl;
	return p;
	
}

int main() 
{
	Pay p;
	p.Read();
	p.Display();

	int k;
	cout << "k = ? "; cin >> k;
	cout << "summa = " << p.summa(k)<<endl;
	cout << endl;

	double f;
	int s;
	cout << "f = ? "; cin >> f;
	cout << "s = ? "; cin >> s;
	p = makePay(f, s);
	p.Display();

	return 0;
}

