#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    vector<int> v1(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> v1[i];
    }
    int num;
    cout << "Enter the number you want to check the sum:";
    cin >> num;
    int count=0;
    bool flag = false;
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = i+1; j <v1.size(); j++)
        {
            if ((v1[i] + v1[j]) == num)
            {
                count++;
            }
        }
        // count++;
    }
    cout << count;
}