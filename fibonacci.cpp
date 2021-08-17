#include <iostream>
using namespace std;

int main() {
   int i,n;
   int a=0,b=1,c;
   cout<<"\nEnter the range";
   cin>>n;

   cout<<"\n"<<a<<" , "<<b;

   i=1;//init

  while(i<=n-2)
   {
      c=a+b;
    cout<<" , "<<c;
    a=b;
   b=c;
   i++;
   }

    return 0;
}
