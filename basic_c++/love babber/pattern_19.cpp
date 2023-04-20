#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number : ";
    int n;
    cin >> n;
    cout << endl;

    int row = 1;
    while (row <= n)
    {

        // printing 1st triangle
        int val1 = 1;
        while (val1 <= (n - row + 1))
        {
            cout << val1 << " ";
            val1 += 1;
        }

        // printing 2nd triangle
        int val2 = (row - 1) * 2;
        while (val2)
        {
            cout << "* ";
            val2 -= 1;
        }

        // printing 3rd triangle
        int val3 = n - row + 1;
        while (val3)
        {
            cout << val3 << " ";
            val3 -= 1;
        }

        row += 1;
        cout << endl;
    }
}