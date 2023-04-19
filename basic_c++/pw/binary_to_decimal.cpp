#include<math.h>
#include<iostream>
using namespace std;

int main(void){
    int num;
    cout<<"Enter the Binary value: ";
    cin>>num;
    int sum=0,t;
    int i=0;
    while (num)
    {
        t=num%10;
        sum=sum+(t*pow(2,i));
        num=num/10;
        i++;
    }
    cout<<"Sum:"<<sum<<endl;
    
}