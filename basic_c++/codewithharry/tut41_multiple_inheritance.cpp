#include <iostream>
using namespace std;
class base1
{
protected:
    int a;

public:
    void set_data1(int x)
    {
        a = x;
    }
};
class base2
{
protected:
    int b;

public:
    void set_data2(int y)
    {
        b = y;
    }
};
class derived : public base1, public base2
{
public:
    void show(void)
    {
        cout << "The value of A :" << a << endl;
        cout << "The value of B :" << b << endl;
        cout << "The Sum of Values are :" << a + b << endl;
    }
};
int main()
{
    derived kv;
    kv.set_data1(4);
    kv.set_data2(5);
    kv.show();
    return 0;
}