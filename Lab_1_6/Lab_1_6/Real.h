#pragma once
#include <string>
using namespace std;
class Real
{
public:
	class Number
	{
	private:
		double a;
	public:
		
		double getDouble() const { return a; }
		void setDouble(double a) { this->a = a; }
		void Init(double a);
		void Display() const;
		void Read();
		string toString() const;

		friend Number Mult(Number b, Number c);
		friend Number Substr(Number b, Number c);

		Number SqrtAction(Number b);
		Number PiPower(Number b);
	};

	Number getNumber() const { return number; }
	void setNumber(Number number) { this->number = number; }
	void Init(Number number);
	void Display() const;
	void Read();

	void SqrtAction();
	void PiPower();
private:
	Number number;
};
