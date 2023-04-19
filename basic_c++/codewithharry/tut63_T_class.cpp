#include <iostream>
using namespace std;
template <class T>
class number
{
    T a;
    T b;

public:
    number(T x, T y) : a(x), b(y)
    {
        cout << a + b;
    }
};
int main()
{
    number<int> num(9, 6);
    return 0;
}
// T c=a+b;
// void sum(T x,T y){
//     a=x;
//     b=y;
// }
// void display(void){
// }
// num.sum(5,6);
// num.display();