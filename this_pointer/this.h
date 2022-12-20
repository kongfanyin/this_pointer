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
	std::string company;//��˾
	double share;//�ɷ�
	double share_val;//�ɼ�
	double tot_val;//�ܼ�ֵ
	inline void TotalWorth() { tot_val = share * share_val; };

};



#endif // ! STOCK02_H_
