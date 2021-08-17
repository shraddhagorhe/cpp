#include<iostream>
using namespace std;

class Time{
public:
int ishow(char t[]){

	cout<<"\n Time  is = "<<t<<"\n";
}
};

class Date{
public:
int ishow(char d[]){

	cout<<"\nDate  is = "<<d<<"\n";
}
};

class Student{
public:
int ishow(int id,char n[]){

	cout<<"\n Student id & name ="<<n<<"  id = "<<id<<"\n";
}
};
class Box{
public:
int ishow(int s,char c[]){

	cout<<"\n Size of box = "<<s<<" color = "<<c<<"\n";
}
};
class Person{
public:
int ishow( int age,char c[]){

	cout<<"\n Age of person = "<<age<<" age = "<<c<<"\n";
}
};

class Fan{
public:
int ishow(int p,char c[]){

	cout<<"\n Price of fan = "<<p<<" company = "<<c<<"\n";
}
};

int main()
{

char t[100],d[100],n[100],c[100];
int id,size,age,p;
Time time;
cout<<"\nEntre the time : \n";
cin>>t;
time.ishow("3.30");

cout<<"\nEntre the date : \n";
cin>>d;
Date date;
date.ishow(d);

cout<<"\nEntre the student name\n : ";
cin>>n;
cout<<"\nEntre the student id\n : ";
cin>>id;
Student std;
std.ishow(id,n);

cout<<"\nEntre the box size\n : ";
cin>>size;
cout<<"\nEntre the box color\n : ";
cin>>c;
Box box;
box.ishow(size,c);

cout<<"\nEnter the age of person : \n";
cin>>age;
cout<<"\nEnter the name of person : \n";
cin>>c;
Person person;
person.ishow(age,c);

cout<<"\nEntre the price of fan : \n";
cin>>p;
cout<<"\nEntre the company name : \n";
cin>>c;
Fan fan;
fan.ishow(p,c);
}
