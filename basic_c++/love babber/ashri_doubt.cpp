#include <iostream>
using namespace std;

template <class T1,class T2> // default parameters if u leave the angular brackets empty while declaring the objects in the main fu
class shop
{
    T1 item;
    T2 price;

public:
    shop(T1 a, T2 b)
    {
        item = a;
        price = b;
    }
    void display()
    {
        cout << "The price of item number " << this->item << " is : " << this->price << endl;
    }
};
int main()
{
    shop s1(12, 1299.99);
    //  shop<int,float> s1(12,1299.99);
    s1.display();
    return 0;
}