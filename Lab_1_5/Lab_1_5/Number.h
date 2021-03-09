#pragma once
#include <string>
#include <sstream>

using namespace std;

class Number
{
	double a;
public:
	double getDouble() const { return a; };
	void setDouble(double a) { this->a = a; };

	void Init(double a);
	void Display() const;
	void Read();
	string toString() const;

	friend Number Mult(Number b, Number c);
	friend Number Substr(Number b, Number c);

};

