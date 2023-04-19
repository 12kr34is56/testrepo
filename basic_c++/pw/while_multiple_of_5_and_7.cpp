#include<iostream>
using namespace std;

int main(void){
    // int num;
    // cout<<"enter the value";
    // cin>>num;
    int i=1;
    while (1)
    {
        if (i%5==0 && i%7==0)
        {
            cout<<i;
            break;
        }
        i++;
    }
    
}