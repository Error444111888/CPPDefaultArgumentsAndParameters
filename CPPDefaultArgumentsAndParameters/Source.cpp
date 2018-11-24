// Default Arguments and Parameters

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

// These are the default values of each parameter
double BTC24hrTransVolume(double BuyVolume = 1, double SellVolume = 1, double BTC = 1);


int main()
{
	srand(time(0));


	cout << BTC24hrTransVolume(2,2, 1 + (rand() % 1000000) * 0.473) << endl;
	
}

double BTC24hrTransVolume(double BuyVolume, double SellVolume, double BTC)
{
	cout << "BTC price is set to be " << BTC << endl;
	return (BuyVolume + SellVolume) * BTC;
}