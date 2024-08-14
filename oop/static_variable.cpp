#include<iostream>
using namespace std;

class Employee{
    int id;
    // int count;   //we have to make it as a static variable
    static int count;
    public:
    void setData(void){
        cout<<"Enter id of the employee"<<endl;
        cin>>id;
        count++;
    }
    void getData(void){
        cout<<"The id of this emplyoee is "<<id<<" and this is employee no "<<count<<endl;
    }
};
int Employee:: count;       // its default value is 0
int main(){
    Employee harry , rohan, raj;
    // harry.id=1; harry.count =2;     // can not do this because they are private;
    harry.setData();
    harry.getData();

    rohan.setData();
    rohan.getData();
    
    raj.setData();
    raj.getData();
    return 0;
}