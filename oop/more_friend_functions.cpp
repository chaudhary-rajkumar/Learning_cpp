#include <iostream>
using namespace std;
class Y;
class X
{
    friend void add(X, Y);
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
};

class Y
{
    friend void add(X, Y);
     int num;

public:
    void setValue(int value)
    {
        num = value;
    }
};

void add(X o1, Y o2)
{
    cout << "Summing datas of X and Y objects gives me " << o1.data + o2.num << endl;
}
int main()
{
    X a1;
    Y b1;

    a1.setValue(3);
    b1.setValue(5);

    add(a1,b1);
    return 0;
}