#pragma once

class Matrix
{
private:
	int row,col;	
	float** ptr;
public:
	int GetRow() const;
	int GetCol() const;
	float GetIJ(int row, int col);
	void SetRow(int value);
	void SetCol(int value);
	void SetIJ(float value, int row,int col);
	bool Init(int row, int col);
	void Read();
	void Display();
	void Dispose();
	float Min();
	float Max();
	double summa();
};

