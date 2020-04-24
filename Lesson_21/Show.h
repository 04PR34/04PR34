#pragma once
#include "TvProgram.h"
#include <iostream>
#include <string>
using namespace std;
class Show : public TvProgram
{
protected:
	string treme;

public:
	Show();
	Show(string name, string time, string treme);
	~Show();

	void setTreme(string treme);
	string getTreme()const&;

	virtual void show();
	virtual string toString();
	virtual string type();
};

