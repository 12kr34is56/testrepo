#include <iostream>
#include <math.h>
using namespace std;
class point
{
    int x, y;
    friend void distance_point(point,point);
public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "The distance between x and y is :"<<endl;
    }
};
void distance_point(point p,point q){
    int diff1=p.x-q.x;
    int diff2 = p.y - q.y;
    int result=sqrt(pow(diff1,2)+pow(diff2,2));
    cout<<result<<endl;
}

int main()
{
    point p(4,5);
    point q(5,4);
    p.display();
    distance_point(p,q);
    return 0;
}