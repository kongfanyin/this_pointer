#define _CRT_SECURE_NO_WARNINGS 1

#include"this.h"
#include<string>
#include<fstream>
#include<iostream>

const int STKS = 4;
int main(char argc, char** argv)
{
	//create an arry of initialized objects
	//参数列表初始化C++11
	Stock stocks[STKS]=
	{
	{"Nano smart",12,20.0},
	{"boffo objects",200,40.0},
	{"monoli obelisk",50,28.8},
	{"Fleep enterprises",268,483}
	};
	//构造函数初始化
	/*Stock stocks[STKS] =
	{
	Stock("Nano smart",12,20.0),
	Stock("boffo objects",200,40.0),
	Stock("monoli obelisk",50,28.8),
	Stock("Fleep enterprises",268,483)
	};*/
	std::cout << "Stock holding: \n";
	for (int st = 0; st < STKS; st++)
	{
		stocks[st].show();
	}
	//Set pointer to first element
	const Stock* top = &stocks[0];
	for (int i = 1; i <=STKS; i++)
	{
	//top = (top->top_val)(stocks[i]);
		top =&top->top_val(stocks[i]);
	}
	//now top pointer to the most valuabe stocks
	std::cout << "\nMost valueble hoiding: \n";
	top->show();
	return 0;
}