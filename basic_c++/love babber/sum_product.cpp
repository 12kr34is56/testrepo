#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int t;
    int sum=0,prod=1;
    while (num)
    {
        t=num%10;
        sum=sum+t;
        prod=prod*t;
        num/=10;

    }
    cout<<prod-sum;
    return 0;
}