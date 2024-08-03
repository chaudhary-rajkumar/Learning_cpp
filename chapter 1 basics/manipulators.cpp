// manipulators are used to format the displaying texts
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a=3, b=79, c=1233;
    cout<<"The value of a is: "<<setw(10)<<a<<endl;
    cout<<"The value of b is: "<<setw(10)<<b<<endl;
    cout<<"The value of c is: "<<setw(10)<<c<<endl;
    return 0;
}