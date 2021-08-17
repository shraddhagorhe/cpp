#include<iostream>
using namespace std;
int main()

{
	double p,r,t,si;
	cout<<"\nEnter the amount or principle:";
	cin>>p;
	cout<<"\nEnter the rate of interest :";
	cin>>r;
	cout<<"\nEnter the time:";
	cin>>t;

	si=(p*r*t)/100;
	cout<<"\nSimple interest of given data: "<<si;
}
