#include <iostream>
using namespace std;
class vector
{
public:
    int size;
    int *arr;
    vector(int m)
    {
        int size = m;
        arr = new int[size];
    }
    int dot_product(vector &v)
    {
        int d = 0;
        for (int i = 0; i < size; i++)
        {
            d +=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector v(3);
    v.arr[0]=1;
    v.arr[1]=0;
    v.arr[2]=0;
    vector v2(3);
    v2.arr[0]=4;
    v2.arr[1]=0;
    v2.arr[2]=0;
    int a=v.dot_product(v2);
    cout<<a;
    return 0;
}