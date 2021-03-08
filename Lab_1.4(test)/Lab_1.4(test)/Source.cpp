#include <iostream>
#include "Libr.h"
using namespace std;

int main()
{
	Library l;
	l.Read();
	int number = 0;
	int p = 0,k=0;
	string name, author;
	int date;
	int udal;
	do {
		cout << "1-Search book\n2-Erase book\n3-Add book\n4-Show library\n5-Exit\nNumber:";
		cin >> number;
		switch (number)
		{
		case 1:
            cout << "1-search by name\n2-search by author\n3-search by date\nNumber : ";
            cin >> p;
            if (p == 1)
            {
				cout << "Name = "; cin >> name;
				l.searchName(name);
            }
            if (p == 2)
            {
				cout << "Author = "; cin >> author;
				l.searchAuthor(author);
            }
            if (p == 3)
            {
				cout << "Date = "; cin >> date;
				l.searchDate(date);
            }
			break;
		case 2:
			cout << "Adress for erasing : " << l.getN() << endl;
			cin >> udal;
			l.Erase(udal);
			break;
		case 3:
			l.Add();
			break;
		case 4:
			l.Display();
			break;
		case 5:
			return 0;
		}
	} while (number != 5);

	return 0;
}