#include <iostream>
using namespace std;
class Base
{
    int data1;

public:
    int data2;
    void set_data(void)
    {
        data1 = 10;
        data2 = 20;
    };
    int get_data1(void);
    int get_data2(void);
};

int Base::get_data1(void)
{
    return data1;
}
int Base::get_data2(void)
{
    return data2;
}
class Derived : public Base
{
    int data3;

public:
    int process(void);
    void display(void);
};
int Derived::process(void)
{
    set_data();
    data3 = data2 * get_data1();
    return data3;
}
void Derived::display(void)
{
    cout << "The multiplication of" << endl
         << "Data1:" << get_data1() << endl
         << "Data2:" << data2 << endl
         << "is :" << data3 << endl;
}
int main()
{
    Derived der;
    der.process();
    der.display();
    return 0;
}