#include<iostream>
using namespace std;
int main()
{
	int response;
	int temperature;
	cout <<"\nType: \n1-convert fahrenheit to celsius";
	cout <<"\n 2- celsius to fahrenheit\n";	cout << "Enter type=" ;
	cin >> response;
	if(response==1)
	{
		cout << "Enter a temperature in celsius=" ;
		cin >> temperature;
		cout <<"In fahrenheit=" << temperature *9/5-32;
	}
	else
	{
	cout << "Enter a temperature in celsius=";
	cin >> temperature;
	cout <<"In celsius=" << temperature*9/5+32;
	}
	return 0;
}