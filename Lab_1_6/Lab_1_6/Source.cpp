#include "Real.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	Real s;
	s.Read();
	s.Display();
	int n;
	cout << "N: "; cin >> n;
	cout << "SQRT : ";
	s.Sqrt(n).Display();
	cout << endl;
	cout << "Pi in power of number : ";
	Real::PiPower(n).Display();
	cout << endl;
	cout << endl;

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