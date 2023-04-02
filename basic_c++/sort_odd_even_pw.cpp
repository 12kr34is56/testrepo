#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void)
{
    vector<int> v = {9, 8, 7, 6, 5, 3, 9, 1, 2};
    int left_ptr=0;
    int right_ptr=v.size()-1;
    int temp=0;
    while (left_ptr<right_ptr)
    {
        if (v[left_ptr]%2!=0&&v[right_ptr]%2==0)
        {
            // temp=v[left_ptr];
            // v[left_ptr]=v[right_ptr];
            // v[right_ptr]=temp;
            swap(v[left_ptr],v[right_ptr]);
            left_ptr++;
            right_ptr--;
        }
        if (v[left_ptr]%2==0)
        {
            left_ptr++;
        }
        if (v[right_ptr]!=2)
        {
            right_ptr--;
        }
        for (int i = 0; i < 10; i++) //YAHA PE STOPPING CONDITION LESS THAN 10 HAI AND ELEMENTS ARE 9
        {
            cout<<v[i]<<" ";
        }
        
        
    }
    

}
