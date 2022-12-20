#pragma once
#ifndef  STOCK02_H_
#define STOCK02_H_
#include <string>
#include <iostream>
class Stock
{
public:
	Stock();
	Stock(const std::string name = "CATL", double num = 0, double pr = 0);
	~Stock();//do nothign distructor
	void buy(long num,double pr);
	void sell(long num, double pr);
	void update(double price);
	void show() const;
	const Stock & top_val(const Stock &st) const;
private:
	std::string company;//公司
	double share;//股份
	double share_val;//股价
	double tot_val;//总价值
	inline void TotalWorth() { tot_val = share * share_val; };

};



#endif // ! STOCK02_H_
