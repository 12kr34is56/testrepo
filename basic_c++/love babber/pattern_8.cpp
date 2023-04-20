#include<iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 4; i++)
    {
        for (int j = i; j >0; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}

// 1 
// 2 1
// 3 2 1
// 4 3 2 1