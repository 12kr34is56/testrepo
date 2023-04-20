#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 9; i++)
    {

        for (int k = 1; k <= 9 - i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
        
//        *
//       **
//      ***
//     ****
//    *****
//   ******
//  *******
// ********