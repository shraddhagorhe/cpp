#include<iostream>
using namespace std;
int main()
{
   int i,n,sum=0,c;
   cout<<"\nEnter the range";
   cin>>n;

   for(i=1;i<=n;i++)
   {
        c=2*i-1;
       if(i%2==0)
       {
    cout<<-c<<" + ";
    sum=sum+(-c);
       }
       else{
           cout<<c;
           sum=sum+c;
       }

   }
    cout<<"\nSum of series = "<<sum;

    return 0;
}
