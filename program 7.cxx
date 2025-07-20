#include<iostream>
using namespace std;
int main()
{
	long amount;
	int year;
	double rate;
	cout << "Enter intial amount=";
	cin >> amount;
	cout << "Enter number of years =";
	cin >> year;
	cout << "Enter your interest rate (percent per year )=";
	cin >> rate;
	for(int i=0;i<year;i++)
	{
		amount = amount+(amount*rate);
	}
	cout << "At the end of " << year <<" ,You will have "<<  amount  << " ruppes.";
	return 0;
}