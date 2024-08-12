// #include<iostream>
// using namespace std;

// int main(){
//     int marks[4] = {23, 45, 56, 89};
//     for (int i = 0; i < 4; i++)
//     {
//         cout <<marks[i]<<endl;
//     }
//     return 0;
// } 



// Pointers and array
#include<iostream>
using namespace std;

int main(){
    int marks[]={34,56,89,71};
    int *p=marks;
    cout<<"The value of marks[0] is "<<*p<<endl;
    cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    cout<<"The value of marks[3] is "<<*(p+3)<<endl;

    return 0;
}