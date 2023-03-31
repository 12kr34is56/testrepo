#include<iostream>
using namespace std;
int main(void){
    int n;
    cout << "Enter the Row and column number:";
    cin >> n ;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <=n-i ; k++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        for (int l = (i-1); l >=1 ; l--)
        {
            cout<<l;
        }
        
        cout<<endl;
    }
    
}