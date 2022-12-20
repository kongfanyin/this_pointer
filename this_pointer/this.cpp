#define _CRT_SECURE_NO_WARNINGS 1
#include "this.h"
#include<iostream>
using std::string;
using std::cout;
using std::endl;
using std::ios_base;
Stock::Stock(const std::string name, double num, double pr)//首次购买，初始化
{
	company = name;
	share = num;
	share_val = pr;
	TotalWorth();
}
void Stock::buy(long num, double pr)
{
	if (num < 0)
	{
		cout << "Numbers of purchase can't be nagetive." << "Transation is aborted.\n";
	}
	else
	{
		share += num;
		share_val = pr;
		TotalWorth();
	}
}
void Stock::sell(long num, double pr)
{
	if (num < 0)
	{
		cout << "Numbers of sold can't be nagetive." << "Transation is aborted.\n";
	}
	else if(num>share)
	{
		cout << "you can't sold more than you have." << "Transation is aborted.\n";
	}
	else
	{
		share -= num;
		share_val = pr;
		TotalWorth();
	}
}
void Stock::update(double price)
{
	share_val = price;
	TotalWorth();
}
void Stock::show() const
{
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec=cout.precision(3);
	cout << "company: " << company << " shares: " << share << "\n";
	cout << "share price: $" << share_val << endl;
	//set format to #.##
	cout.precision(2);
	cout << "Total worth: $" << tot_val<<'\n';
	//restor original foamt
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);

}
const Stock & Stock::top_val(const Stock &st) const
{
	/*if (st.tot_val> tot_val)
	{
		return st;
	}
	else
	{
		return *this;
	}*/
	return st.tot_val > tot_val ? st : *this;
}

Stock::Stock()
{
	cout << company << "默认无参构造函数调用\n";
	company = "no name";
	share = 0;
	share_val = 0;
}

Stock::~Stock()
{
	cout<<"Bye: " << company << "析构函数调用\n";
}
