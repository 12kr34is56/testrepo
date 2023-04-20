#include <iostream>
using namespace std;

int main()
{
    int count=65;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <=i ; j++)
        {
            cout<<char(count)<<" ";
            count++;
        }
        cout << endl;
    }

    return 0;
}
// A 
// B C
// D E F