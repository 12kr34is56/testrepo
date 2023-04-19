#include <iostream>
using namespace std;
class Y;
class X
{
    int a;
    friend void exchange(X &, Y &);

public:
    void set_data(int v1)
    {
        a = v1;
    }
    void display(void){
        cout<<"The value of A is :"<<a<<endl;
    }
};
class Y
{
    int b;
    friend void exchange(X &, Y &);

public:
    void set_data(int v2)
    {
        b = v2;
    }
    void display(void)
    {
        cout << "The value of B is :" << b << endl;
    }
};
void exchange(X &o1, Y &o2)
{
    int temp = o1.a;
    o1.a = o2.b;
    o2.b = temp;
}
int main()
{
    X num1;
    num1.set_data(13);
    num1.display();
    Y num2;
    num2.set_data(31);
    num2.display();
    exchange(num1,num2);
    cout<<"Values of after the change:"<<endl;
    num1.display();
    num2.display();
    return 0;
}