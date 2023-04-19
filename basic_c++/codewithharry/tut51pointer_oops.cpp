#include <iostream>
using namespace std;
class complex
{
    int real, imagenary;

public:
    void setdata(int a, int b)
    {
        real = a;
        imagenary = b;
    }
    void getdata(void)
    {
        cout << "The value of real:" << real << endl;
        cout << "The value of imagenary:" << imagenary << endl;
    }
};
int main()
{
    complex c1;
    // You can either create the pointer object by <class_name> *ptr=&c1
    // complex *ptr=&c1;
    // or <class_name> *ptr=new <class_name>
    complex *ptr = new complex;
    // either u can dereference it by -> or .plus(*pointer_name) operation
    ptr->setdata(5, 6);
    (*ptr).getdata();

    return 0;
}