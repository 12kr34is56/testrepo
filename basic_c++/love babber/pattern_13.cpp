#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <=3; i++)
    {
        for (int j = 1; j <=i ; j++)
        {
            cout << char('A' + i - 1)<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
// A 
// B B
// C C C
