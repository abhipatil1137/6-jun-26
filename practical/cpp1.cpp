#include<iostream>
using namespace std;

class student{

    public:
    int roll_no;
    string name;

};
int main(){

    student s1;
    s1.roll_no=118;
    s1.name="abhi";

    cout<<"student roll number is: "<<s1.roll_no<<endl;
    cout<<"student roll number is: "<<s1.name<<endl;
    return 0;
    
    
}