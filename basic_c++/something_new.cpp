#include<iostream>
using namespace std;
int sum(int a=0,int b=0){
    return a+b;
}
int main(void){
    int a,b;
    cin>>a>>b;
    cout<<sum(a,b)<<endl;
}
