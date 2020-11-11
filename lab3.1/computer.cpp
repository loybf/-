#include "computer.h"
#include <iostream>
#include "computer.h"

using namespace std;





int computer::get_store()
{
	return store;
}
int computer::get_price()
{
	return price;
}
string computer::get_cpu_brand()
{
	return cpu_brand;
}
string computer::get_motherboard()
{
	return motherboard;
}
string computer::get_videocard()
{
	return videocard;
}
double computer::get_cpu_clock()
{
	return cpu_clock;
}
bool computer::get_wifi()
{
	return wifi;
}
