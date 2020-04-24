#pragma once
#include "TvProgram.h"
#include <iostream>
using namespace std;
class Children : public TvProgram
{
protected:
	int minAge;
	int maxAge;

public:
	Children();
	Children(string name, string time, int minAge, int maxAge);
	~Children();

	void setMinAge(int minAge);
	int getMinAge()const&;

	void setMaxAge(int maxAge);
	int getMaxAge()const&;

	virtual void show();
	virtual string toString();
	virtual string type();
};

