#include<iostream>
using namespace std;

int main(void){
    int num,num2;
    cout<<"Enter the number:";
    cin>>num>>num2;
    int power;
    power=num;
    int i=1;
        int sum=0;
    while (num2>i)
    {
        num=num*power;
        i++;
    }
    cout<<num;

}