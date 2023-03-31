#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int StarRows, StarColumns, i, j;
    cout << "Please Enter the number of StarRows: ";
    cin >> StarRows;
    // Takes input from user for StarRows
    cout << "Please Enter the number of StarColumns: ";
    cin >> StarColumns;
    // Takes input from user for StarColumns
    for (i = 1; i <= StarRows; i++)
    { // outer for loop
        for (j = 1; j <= StarColumns; j++)
        {                // inner for loop
            cout << "*"; // print star
        }
        cout << "\n"; // move to next line
    }
    getch();
    return 0;
}