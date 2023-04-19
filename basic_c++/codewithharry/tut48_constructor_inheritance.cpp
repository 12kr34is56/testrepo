#include <iostream>
using namespace std;
class base1
{
    int data1;

public:
    base1(int num):data1(num)
    {
        // as we can see we can even initialise the values of data
        // data1 = num;
        cout << "The construction is called of base 1" << endl;
    }
    void print_data_base1(void)
    {

        cout << "The value of A" << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int num)
    {
        data2 = num;
        cout << "The construction is called of base 2" << endl;
    }
    void print_data_base2(void)
    {
        cout << "The value of B" <<data2<< endl;
    }
};
// here the order of base play a vital in deciding which constructor should call first
class derived : virtual public base2, public base1
{
    int der1, der2;

public:
    derived(int a, int b, int c, int d) : base2(a), base1(b)//here nothing like above follows
    {
        der1 = c;
        der2 = d;
        cout << "The construction is called of Derived class" << endl;
    }
    void print_data_derived(void)
    {
        cout << "The data of derived of c:"<<der1<<endl;
        cout << "The data of derived of d:"<<der2<<endl;
    }
};
int main()
{
    derived k(4,5,6,7);
    // k.print_data_base1();
    k.print_data_derived();
    return 0;
}