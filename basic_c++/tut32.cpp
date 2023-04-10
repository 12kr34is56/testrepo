#include<iostream>
using namespace std;
class simple{
    int a,b,c;
    public:
    simple(int data1,int data2,int data3){
        a=data1;
        b=data2;
        c=data3;
    }
    void output(void){
        cout<<"The number is:"<<a <<b <<c <<endl;
    }
};
int main()
{
    simple s(4,5,6);
    s.output();
    
    return 0;
}