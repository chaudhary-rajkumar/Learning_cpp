#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
    void setId(void){
        salary=122;
        cout<<"Enter id of employee"<<endl;
        cin>>id;
    }
    void getId(void){
        cout<<"The id of this employee is "<<id<<endl;
    }
};
int main(){
    // Employee harry, ram, shyam, gita;
    // harry.setId();
    // harry.getId();

    Employee fb[10];
    // fb[0].setId();
    // fb[0].getId();

    for(int i=0; i<10; i++){
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}