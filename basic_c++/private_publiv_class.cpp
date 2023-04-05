#include<iostream>
using namespace std;

class Employee{
    private:
        int a,b,c;
    public:
        int e,d;
        void setdata(int a1,int b1,int c1);
        void getdata(){
            cout<<"The value of A is:"<<a<<endl;
            cout<<"The value of B is:"<<b<<endl;
            cout<<"The value of C is:"<<c<<endl;
            cout<<"The value of D is:"<<d<<endl;
            cout<<"The value of E is:"<<e<<endl;
        }
};
void Employee::setdata (int a1, int b1, int c1)
{
        a = a1;
        b = b1;
        c = c1;
}
int main()
{
    Employee krishna;
    krishna.d=20;
    krishna.e=10;
    krishna.setdata(1,2,3);
    krishna.getdata();
    return 0;
}