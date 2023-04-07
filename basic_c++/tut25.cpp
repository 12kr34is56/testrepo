#include <iostream>
using namespace std;
class Complex
{
    int a;
    int b;

public:
    void set_data(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void sum(Complex x, Complex y)
    {
        a = x.a + y.a;
        b = x.b + y.b;
    }
    void display(void){
        cout<<"The sum of complex number "<<a<<"+"<<b<<"i"<<endl;
    }
};
int main()
{
    Complex c1, c2,c3;
    c1.set_data(1,2);
    c1.display();
    c2.set_data(3,4);
    c2.display();
    c3.sum(c1,c2);
    c3.display();
    return 0;
}