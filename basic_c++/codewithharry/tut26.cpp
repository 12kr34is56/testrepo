#include<iostream>
using namespace std;
class Complex{
    int a,b;
        // void complex sum_complex(complex o1, complex o2);
        friend Complex sum_complex(Complex o1, Complex o2);
        public : void set_Data(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
        void get_data(void){
            cout<<"The complex of number is :"<<a<<" + "<<b<<"i"<<endl;
        }

};
Complex sum_complex(Complex o1,Complex o2){
    Complex o3;
    o3.set_Data(o1.a+o2.a,o1.b+o2.b);
    return o3;
}
int main()
{
    Complex num1,num2,sum;
    num1.set_Data(1,2);
    num1.get_data();
    num2.set_Data(3,4);
    num2.get_data();
    sum=sum_complex(num1,num2);
    sum.get_data();
    return 0;
}