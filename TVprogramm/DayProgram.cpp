#include "DayProgram.h"



DayProgram::DayProgram()
{
}


DayProgram::~DayProgram()
{
}

void DayProgram::addProg(TvProgram*obj)
{
	tvP.push_back(obj);
}

void DayProgram::showAll()
{
	for (list<TvProgram*>::iterator i = tvP.begin();i!=tvP.end();i++)
	{
		(*i)->show();
	}
}
