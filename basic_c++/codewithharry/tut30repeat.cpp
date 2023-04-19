#include<math.h>
#include <iostream>
using namespace std;
class point
{
    int a, b;
    friend void diff(point o1, point o2);

public:
    point(int x, int y)
    {
        a = x;
        b = y;
    }
    void display(void)
    {
        cout << "The difference between point a and b is:" << endl;
    }
};
void diff(point o1, point o2)
{
    int diff1 = o1.a-o2.a;
    int diff2 = o1.b-o2.b;
    int result=sqrt(pow(diff1,2)+pow(diff2,2));
    cout<<result<<endl;

}
int main()
{
    point p(5,6);
    point q(9,6);
    p.display();
    diff(p,q);
    return 0;
}