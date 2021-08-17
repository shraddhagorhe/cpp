#include <iostream>
#include<string.h>
using namespace std;
class bill
{
       public:
     string name[100];
    float unit[100];
    float c[100];
    bill()
    {
        for(int i=1;i<=5;i++)
        {
            cout<<"\nEnter the name of customer = ";
            cin>>name[i];
            cout<<"Enter billing unit = ";
            cin>>unit[i];
        }
    }
    void show()
    {
        for(int i=1 ;i<=5;i++){
            if(unit[i]<30)
            {
                cout<<"\n\nThe charges will applied in given unit is 1.5rs per unit";
                c[i]=unit[i]*1.5;
                cout<<"\nName of customer = "<<name[i]<<"\namount bill for given "<<unit[i]<<" unit is = "<<c[i];
            }
            else if(unit[i]>30 && unit[i]<300)
            {
                cout<<"\n\nThe charges will applied in given unit is 3rs per unit";
                c[i]=unit[i]*3;

                if(c[i]>500)
                {
                    cout<<"\nThe customer had total amount is more than Rs. 500.00 then an additional surcharge of 15%  ";
                    c[i]= c[i] + (c[i]*15/100);
                cout<<"\nName of customer = "<<name[i]<<"\namount bill for given "<<unit[i]<<" unit is = "<<c[i];
                }
               else
                cout<<"\nName of customer = "<<name[i]<<"\namount bill for given "<<unit[i]<<" unit is = "<<c[i];

            }
            else if(unit[i]>300)
            {
                cout<<"\n\nThe charges will applied in given unit is 4.25rs per unit";
                c[i]=unit[i]*4.25;
                if(c[i]>500)
                {
                    cout<<"\nThe customer had total amount is more than Rs. 500.00 then an additional surcharge of 15%  ";
                    c[i]= c[i] + (c[i]*15/100);
                    cout<<"\nName of customer = "<<name[i]<<"\namount bill for given "<<unit[i]<<" unit is = "<<c[i];
                }

            }

        }
        cout<<"\n\nName of customer\tamount";
        for(int i=1 ;i<=5;i++)
        {
            cout<<"\n\t"<<name[i]<<"\t\t"<<c[i];        }
    }
};
int main()
{
    bill b;
    b.show();
    return 0;
}

