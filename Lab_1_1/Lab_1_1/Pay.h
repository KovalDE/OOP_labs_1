#pragma once
class Pay
{
	double first;
	int second;
public:
	double GetFirst() const;
	int GetSecond() const;
	void SetFirst(double value);
	void SetSecond(int value);

	bool Init(double first, int second);
	void Read();
	void Display();

	double summa(int k);
};

