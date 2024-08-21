#include <iostream>
using namespace std;

// Forward declaration because compiler is not getting Calculator class
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumFirstComplex(Complex, Complex);
    int sumSecondComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // Individually declaring functions as friends 
    friend int Calculator::sumFirstComplex(Complex o1, Complex o2);
    friend int Calculator::sumSecondComplex(Complex o1, Complex o2);
    // Aliter: Declaring the entire Calculator class as Friend
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1; 
        b = n2;
    }
    void display()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumFirstComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumSecondComplex(Complex o1, Complex o2){
    return (o1.b + o2.b);;
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator calc;
    int result = calc.sumFirstComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << result << endl;
    int secresult = calc.sumSecondComplex(o1, o2);
    cout << "The sum of last part of o1 and o2 is " << result << endl;

    return 0;
}