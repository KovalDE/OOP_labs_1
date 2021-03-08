#include "Real.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	Real s;
	s.Read();
	s.Display();
	cout << "SQRT: ";
	s.SqrtAction();
	cout << endl << endl;
	cout << "Pi int power of number : ";
	s.PiPower();

	Real::Number l, r;
	l.Read();
	r.Read();
	cout << endl;
	Real::Number res;
	res = Mult(l, r);
	cout << "Result of multiplier   = " << res.getDouble() << endl;
	res = Substr(l, r);
	cout << "Result of substraction = " << res.getDouble();
	return 0;
}