#include<iostream>
using namespace std;

int main(void){
    int num;
    cout<<"Enter the values:";
    cin>>num;
    int t=0,sum=0;
    while (num)
    {
        t=num%10;
        sum=sum+t;
        num=num/10;

    }
    cout<<"sum:"<<sum<<endl;
}