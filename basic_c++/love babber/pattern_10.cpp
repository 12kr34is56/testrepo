#include<iostream>
using namespace std;

int main()
{
    for (size_t i = 0; i < 4; i++)
    {
        for (int j = 65; j < 65+4; j++)
        {
            cout<<char(j)<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}