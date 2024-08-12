// this will not swap the values of function
// ---> function can not change actual value
// call by value 

// #include<iostream>
// using namespace std;

// void swap(int a,int b){
//     int temp=a;
//     a=b;
//     b=temp;
// }
// int main(){
//     int x=4;
//     int y=5;
    // cout<<"The value of x is "<<x<<"\nThe value of y is "<<y<<endl;
    // // swap(x,y);
    // swap(x,y);
    // cout<<"The value of x is "<<x<<"\nThe value of y is "<<y<<endl;

//     return 0;
// }





// But by changing address we can change the value 
// Call by reference using pointers
#include<iostream>
using namespace std;
void swapPointer(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x=4,  y=5;
    cout<<"The value of x is "<<x<<"\nThe value of y is "<<y<<endl;
    // swap(x,y);
    swap(x,y);
    cout<<"The value of x is "<<x<<"\nThe value of y is "<<y<<endl;
    return 0;
}