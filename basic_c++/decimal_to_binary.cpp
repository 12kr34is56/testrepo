#include<iostream>
using namespace std;

int main(void){
    int num;
    cout<<"Enter the decimal value:";
    cin>>num;
    int rev=0,t;
    
    // do
    // {
    //     t = num % 2;
    //     rev = rev * 10 + t;
    //     num = num / 2;
    // } while (num > 0);
    while (num>0)
    {
        t = num % 2;
        rev = rev * 10 + t;
        num = num / 2;
    }
    

    cout<<"Binary form :"<<rev<<endl;
    
}