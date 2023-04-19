#include<iostream>
using namespace std;

int main(void){
    int num;
    cout<<"Enter the number :";
    cin>>num;
    int k=1;
    for (int i = 5; i >=1; i--)
    {
        k=k*i;
    }
    cout<<k;
    
}