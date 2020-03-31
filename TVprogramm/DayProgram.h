#pragma once
#include <list>
#include "TvProgram.h"
class DayProgram
{
private:
	list<TvProgram*> tvP;
public:
	DayProgram();
	~DayProgram();

	void addProg(TvProgram*obj);
	void showAll();
};

