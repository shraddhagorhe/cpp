#include<iostream>
using namespace std;

float pi=3.1415;

float surface_area(float r)
{
float sa;
sa= 4*pi*r*r;
return sa;
}

float volume(float r)
{
float vol;
vol=(float(4)/float(3))*pi*r*r*r;
return vol;
}


int main()
{

float r=6;
float sa,vol;

sa=surface_area(r);
vol=volume(r);

cout<<"Surface area of sphere: "<<sa;
cout<<"\nVolume of sphere: "<<vol;

return 0;
}
