#include<iostream>
using namespace std;
int main()
{
    int a,c,b,ch;
    do{
    cout<<"********** MENU ************\n";

    cout<<"1 : Addition\n";
    cout<<"2 : Subtraction\n";
    cout<<"3 : Multiplication\n";
    cout<<"4 : Division\n";
    cout<<"5 : Modules\n";

    cout<<"Enter the 2 no :\n";
    cin>>a>>b;
    cout<<"Enter the choice :\n";
    cin>>ch;


       switch (ch)
        {
        case 1:cout<<"Addition is :"<<(a+b);
            break;
        case 2:cout<<"Subtraction is :"<<(a-b);
            break;
        case 3:cout<<"Multiplication is :"<<(a*b);
            break;
        case 4:cout<<"Division is :"<<(a/b);
            break;
        case 5:cout<<"Modules is :"<<(a%b);
            break;
        default:cout<<"Incorrect choice please Try again \n";

            break;

        }
         cout<<"\n press 1 to continues :";
         cin>>c;


  }  while (c==1);
}
