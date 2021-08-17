#include<iostream>
using namespace std;
int main()

{
    int i,n,no,sum=0;
    cout<<"How many numbers are enter:\n";
    cin>>n;
    for (i=1;i<=n;i++){
        cout<<"\nEnter "<<i<<" no :";
        cin>>no;
        if(no%2==0)
        sum=sum+no;

    }
    cout<<"\nSum of even no :"<<sum;
}
