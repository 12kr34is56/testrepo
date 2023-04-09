#include <iostream>
#include<math.h>
using namespace std;
class point
{
    int a, b;
    friend void distance(point o1, point o2);

public:
    point(int x,int y){
        a=x;
        b=y;
    }
    void get_data(void)
    {
        cout << "The difference between the points are:" << endl;
    }
};
void distance(point o1, point o2)
{
    int diff1 = o1.a - o2.a;
    int diff2 = o1.b - o2.b;
    int result=sqrt(pow(diff1,2)+pow(diff2,2));
    cout<<result;
}
int main()
{
    point p(1,2);
    point q(3,4);
    p.get_data();
    distance(p,q);
    return 0;
}