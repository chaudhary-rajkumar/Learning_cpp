#include <iostream>
using namespace std;

class Complex
{
    int a, b;
    friend Complex sumComplex(Complex o1, Complex o2);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    

    void display()
    {
        cout << "your number is " << a << " + " << b << "i " << endl;
    }
};
Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.display();

    c2.setNumber(5, 8);
    c2.display();

    sum= sumComplex(c1,c2);
    sum.display();

    return 0;
}


// Properties of friend function
/*
1. friend function is not member of the class so it can not use private members.

2. since it is not in the scope of the class, it can not be called by object of the class.

3. it usually contains objectsas argument

4. friend function can be defined anywhere in public or private section.

5. it cannot access the members directly by their names and need object_name.member_name to access any member.


*/