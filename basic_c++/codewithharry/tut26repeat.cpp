#include<iostream>
using namespace std;
class Complex{
    int a,b;
    friend Complex sum_complex(Complex x, Complex y);
    public:
        void get_data(int v1,int v2){
            cout<<"Enter the data:";
            a=v1;
            b=v2;
        }
        void display(void){
            cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
Complex sum_complex(Complex x,Complex y){
        Complex z;
        z.get_data((x.a + y.a) , (x.b + y.b));
        return z;
}
int main()
{
    Complex num1,num2,sum;
    num1.get_data(1,2);
    num1.display();

    num2.get_data(5,3);
    num2.display();

    sum=sum_complex(num1,num2);
    sum.display();
    
    return 0;
}