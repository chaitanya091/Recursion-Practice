//print form 1 to n
#include<iostream>
using namespace std;

void function(int n)
{
	if(n==0)
	{
		return;
	}
	else{
		cout<<"\n"<<n;
		function(n-1);
	}
}
int main()
{
	int n;
	cin>>n;
	cout<<"print n to 1 by recursion";
	function(n);
}
