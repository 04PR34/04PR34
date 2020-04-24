#include <iostream>
#include "Children.h"
#include "Education.h"
#include "Show.h"
#include "Movie.h"
#include "DayProgram.h"
using namespace std;

int main()
{
	DayProgram dp;

	int menu;
	int menu2;

	string name;
	string time;
	string science;
	int minAge;
	int maxAge;
	string treme;
	string directBox;
	int year;
	string type;


	do
	{
		cout << "1 - Add programm" << endl;
		cout << "2 - Show all programms" << endl;
		cout << "3 - Search by" << endl;
		cout << ">>>";
		cin >> menu;
		system("cls");

		switch (menu)
		{
		case 1:
			do
			{
				cout << "1 - Add educational programm" << endl;
				cout << "2 - Add children programm" << endl;
				cout << "3 - Add show" << endl;
				cout << "4 - Add movie" << endl;
				cout << ">>>";
				cin >> menu2;
				system("cls");

				switch (menu2)
				{
				case 1:
					cout << "Name: ";
					cin >> name;
					cout << "Time: ";
					cin >> time;
					cout << "Science: ";
					cin >> science;
					dp.addProg(new Education(name, time, science));
					break;
				case 2:
					cout << "Name: ";
					cin >> name;
					cout << "Time: ";
					cin >> time;
					cout << "minAge: ";
					cin >> minAge;
					cout << "maxAge: ";
					cin >> maxAge;
					dp.addProg(new Children(name, time, minAge, maxAge));
					break;
				case 3:
					cout << "Name: ";
					cin >> name;
					cout << "Time: ";
					cin >> time;
					cout << "Treme: ";
					cin >> treme;
					dp.addProg(new Show(name, time, treme));
					break;
				case 4:
					cout << "Name: ";
					cin >> name;
					cout << "Time: ";
					cin >> time;
					cout << "Direct box: ";
					cin >> directBox;
					cout << "Year: ";
					cin >> year;
					dp.addProg(new Movie(name, time, directBox, year));
					break;
				}
			} while (menu2);
			break;
		case 2:
			dp.showAll();
			break;
		case 3:

			do
			{
				cout << "1 - Search by time" << endl;
				cout << "2 - Search by type" << endl;
				cout << ">>>";
				cin >> menu2;
				system("cls");

				switch (menu2)
				{
				case 1:
					cout << "Time(hh:mm:ss): ";
					cin >> time;
					dp.searchByTime(time);
					break;
				case 2:
					cout << "Type: ";
					cin >> type;
					dp.searchByType(type);
					break;
				}
			} while (menu2);
			break;
		}
	} while (menu);

	system("pause");
	return 0;
}