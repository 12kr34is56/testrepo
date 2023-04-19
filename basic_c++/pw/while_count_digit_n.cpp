#include<iostream>
using namespace std;

int main(void){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    int t;
    int count=0;
    while (num)
    {
        num=num/10;
        count++;
    }
    cout<<count;
}