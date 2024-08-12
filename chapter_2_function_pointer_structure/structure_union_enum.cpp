// Example of structure
// #include <iostream>
// using namespace std;

// struct employe
// {
//     int id;
//     char section;
//     float salary;
// };

// int main()
// {
//     struct employe hari;
//     hari.id = 1;
//     hari.section = 'A';
//     hari.salary = 30000;
//     cout<<"The value is "<<hari.id<<endl;
//     cout<<"The value is "<<hari.section<<endl;
//     cout<<"The value is "<<hari.salary<<endl;
//     return 0;
// }






// // Example of another way to define structure
// #include <iostream>
// using namespace std;

// typedef struct employe
// {
//     int id;
//     char section;
//     float salary;
// } ep;

// int main()
// {
//     ep hari;
//     hari.id = 1;
//     hari.section = 'A';
//     hari.salary = 30000;
//     cout<<"The value is "<<hari.id<<endl;
//     cout<<"The value is "<<hari.section<<endl;
//     cout<<"The value is "<<hari.salary<<endl;
//     return 0;
// }




// // Example of union
// #include <iostream>
// using namespace std;

// //   ---> in union this will use any one variable at a time so it will make one one memory and share for all
// union money
// {
//     int rice;
//     char car;
//     float pounds;
// };
// int main()
// {
//     union money m1;
//     // m1.rice=34;
//     m1.car='C';
//     cout<<m1.car;
//     return 0;
// }




#include<iostream>
using namespace std;


int main(){
    enum Meal{ breakfast, lunch, dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    return 0;
}