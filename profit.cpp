#include<iostream>
using namespace std;
int main()
{
    int n,i,pr,a[20],sum=0,sum1;
    cout<<"No of product :\n";
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<i<<" Product value:";
        cin>>a[i];
        sum=sum+a[i];
    }
    if(sum>=1000){
        cout<<"You got profit by 10 %% of "<<sum;
        pr=sum/10;
        sum1=sum-pr;
    }
    else
        sum1=sum;


    cout<<"\nSum :"<<sum1;
}
