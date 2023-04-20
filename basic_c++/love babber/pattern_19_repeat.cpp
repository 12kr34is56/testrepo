#include<iostream>
using namespace std;

int main()
{
    int n=5;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <=n-i+1 ; j++)
        {
            cout<<j<<" ";
        }
        for (int j = (i - 1) * 2; j>=1 ; j--)
        {
            cout<<"* ";
        }
        for (int k = n - i + 1; k >=1 ; k--)
        {
            cout<< k<<" ";
        }
        cout<<endl;
        
        
    }
    
    return 0;
}