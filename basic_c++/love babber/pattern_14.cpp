#include<iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 65; j <=65+i; j++)
        {
            cout<<char(j+i)<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
// A 
// B C
// C D E
