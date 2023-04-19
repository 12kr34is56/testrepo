#include<iostream>
using namespace std;
int main(void){
    int n;
    cin>>n;
    int sum=0;
    do
    {
        sum=sum+n;
        n--;
    } while (n>=0);
    cout<<sum;
}