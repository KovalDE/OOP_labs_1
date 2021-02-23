#include "Matrix.h"
#include <iostream>
using namespace std;
Matrix makeMatrix(int row, int col)
{
	Matrix p;
	if (!p.Init(row,col))
		cout << "ERROR" << endl;
	return p;

}
int main()
{
	Matrix a;
	a.Read();
	cout << endl;
	a.Display();
	
	cout << endl << "Min number: " << a.Min()<<endl;
	cout << "Max number: " << a.Max() << endl;
	cout << "Summa of all number: " << a.summa() << endl;
	cout << endl;

	Matrix p;
	int row, col;
	cout << "rows    = ? "; cin >> row;
	cout << "columns = ? "; cin >> col;
	p = makeMatrix(row, col);

	a.Dispose();
	p.Dispose();
}