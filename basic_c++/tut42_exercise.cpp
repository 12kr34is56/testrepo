#include <iostream>
#include <math.h>
using namespace std;
class SimpleCalc
{
protected:
    int a, b;
    int result;

public:
    void add(int, int);
    void sub(int, int);
    void multiply(int, int);
    void divide(int, int);
    void show_simple(void);
};
void SimpleCalc::add(int x, int y)
{

    a = x;
    b = y;
    result = a + b;
    // cout<< result;
}
void SimpleCalc::sub(int x, int y)
{

    a = x;
    b = y;
    result = a - b;
    // cout<< result;
}
void SimpleCalc::multiply(int x, int y)
{

    a = x;
    b = y;
    result = a * b;
    // cout<< result;
}
void SimpleCalc::divide(int x, int y)
{

    a = x;
    b = y;
    result = a / b;
    // cout<< result;
}
void SimpleCalc::show_simple(void)
{
    cout << "The value is:" << result << endl;
}
class ScincetificCalc
{
protected:
    int p, q;
    int res;

public:
    void power(int, int);
    void Square_root(int);
    void Mod(int, int);
    void dis(void);
};
void ScincetificCalc::power(int n, int m)
{
    p = n;
    q = m;
    res = pow(p, q);
}

void ScincetificCalc::Square_root(int n)
{
    p = n;
    res = sqrt(p);
}
void ScincetificCalc::Mod(int n, int m)

{
    p = n;
    q = m;
    res = p % q;
}
void ScincetificCalc::dis(void)
{

    cout << "The Value is:" << res << endl;
}
class Hybrid: public SimpleCalc,public ScincetificCalc{
    public:
        
};
int main()
{
    // SimpleCalc calculator;
    // calculator.add(4, 5);
    // calculator.show_simple();
    // ScincetificCalc Calc;
    // Calc.Mod(10, 3);
    // Calc.dis();
    Hybrid H;
    H.add(100,115);
    H.
    return 0;
}