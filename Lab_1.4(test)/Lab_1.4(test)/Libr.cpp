#include "Libr.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

void Library::Init(int n)
{
	this->n = n;
	books = new Book[n]();
}

void Library::Read()
{
	int n;
	cout << "Input books count:"; cin >> n;
	Init(n);
	for (int i = 0;i < n;i++)
	{
		books[i].Read();
	}
}

string Library::toString() const
{
	stringstream sout;
	for (int i = 0;i < n;i++)
	{
		sout << books[i].toString();
	}
	return sout.str();
}

void Library::Display()
{
	for (int i = 0;i < n;i++)
	{
		books[i].Display();
	}
}

void Library::searchName(string valuename)
{
	int f = 0;
	for (int i = 0;i < n;i++)
	{
		if (valuename == books[i].getName())
		{
			cout << books[i].getName() <<"    "<< books[i].getAuthor() <<"    "<< books[i].getDate()<<endl;
			f++;
		}
	}
	if (f == 0)
		cout << "Book is not find!";
}

void Library::searchAuthor(string valueauthor)
{
	int f = 0;
	for (int i = 0;i < n;i++)
	{
		if (valueauthor == books[i].getAuthor())
		{
			cout << books[i].getName() << "    " << books[i].getAuthor() << "    " << books[i].getDate() << endl;
			f++;
		}
	}
	if (f == 0)
		cout << "Book is not find!";
}

void Library::searchDate(int valuedate)
{
	int f = 0;
	for (int i = 0;i < n;i++)
	{
		if (valuedate == books[i].getDate())
		{
			cout << books[i].getName() << "    " << books[i].getAuthor() << "    " << books[i].getDate() << endl;
			f++;
		}
	}
	if (f == 0)
		cout << "Book is not find!";
}

Book* Library::Create(int N)
{
	string a = "0";
	Book* arr = new Book[N];
	for (int i = 0;i < N;i++)
		arr[i].Init(a,a,0);
	return arr;
}

void Library::Destroy(Book* arr)
{
	delete[] arr;
}

bool Library::Erase(int udal)
{
	if (!(udal >= 0 && udal < n)) return false;
	udal -= 1;
	Book* temp = Create(n - 1);
		for (int i = 0; i < udal; i++)
			temp[i] = books[i];
		for (int i = udal + 1; i < n; i++)
			temp[i - 1] = books[i];
	Destroy(books);
	(n)--;
	books = new Book[n];
	for (int i = 0; i < n; i++)
		books[i] = temp[i];
	Destroy(temp);
	return true;
}

void Library::Add()
{
	int i = 0;
	string namev, authorv;
	int datev;
	Book* temp = Create(n + 1);
	for ( i = 0; i < n+1; i++)
	{
		if (i == n)
		{
			cout << "Name   = "; cin >> namev;
			cout << "Author = "; cin >> authorv;
			cout << "Date   = "; cin >> datev;
			temp[i].setName(namev);
			temp[i].setAuthor(authorv);
			temp[i].setDate(datev);
		}
			else temp[i] = books[i];
	}
	Destroy(books);
	(n)++;
	books = new Book[n]();
	for (int i = 0; i < n; i++)
		books[i] = temp[i];
	Destroy(temp);
}

