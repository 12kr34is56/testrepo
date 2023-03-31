#include<iostream>
using namespace std;
int main(void){
    int a;
    cin>>a;
    for (int i = 1; i <=a; i++)
    {
        for (int k = i; k <=a ; k++)
        {
            cout<<k;
        }
        for (int j = 1; j <= (i-1); j++)
        {
            cout<<j;
        }
        cout<<endl;
        
    }
    
}