#include "TvProgram.h"



TvProgram::TvProgram()
{
	name = "No name";
	time = "00:00:00";
}

TvProgram::TvProgram(string n, string t)
{
	time = t;
	name = n;
}


TvProgram::~TvProgram()
{
}

void TvProgram::setTime(string t)
{
	time = t;
}

string TvProgram::getTime()const&
{
	return time;
}

void TvProgram::setName(string n)
{
	name = n;
}

string TvProgram::getName()const&
{
	return name;
}
