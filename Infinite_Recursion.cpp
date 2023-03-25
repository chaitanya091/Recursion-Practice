#include<iostream>
using namespace std;
void recursion()
{
	cout<<"1";
	recursion();
}
int main()
{
	cout<<"Infinite Recursion";
	recursion();
}
