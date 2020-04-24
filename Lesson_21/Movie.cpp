#include "Movie.h"

Movie::Movie()
{
	directBox = "none";
	year = 0;
}

Movie::Movie(string name, string time, string directBox, int year) : TvProgram(name, time)
{
	this->directBox = directBox;
	this->year = year;
}

Movie::~Movie()
{
}

void Movie::setDirectBox(string directBox)
{
	this->directBox = directBox;
}

string Movie::getDirectBox()const&
{
	return directBox;
}

void Movie::setYear(int year)
{
	this->year = year;
}

int Movie::getYear()const&
{
	return year;
}

void Movie::show()
{
	cout << "Name: " << name << endl;
	cout << "Time: " << time << endl;
	cout << "Direct box: " << directBox << endl;
	cout << "Year: " << year << endl;
	cout << "=================================" << endl;
}

string Movie::toString()
{
	string tmp = "Name :" + name + " Time: " + time + " Direct box: " + directBox + " Year :" + to_string(year);
	return tmp;
}

string Movie::type()
{
	return "Movie";
}
