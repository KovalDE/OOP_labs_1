#include "Matrix.h"
#include <iostream>
using namespace std;
int Matrix::GetRow() const
{
	return row;
}

int Matrix::GetCol() const
{
	return col;
}

void Matrix::SetRow(int value)
{
	if (value > 0)
		row = value;
	else
		row = 0;
}

void Matrix::SetCol(int value)
{
	if (value > 0)
		col = value;
	else
		col = 0;
}

bool Matrix::Init(int row,int col)
{
	if (row > 0 && col > 0)
	{
		SetRow(row);
		SetCol(col);
		ptr = new float* [row];
	for(int count = 0; count<row; count++)
		ptr[count] = new float[col];
		return true;
	}
	else
		return false;
}

void Matrix::Dispose()
{
	for(int count = 0; count<row;count++)
	delete[] ptr[count];
}

float Matrix::GetIJ(int row, int col)
{
	return ptr[row][col];
}

void Matrix::SetIJ(float value, int row, int col)
{
	if (value > 0)
		ptr[row][col] = value;
	else
		ptr[row][col] = 0;
}

void Matrix::Read()
{
	
	int row,col;
	float r;
	do
	{
		cout << "Rows  = ? "; cin >> row;
		cout << "Columns = ? "; cin >> col;
	} while (!Init(row,col));

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++) 
		{
			cout << "Value ptr"<<"["<<i<<"]"<<" ["<<j<<"]"<<"  =  "; cin >> r;
			ptr[i][j] = r;
		}
	}
}

void Matrix::Display()
{
	cout << "Rows     = " << row << endl;
	cout << "Columns  = " << col << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			cout << ptr[i][j] << "  ";
		cout << endl;
	}
}

float Matrix::Min()
{
	float min = ptr[0][0];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			if (ptr[i][j] < min)
				min = ptr[i][j];
	}
	return min;
}

float Matrix::Max()
{
	float max = ptr[0][0];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			if (ptr[i][j] > max)
				max = ptr[i][j];
	}
	return max;
}
double Matrix::summa()
{
	double s = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			s += ptr[i][j];
	}
	return s;
}