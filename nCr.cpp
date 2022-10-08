#include <iostream>
#include <conio.h>
//nCr
using namespace std;

int factorial(int n)
{
	int f=1;
	for(int i=2;i<=n;i++)
	{
		f*=i;
	}
	return f;
}
int main()
{
	int n,r,nCr;	

	cout<<"Enter the numbers:";
	cin>>n>>r;

	nCr=factorial(n)/(factorial(r)*factorial(n-r));
	cout<<"The Answer is: "<<nCr;
	
	getch();
	return 0;
}
