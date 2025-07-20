#include <iostream>
using namespace std;;
int main()
{
	int num1,num2,ans; 
	char  cha,opera;
	do
	{
		cout <<"Enter a num1,operator,num2=";
	cin >> num1 >> opera >> num2;
	switch(opera)
	{
	case '+' : ans = num1 +num2; break;
	case '-' : ans = num1 - num2; break;
	case '*' : ans = num1 *num2; break;
	case '/' : ans = num1/num2; break;
	default : ans = 0;
	}
	cout << " answer is=" << ans;
	cout <<"\nDo another =";
	cin >> cha;
	}
	while(cha!='n');
	return 0;
}