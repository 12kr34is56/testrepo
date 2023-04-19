#include<iostream>
using namespace std;
class base{
    public:
    int base_data;
    void display1(void){
        cout<<"The value of base class data is :"<<base_data<<endl;
    }
};
class derived:public base{
    public:
    int derived_data;
    void display2(void){
        cout<<"The value of base class data is :"<<base_data<<endl;
        cout<<"The value of derived class data is :"<<derived_data<<endl;
    }
};
int main()
{
    // base *base_class_ptr= new base;
    base *base_class_pointer;
    derived derived_class;
    base_class_pointer=&derived_class;
    base_class_pointer->base_data=140;
    // base_class_pointer->derived_data=45;
    base_class_pointer->display1();
    return 0;
}