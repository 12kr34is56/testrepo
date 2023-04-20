#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        // here we put ch before the second loop otherwise it will print from sAME Again
        char ch = ('A' + 3 - i);
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }

    return 0;
}
// C
// BC
// ABC