#include<iostream>
using namespace std;
int main()
{
    int age;
    char p,c,h;
    cout<<"Gender of Person :\n";
    cin>>p;
    if(p=='m' ){
        cout<<"age of Person :\n";
        cin>>age;
        if(36>age && age>=25){
            cout<<"City of Person is : \n";
            cin>>c;
             if(c=='c'){
                cout<<" health is (good or poor) :\n";
                cin>>h;
                if(h=='e')
                    cout<<p<<"\nThe premium of male is Rs. 4000 per and his /her policy amount cannot exceed Rs. 2,50,000.\n";
            }
            else
                cout<<p<<"\nThe premium of male is Rs. 6000 per and his /her policy amount cannot exceed Rs. 25,000.\n";
        }

    }
    else if(p=='f' ){
        cout<<"Age of Person is :\n";
        cin>>age;
        if(36>age && age>=25){
            cout<<"address of Person is (city or village) :\n";
            cin>>c;
             if(c=='c'){
                cout<<" health is (good or poor) :\n";
                cin>>h;
                if(h=='e')
                    cout<<"female is the premium is Rs. 3000 per and his /her policy amount cannot exceed Rs. 1,00,000.\n";
            }

    }

    else
    {
        cout<<"The person is not insured.\n";
        cout<<"his/her age is \n"<<age;
    }
    }
}
