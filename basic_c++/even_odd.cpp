#include<iostream>
using namespace std;

int main(void){
    int num;
    cout<<"Enter the value:";
    cin>>num;
    if (num%2==0)
    {
        cout<<"The number "<<num<<" is even ";
    }else{
        cout << "The number " << num << " is odd ";
    }
    
}