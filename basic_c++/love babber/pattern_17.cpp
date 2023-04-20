#include <iostream>
using namespace std;

int main()
{
    for (int i = 9; i >0; i--)
    {

        for (int k = 9 - i; k >0 ; k--)
        {
            cout << " ";
        }
        for (int j = i; j >1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}