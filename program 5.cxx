#include <iostream>
using namespace std;
int main()
{
	int row,c,n,temp;
	n = 20;
	temp = n;
	for(row=1;row<n;row++)
	{
		for(c=1;c<temp;c++)
		cout << " ";
		temp--;
		for(c=1;c<=2*row-1;c++)
		cout <<"x";
		cout <<"\n";
	}
	return 0;
}