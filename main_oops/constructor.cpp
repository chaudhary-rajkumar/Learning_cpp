#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    // Creating a constructor
    // constructor is a special memeber of function with same name as of the class.
    // it is used to initializ the objects of its class.
    Complex(void);
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }

};

Complex :: Complex(void){
    a=10;
    b=6;
}
int main(){
    Complex obj1 , obj2 , obj3;
    obj1.printNumber();
    obj2.printNumber();
    obj3.printNumber();

    return 0;
}