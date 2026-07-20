#include<iostream>
using namespace std;

int main(){


string name;


    cout<<"\nenter your name: ";
    cin>>name;
    cout<<"welcome "<<name;

    string sallry;

    cout<<"\n enter your sallry: ";
    cin>>sallry;
    cout<<"sallry = "<<sallry;

    int a,b,add;

    cout<<"\nenter 1 number a :";
    cin>>a;
    cout<<"\nenter 2 number b :";
    cin>>b;
    add = a+b;
    cout<<"add a and b = "<<add;
    
    float length,width,area;
    
    cout<<"\nenter a length :";
    cin>>length;
    cout<<"\nenter a width :";
    cin>>width;
    area= length*width;
    cout<<"\narea of rectangle = "<<area;
    
    


    return 0;


}