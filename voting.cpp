#include<iostream>
using namespace std;
int main()

{
	int age;
	cout<<"\nEnter the person age :\n";
	cin>>age;

	if(age>=18)
		cout<<"This person is eligible for voting";

	else
		cout<<"This person is not eligible for voting";
}
