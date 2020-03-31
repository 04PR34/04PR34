#pragma once
#include <iostream>
#include <string>
using namespace std;
class TvProgram
{
protected:
	string name;
	string time;
public:
	TvProgram();
	TvProgram(string n,string t);
	~TvProgram();

	void setTime(string t);
	string getTime()const&;

	void setName(string n);
	string getName()const&;

	virtual string toString()=0;
	virtual void show()=0;
};

