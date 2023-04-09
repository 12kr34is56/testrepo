#include <iostream>
using namespace std;
class Complex;

class Calculator
{
public:
       int sumRealComplex(Complex, Complex);
};
class Complex
{
    int a, b;
    // friend int calculator::sum_complex(complex , complex   );
    friend class Calculator;

public:
    void setNumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printNumber()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};
int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);

    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    return 0;
}