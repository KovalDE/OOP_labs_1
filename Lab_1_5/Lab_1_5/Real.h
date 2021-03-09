#pragma once
#include "Number.h"

class Real
{
	Number number;
public:
		Number getNumber() { return number; }
		void setNumber(Number number) { this->number = number; }
		void Init(Number number);
		void Display() const;
		void Read();

		Real Sqrt(int n);
		static Real PiPower(int n);
};



