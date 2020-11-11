
#ifndef COMPUTER_H
#define COMPUTER_H

#include <string>
#include <iostream>
#include <fstream>
#include "main.cpp"

using namespace std;


class computer
{
public:
	void Arr();
	int A1();
	int A2();
	computer kek();
	char Rek;
	int get_store();
	int get_price();
	string get_cpu_brand();
	string get_motherboard();
	string get_videocard();
	double get_cpu_clock();
	bool get_wifi();

private:
	string cpu_brand;
	double cpu_clock;
	string motherboard;
	string harddrive;
	string videocard;
	bool wifi;
	int price;
	int store;

};

int computer::A1()
{
	for (int i = 1; i < A; i++)
	{
		R = store;
		D = price;
		Sum1 = Sum1 + (D * R);
	}
	int n[A];
	for (int i = 1; i < A; i++)
	{
		F = price;
		if (F > 20000 and F < 30000)
		{
			n[i] = i;
		}
		else
		{
			n[i] = -34;
		}
	}
	for (int i = 1; i < A; i++)
	{
		if (n[i] != -34)
		{
			P = cpu_clock;
			if (P > Pop)
			{
				Pop = P;
				Num = i;
			}
		}
	}
	return Sum1;
}
int computer::A2()
{
	int n[A];
	for (int i = 1; i < A; i++)
	{
		F = price;
		if (F > 20000 and F < 30000)
		{
			n[i] = i;
		}
		else
		{
			n[i] = -34;
		}
	}
	for (int i = 1; i < A; i++)
	{
		if (n[i] != -34)
		{
			P = cpu_clock;
			if (P > Pop)
			{
				Pop = P;
				Num = i;
			}
		}
	}
	return Num;
}
double computer::get_cpuClock()
{
	return cpu_clock;
}
int computer::get_price()
{
	return price;
}
int computer::get_store()
{
	return store;
}



#endif 
