#pragma once
#include <string>
using namespace std;

class Book
{
	string name;
	string author;
	int date;
public:
	string getName() const { return name; }
	void setName(string value) { name = value; }
	string getAuthor() const { return author; }
	void setAuthor(string value) { author = value; }
	int getDate() const  { return date; }
	void setDate(int value) { date = value; }

	void Init(string namev, string authorv, int datev);
	void Read();
	void Display() const;
	string toString() const;
};

