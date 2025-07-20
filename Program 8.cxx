 #include <iostream>
using namespace std;
int main()
{
	char tanz='.';
	float pounds, shillings, pence;
	float poundsa,shillingsa,pencea ;
	char cha;
	
do
{
	cout << "Enter 1st pounds,shillings and pence =";
	cin >> pounds  >> tanz >> shillings  >>tanz >>  pence;

	cout << "Enter 2nd pounds ,shillings and pence =";

		cin >> poundsa >> tanz >> shillingsa >>tanz >> pencea;
cout << "Do you want to continue ?" << endl;

cin >> cha;
}

while(cha!='n');
	return 0;
}