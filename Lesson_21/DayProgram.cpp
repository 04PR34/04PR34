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

void DayProgram::searchByTime(string time)
{
	for (list<TvProgram*>::iterator i = tvP.begin(); i != tvP.end(); i++)
	{
		if ((*i)->getTime() == time)
		{
			(*i)->show();
		}
	}
}

void DayProgram::searchByType(string type)
{
	for (list<TvProgram*>::iterator i = tvP.begin(); i != tvP.end(); i++)
	{
		if ((*i)->type() == type)
		{
			(*i)->show();
		}
	}
}
