 #include<iostream>
using namespace std;
int main()
{
	int  n;
	cout <<"Enter a number=";
	cin >> n;
	for(int j=1;j<=200;j++)
	{
		cout << j*n << " ";
		if (j%10== 0)
		cout << endl;
	}
	return 0;
}