#include<iostream>
using namespace std;

class account
{
char name[30];
int acno;
char type[30];
double balance;

public:
void accept();
void withdraw(float amount);
void deposit(float amount);
void display();

};

void account::accept()
{
    cout<<"Enter name,acno,type,balance:";
    cin>>name>>acno>>type>>balance;
}

void account::withdraw(float amount)
{
    if(balance>amount)
    {
        balance=balance-amount;
        cout<<"withdraw successful..";
    }
    else
        cout<<"balance not enough to withdraw.";

}

void account::deposit(float amount)
{
    balance=balance+amount;
}

void account::display()
{
    cout<<"\nName of depositor = "<<name;
    cout<<"\nAccount no ="<<acno;
    cout<<"\nType of account = "<<type;
    cout<<"\nBalance = "<<balance;
}


int main()
{
    account a;
    float amount;
    a.accept();
    a.display();

    cout<<"Enter the amount to withdraw";
    cin>>amount;
    a.withdraw(amount);
    a.display();

    cout<<"Enter the amount to deposit";
    cin>>amount;
    a.deposit(amount);
    a.display();

    return 0;


}
