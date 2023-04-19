#include <iostream>
using namespace std;

class compound_interest
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    compound_interest() {}
    compound_interest(int p, int y, float r); // r can be a value like 0.04
    compound_interest(int p, int y, int r);   // r can be a value like 14
    void show();
};
compound_interest ::compound_interest(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

compound_interest::compound_interest(int p, int y, int r)
{
    principal = p;
    interestRate = float(r) / 100;
    years = y;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
void compound_interest ::show()
{
    cout << endl
         << "Principal amount was " << principal
         << ". Return value after " << years
         << " years is " << returnValue << endl;
}
int main()
{
    compound_interest amount;
    int p, y,R;
    float r;
    // int R;
    cout << "Enter the p y and r" << endl;
    cin >> p >> y >> r;
    amount = compound_interest(p, y, r);
    amount.show();
    return 0;
}