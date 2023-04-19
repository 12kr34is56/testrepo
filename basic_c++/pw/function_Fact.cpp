#include<iostream>
using namespace std;
int fact(int n);
int main(void){
    int num;
    cout<<"Enter the value";
    cin>>num;
    int result=fact(num);
    cout<<result;
}
int  fact(int n){
    int k=1;
    for (int i = n; i>=1; i--)
    {
        k=k*i;
    }
    return k;
    
}