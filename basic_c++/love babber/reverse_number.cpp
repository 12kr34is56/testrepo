#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    int t,reverse=0;
    while (num)
    {
        t=num%10;
        if ((reverse<INT_MAX)||(reverse>INT_MIN))
        {
            return 0;
        }
        
        reverse=reverse*10+t;
        num=num/10;
    }
    cout<<"The reverse number is :"<<reverse<<endl;
    
    return 0;
}