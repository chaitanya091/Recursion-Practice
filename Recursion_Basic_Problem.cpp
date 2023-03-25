#include<iostream>
using namespace std;
//int cnt=0;
//void name()
//{
// 	 
//	if(cnt==5){
//	
//	return;
//}
//	else{
//	cnt++;
//	cout<<"\nname";
//	name();
//	}
//}
//int main()
//{
//	 
//	cout<<"print name 5 times";
//	name();
//}
void function(int i,int n)
{
	if(i<n)
	{
		 
		cout<<"\nChaitanya";
		function(i+1,n);
	}
}
int main()
{
	int n;
	cin>>n;
	cout<<"print name n times";
	function(0,n);
	
}
















