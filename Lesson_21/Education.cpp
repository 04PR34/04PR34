#include "Education.h"

Education::Education()
{
	science = "none";
}

Education::Education(string name, string time, string science) : TvProgram(name, time)
{
	this->science = science;
}

Education::~Education()
{
}

void Education::setScience(string science)
{
	this->science = science;
}

string Education::getScience() const &
{
	return science;
}

void Education::show()
{
	cout << "Name: " << name << endl;
	cout << "Time: " << time << endl;
	cout << "Science: " << science << endl;
	cout << "=================================" << endl;
}

string Education::toString()
{
	string tmp = "Name :" + name + " Time: " + time + " Science: " + science;
	return tmp;
}

string Education::type()
{
	return "Education";
}
