#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;
    int age,marks;
    cout<<"Enter your Name: ";
    cin>>name;
    cout<<"Age:";
    cin>>age;
    cout<<"Marks:";
    cin>>marks;
    cout<<"\n--- Student Details ---\n";
    cout<<"Name:"<<name;
    cout<<"\nAge:"<<age;
    cout<<"\nMarks:"<<marks<<endl;
    return 0;
}