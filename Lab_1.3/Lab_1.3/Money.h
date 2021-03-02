#pragma once
#include <string>
#include <sstream> 
using namespace std;
class Money
{
	long gr;
	unsigned int cop;
public:
	double GetGr() const { return gr; }
	double GetCop() const { return cop; }
	void SetGR(long value) { gr = value; }
	void SetCop(unsigned int value) { cop = value; }
	void Init(long, unsigned int);
	void Read();
	void Display();
	string toString() const;
	friend Money Substr(Money l, Money r);
	friend Money Mult(Money l,double a);
	void Compar(Money l, Money r);
};

