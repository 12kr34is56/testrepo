#include<iostream>
using namespace std;

int main(void){
    int num;
    cout<<"Enter the value";
    cin>>num;
    if (num%2==0)
    {
        if (num%3==0)
        {
            cout<<"The value "<<num<<" is even and divisble by 3";
        }else{
            cout << "The value " << num << " is even but not divisble by 3";
        }
        
    }else{
        cout << "The value " << num << " is not  even ";
    }
    
}