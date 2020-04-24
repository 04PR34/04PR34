#include "Children.h"

Children::Children()
{
	minAge = 0;
	maxAge = 0;
}

Children::Children(string name, string time, int minAge, int maxAge) : TvProgram(name, time)
{
	this->minAge = minAge;
	this->maxAge = maxAge;
}

Children::~Children()
{
}

void Children::setMinAge(int minAge)
{
	this->minAge = minAge;
}

int Children::getMinAge() const &
{
	return minAge;
}

void Children::setMaxAge(int maxAge)
{
	this->maxAge = maxAge;
}

int Children::getMaxAge() const &
{
	return maxAge;
}

void Children::show()
{
	cout << "Name: " << name << endl;
	cout << "Time: " << time << endl;
	cout << "Min age: " << minAge << endl;
	cout << "Max age: " << maxAge << endl;
	cout << "=================================" << endl;
}

string Children::toString()
{
	string tmp = "Name :" + name + " Time: " + time + " Min age: " + to_string(minAge) + " Max age :" + to_string(maxAge);
	return tmp;
}

string Children::type()
{
	return "Children";
}
