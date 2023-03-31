#include<iostream>
using namespace std;
int sum(int ,int );
int main(void){
    int a,b;
    cout<<"Enter the Values of A and B:";
    cin>>a>>b;
    cout<<sum(a,b)<<endl;
}
int sum(int a,int b){
    return a+b;
}