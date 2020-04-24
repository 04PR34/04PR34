#include "Show.h"

Show::Show()
{
	treme = "none";
}

Show::Show(string name, string time, string treme) : TvProgram(name, time)
{
	this->treme = treme;
}

Show::~Show()
{
	
}

void Show::setTreme(string treme)
{
	this->treme = treme;
}

string Show::getTreme() const &
{
	return treme;
}

void Show::show()
{
	cout << "Name: " << name << endl;
	cout << "Time: " << time << endl;
	cout << "Treme: " << treme << endl;
	cout << "=================================" << endl;
}

string Show::toString()
{
	string tmp = "Name :" + name + " Time: " + time + " Treme: " + treme;
	return tmp;
}

string Show::type()
{
	return "Show";
}
