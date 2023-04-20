#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int k = 1; k <=4-i; k++)
        {
            cout<<" ";
        }
        
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        for (int q = i - 1; q>0 ; q--)
        {
            cout<< q;
        }
        // int start=i-1;
        // while (start)
        // {
        //     cout<<start;
        //     start--;
        // }
        
        
        cout<<endl;
    }
    
    return 0;
}