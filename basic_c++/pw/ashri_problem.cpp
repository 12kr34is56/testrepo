//Purpose: For illustrating the example of arrays of objects in c++ 
#include<iostream>
using namespace std;
class complex{
    int a, b;

    public:
    void set_conplex(int a1, int b1){
        a=a1;
        b=b1;
    }
    void set_complex_bySum(complex object1, complex object2){
        a= object1.a + object1.a;
        // cout<<object1.a<<" + "<<object2.a<<": ";
        // cout<<a<<endl;
        b=object1.b+object1.b;
        // cout<<object1.b<<" + "<<object2.b<<": ";
        // cout<<b<<endl;
    }
    void display_data(){
        cout<<"the value of complex number is: "<<a<<" + "<<"i"<<b<<endl;
    }
};
int main(){ 
 complex c1,c2,c3;
 c1.set_conplex(1,2);
 c1.display_data();
 c2.set_conplex(3,4);
 c2.display_data();
 c3.set_complex_bySum(c1,c2);
 c3.display_data();
return 0;
}