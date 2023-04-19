// #include<iostream>
// using namespace std;

// int main(void){
//     int arr[]={1,2,3,4,6};
//     int i;
//     int j;
//     int array[10];
//     for (i = 1; i <= 6; i++)
//     {
//         cout<<i<<endl;
//     }
//     for (j = 0; j < 6; j++)
//     {
//         cin>> array[i];
//     }
//     for (j = 0; j < 6; j++)
//     {
//         cout<< array[i];
//     }
//     // for (int j = 0; j <= 5; j++)
//     // {
//     //     if (arr[i]!=arr[j])
//     //     {
//     //         cout<<arr[i];
//     //         break;
//     //     }
        
//     // }
    

    
// }
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements\n";
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element number " << i + 1 << endl;
        cin >> num[i];
    }
    int max = 0, min = num[0];
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
        else if (num[i] < min)
        {
            min = num[i];
        }
    }
    cout << "Max: " << max << ", Min: " << min;
    cout << "The numbers not present are\n";
    for (int i = min; i <= max; i++)
    {
        bool flag = false;
        for (int j = 0; j < n; j++)
        {
            if (num[j] == i)
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << i << endl;
        }
    }
    return 0;
}