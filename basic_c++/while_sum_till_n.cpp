#include<iostream>
using namespace std;

int main(void){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    int sum=0;
    while (num>=0)
    {
        sum=sum+num;
        num--;
        // i++;
    }
    cout<<sum;
    
}