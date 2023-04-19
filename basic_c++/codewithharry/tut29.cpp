#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(void);//{
    //     a=10;
    //     b=20;
    // };
    // void get_data(void){
    // }
};
complex::complex(){
    a=10;
    b=20;
        cout<<"The complex number is:"<<a<<" + "<<b<<"i";
}
int main()
{
    complex c;
    // c.get_data();   
    return 0;
}