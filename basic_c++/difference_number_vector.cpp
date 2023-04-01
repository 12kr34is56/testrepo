#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    vector<int> v1(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> v1[i];
    }
    int num;
    cout << "Enter the number you want to check the difference:";
    cin >> num;
    bool flag = false;
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = i+1; j < v1.size(); j++)
        {
            if ((v1[j]-v1[i])==num)
            {
                flag=true;
            }
            
        }
        
    }
    cout << flag;
}
        // if ((v1[i] -v1[i+1]) == num)
        // {
        //     flag = true;
        // }