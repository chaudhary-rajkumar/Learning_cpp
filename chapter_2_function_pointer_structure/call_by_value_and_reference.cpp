#include<iostream>
using namespace std;

// This will not swap a and b 
// int swap(int a, int b){
//     int temp=a;
//     a=b;
//     b=temp;
// }


void swapPointer(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x=4;
    int y=5;
    cout<<"The value of x is "<<x<<"\nthe value of y is "<<y<<endl;
    
    cout<<"The value of x is "<<x<<"\nthe value of y is "<<y<<endl;
    

    return 0;
}