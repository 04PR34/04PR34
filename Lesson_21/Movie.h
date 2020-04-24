#pragma once
#include "TvProgram.h"
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class Movie : public TvProgram
{
protected:
	string directBox;
	int year;

public:
	Movie();
	Movie(string name, string time, string directBox, int year);
	~Movie();

	void setDirectBox(string directBox);
	string getDirectBox()const&;

	void setYear(int year);
	int getYear()const&;

	virtual void show();
	virtual string toString();
	virtual string type();
};

