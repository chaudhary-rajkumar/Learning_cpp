#include<iostream>
using namespace std;
int glo=6;
void sum(){
    int a;
    cout<<"The value of glo in sum function "<<glo;

}

int main(){
    int glo = 9;
    // cout<<glo
    // glo=78;
    // cout<<glo;
    sum();
    cout <<"\nThe value of glo in main function "<<glo;
    return 0;
}