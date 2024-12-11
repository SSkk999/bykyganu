#include "head.h"

peopl::peopl(string name, int pri) :name{ name } {
	if (pri == 1)
	{
		prioritet prioritetick;
		prioritetick.lite;
		prio = 1;
	}
	else if(pri == 2)
	{
		prioritet prioritetick;
		prioritetick.midl;
		prio = 2;
	}
	else if(pri == 3)
	{
		prioritet prioritetick;
		prioritetick.hi;
		prio = 3;
	}
	else {
		cout << "toko 3 proiriteta" << "\n";
		return;
	}
}

peopl::~peopl()
{
}

int peopl::pri()
{

	return prio;
}

int peopl::time()
{
	srand(time());
	rnd = rand() / 60;
	return rnd;
}

void peopl::name1()
{
	cout <<  name;
}
