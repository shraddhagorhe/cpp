#include<iostream>
using namespace std;
int main(){
	double a,b,c;
	cout<<"\nEnter the three no :\n";
	cin>>a>>b>>c;

	if(a==b && b==c)
		cout<<"\nAll three numbers are equal and largest no is "<<a;
	else if(a>b && a>c){
		cout<<"\nLargest no is :"<<a;
		cout<<"\nAll three numbers are not equal: "<<a<<" "<<b<<" "<<c;
	}
	else if(c<b){
		cout<<"\nLargest no is : "<<b;
		cout<<"\nAll three numbers are not equal: "<<a<<" "<<b<<" "<<c;
	}

	else{
		cout<<"\nLargest no is :"<<c;
		cout<<"\nAll three numbers are not equal:"<<a<<" "<<b<<" "<<c;
	}
}
