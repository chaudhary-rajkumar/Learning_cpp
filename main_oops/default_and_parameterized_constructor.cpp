#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    Complex(void);
    void printNumber(){
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

Complex :: Complex(void){
    a=11;
    b=22;
}

int main(){
    Complex obj;
    obj.printNumber();

    return 0;
}