#include<iostream>
using namespace std;
int changevalue(int &z){
    z=100;
    return 0;   
}
int main(void){
    int a=5;
    changevalue(a);
    cout<<a<<endl;
}