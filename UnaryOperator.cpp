#include<iostream>
using namespace std;
class incr
{
    int i;
    public:
        void operator++()
        {
             cout<<"\nEnter the value for increment = ";
             cin>>i;
            cout<<"incremental value of i is "<<++i;
        }

        void operator--()
        {
             cout<<"\nEnter the value for decrement = ";
            cin>>i;
             cout<<"decremental value of i is "<<--i;
        }
};
int main()
{
    incr i;
    ++i;
    --i;
    return 0;
}
