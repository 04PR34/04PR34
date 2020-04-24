#pragma once
#include "TvProgram.h"
#include <iostream>
#include <string>
using namespace std;
class Education : public TvProgram
{
protected:
	string science;

public:
	Education();
	Education(string name, string time, string science);
	~Education();

	void setScience(string science);
	string getScience()const&;

	virtual void show();
	virtual string toString();
	virtual string type();
};

