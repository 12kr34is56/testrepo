#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int ans = 0;
    int t;
    int i = 0;
    while (num != 0)
    {
        t = num&1;
        ans = (t * pow(10, i)) + ans;
        num = num >> 1;
        i++;
    }
    cout << ans;

    return 0;
}