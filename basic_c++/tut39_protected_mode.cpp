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
class Derived : protected Base
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
    set_data();
    int c = geta() + b;
    return c;
}
int main()
{
    Derived d;
    // d.set_data();
    d.add();
    d.display();
    
    
}