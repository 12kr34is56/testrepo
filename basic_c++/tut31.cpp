#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int x, int y){
        a=x;
        b=y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    complex()
    {
        a = 0;
        b = 0;
    }
    void print_number(void){
        cout<<"The complex number is :"<<a<<" + "<<b<<"i"<<endl;
    }
};
int main()
{
    complex c;
    c.print_number();
    complex c2(1);
    c2.print_number();
    complex c3(2,3);
    c3.print_number();
    return 0;
}