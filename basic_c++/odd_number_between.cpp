#include<iostream>
using namespace std;
int odd(int a,int b);
int main(void){
    odd(1,10);
    cout<<odd<<endl;
}
int odd(int a,int b){
    for (int i = a; i < b; i++)
    {
        if (i%2!=0)
        {
            cout<<i<<endl;
        }
        
    }
    return 0;
}