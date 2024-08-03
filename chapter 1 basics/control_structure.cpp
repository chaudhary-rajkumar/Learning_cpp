#include<iostream>
using namespace std;

int main(){
    // int age;
    // cout<<"Tell me your age"<<endl;
    // cin>>age;
    // if(age<18){
    //     cout<<"you can not come to party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"come next year brother"<<endl;
    // }
    // else{
    //     cout<<"You can come to party"<<endl;
    // }

    int dnum;
    cout<<"Enter number from 1 to 7"<<endl;
    cin>>dnum;
    switch (dnum)
    {
    case 1:
        cout<<"Today is Sunday"<<endl;
        break;
    case 2:
        cout<<"Today is Monday"<<endl;
        break;
    case 3:
        cout<<"Today is Tuesday"<<endl;
        break;
    case 4:
        cout<<"Today is Wednesday"<<endl;
        break;
    case 5:
        cout<<"Today is Thursday"<<endl;
        break;
    case 6:
        cout<<"Today is Friday"<<endl;
        break;
    case 7:
        cout<<"Today is Saturday"<<endl;
        break;
    
    default:
        cout<<"Invalid Input"<<endl;
        break;
    }
    return 0;
}