#include<iostream>
using namespace std;
void print(int n)
{
	if(n==1)
	{
		cout<<1;
	}
	else{
		print(n-1);
		cout<<n;
	}
		
}
int main()
{
	int n=7;
 print(n);
	
}
