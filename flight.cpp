#include<iostream>
#include <string>
using namespace std;
class flight

{
      public :  string name;
        int fno;
        string source;
        string dest;
        float fare;
      public :
        flight(string name, int fno,string source, string dest,float fare)
        {
              cout<<"\nthe name of customer = "<<name;
            cout<<"\nthe flight number = "<<fno;
            cout<<"\nthe pickup city airport = "<<source;
            cout<<"\nthe destination = "<<dest;
            cout<<"\nthe fare of ticket(amount of ticket) ="<<fare;
        }

        flight(const flight &f1)
        {
                name = f1.name;
              fno = f1.fno;
              source =f1.source;
              dest = f1.dest;
              fare = f1.fare;
        cout<<"\n\nthe name of customer = "<<name;
            cout<<"\nthe flight number = "<<fno;
            cout<<"\nthe pickup city airport = "<<source;
            cout<<"\nthe destination = "<<dest;
            cout<<"\nthe fare of ticket(amount of ticket) ="<<fare;

        }
};
int main()
{

flight f1("Shraddha",10011,"Pune","Manali",20000);
  flight f2 = f1;
  return 0;
}
