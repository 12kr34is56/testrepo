// Purpose: To illustrate the example of single level inheritance
#include <iostream>
using namespace std;
class base
{
    int data1;

public:
    int data2;
    void setdata()
    {
        data1 = 1;
        data2 = 2;
    }
    int getdata1()
    {
        return data1;
    }
    int getdata2()
    {
        return data2;
    }
};

class derived : public base
{
    int data3;

public:
    void process()
    {
        // setdata();
        data3 = data2 * getdata1();
        cout << "The value of data1: " << getdata1() << endl;
        cout << "The value of data2: " << data2 << endl;
        cout << "The value of data3 is: " << data3 << endl;
    }
};
int main()
{
    // base B1;
    // B1.setdata();
    // cout << B1.getdata1() << endl;
    // cout << B1.getdata2() << endl;
    derived D1;
    D1.setdata();
    D1.process();
    return 0;
}