#include <iostream>
using namespace std;
class Base
{
    int a;

public:
    int b;
    void set_data(void);
    int geta(void);
    int getb(void);
};
void Base::set_data(void)
{
    a = 10;
    b = 20;
}
int Base::geta(void)
{
    return a;
}
int Base::getb(void)
{
    return b;
}
// class Derived : protected Base
class Derived : public Base
{
    int c;

public:
    int add(void);
    void display(void)
    {
        cout << "the sum of two number is :" << add() << endl;
    }
};
int Derived::add(void)
{
    // in below code if we set the base class as protected then we need below code
    set_data();
    int c = geta() + b;
    return c;
}
int main()
{
    Derived d;
    // in below the code if this function is already been called by add function then we don't need it
    // d.set_data();
    d.add();
    d.display();
}