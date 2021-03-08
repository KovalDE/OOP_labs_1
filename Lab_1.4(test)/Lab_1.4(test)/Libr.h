#pragma once
#include "Book.h"

class Library
{
	Book* books;
	int n;
public:
	int getN() const { return n; }
	void setN(int value) { n = value; }

	void Init(int n);
	void Read();
	void Display();
	string toString() const;

	void searchName(string valuename);
	void searchAuthor(string valueauthor);
	void searchDate(int valuedate);

	Book* Create(int N);
	void Destroy(Book* arr);
	void Add();
	bool Erase(int udal);
};

