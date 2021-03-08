#include "Book.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

void Book::Init(string namev, string authorv, int datev)
{
	setName(namev);
	setAuthor(author);
	setDate(datev);
}

void Book::Read()
{
	cout << "Name   = ";cin >> name;
	cout << "Author = ";cin >> author;
	cout << "Date   = ";cin >> date;
	cout << endl;
	Init(name, author, date);
}

string Book::toString() const
{
	stringstream sout;
	sout << name<<"    "<<author<<"    "<<date<< endl;
	return sout.str();
}

void Book::Display() const
{
	cout << toString()<<endl;
}


