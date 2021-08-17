#include<iostream>
using namespace std;

class Student{
    public :

    char name[100],address[100];
    int rollno;double per,n;

    Student(){
        cout<<"\nEnter the name of Student :\n";
        cin>>name;
        cout<<"\nEnter the rollno :\n";
        cin>>rollno;
        cout<<"\nEnter the Percentage :\n";
        cin>>per;
        cout<<"\nEnter the address :\n";
        cin>>address;
    }

    void student_data(){
        cout<<"\nStudent Info :";
        cout<<"\nName = "<<name<<"\tRollno = "<<rollno<<"\tPersentage = "<<per<<"\tAddress = "<<address<<"\n";
        if(per>=70){
            cout<<"\nStudent is Distinction";
        }
        else if(per<75 && per>=60){
            cout<<"\nStudent is First Class";
        }
        else if(per<60 && per>=40){
            cout<<"\nStudent is Secont Class";
        }
        else{
            cout<<"\nStudent is Fail";
        }
    }
};
int main(){
    Student s;
    s.student_data();
}
