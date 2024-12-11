#pragma once
#include <iostream>
using namespace std;
class peopl 
{
	string name;
	struct prioritet
	{
		int hi  = 1;
		int midl = 2 ;
		int lite  = 3;

	};
	int rnd = 0;
	int prio = 0;
public:
	peopl() = delete;
	peopl(string, int);
	~peopl();
	int pri();
	int time();
	void name1();
};

