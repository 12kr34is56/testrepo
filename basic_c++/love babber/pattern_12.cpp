#include<iostream>
using namespace std;

int main()
{
    for (int i = 65; i <65+3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<char(i+j)<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
// A B C 
// B C D
// C D E