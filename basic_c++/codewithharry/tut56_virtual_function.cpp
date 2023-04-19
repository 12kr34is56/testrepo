#include <iostream>
using namespace std;
class base
{
public:
    int base_data=100;
     virtual void display(void)
    {
        cout << "The value of base class data is :" << base_data << endl;
    }
};
class derived : public base
{
public:
    int derived_data=200;
    void display(void)
    {
        cout << "The value of base class data is :" << base_data << endl;
        cout << "The value of derived class data is :" << derived_data << endl;
    }
};
int main()
{
    // base *base_class_ptr= new base;
    base *base_class_pointer;
    base base_class_object;
    derived derived_class;
    base_class_pointer = &derived_class;
    // base_class_object.display(); 
    base_class_pointer->display();
}
