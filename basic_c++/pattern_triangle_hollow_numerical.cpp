#include<iostream>
using namespace std;
int main(void){
    int n, m;
    cout << "Enter the Row and column number:";
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n-i; k++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            if (i==1||i==n||j==1||j==(i*2)-1)
            {
                cout<<i;
            }else{
                cout<<" ";
            }
            
        }
        
        cout<<endl;
    }
    
    
    
}