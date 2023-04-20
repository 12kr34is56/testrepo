#include<iostream>
using namespace std;

int main()
{
    int count=1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            cout<<count<<" ";
            count++;   
        }
        cout<<endl;
    }
    
    return 0;
}