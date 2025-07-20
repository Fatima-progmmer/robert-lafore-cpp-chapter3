#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, muli, first, second, add;
	char dummychar = '/';

	cout << "Enter 1st fraction = ";
	cin >> a >> dummychar >> b;
	cout << "Enter 2nd fraction =";
	cin >> c >> dummychar >> d;

	cout << " Addition is " << (a * d + b * c) <<dummychar <<  (b * d) << endl;
	cout << " Subtraction  is " << (a * d - b * c) << dummychar << (b * d) << endl;
	cout << " Multiplication is " << (a * c)
	<< dummychar << (b*d) << endl;
	cout << " Division is " << (a * d) << dummychar << (b * c) << endl;

	return 0;
}