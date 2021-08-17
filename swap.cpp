#include<iostream>
using namespace std;

class Swap

{

int a,b,temp;

public:
void accept();
void swapno();
void display();
};

void Swap::accept()
{
cout<<"\nEnter the two numbers:";
cin>>a>>b;
}


void Swap::swapno()
{
temp=a;
a=b;
b=temp;
}

void Swap::display()
{
cout<<"\na = "<<a<<"\nb = "<<b;
}

int main()
{
Swap s;

s.accept();
cout<<"\nBefore swapping:";
s.display();

s.swapno();
cout<<"\nAfter swapping:";
s.display();

return 0;
}
