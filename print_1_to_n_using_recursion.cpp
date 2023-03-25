//print 1 to n using Recursion
#include<iostream>
using namespace std;
void function(int i,int n)
{
	if(i>n)
	{
		return;	
	}	
	else{
		cout<<"\n"<<i;
		function(i+1,n);
	}
}
int main()
{
	int n;
	cin>>n;
	cout<<"printing 1 to n using recursion";
	function(1,n);
}
