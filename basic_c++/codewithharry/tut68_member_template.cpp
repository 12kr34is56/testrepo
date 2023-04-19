#include<iostream>
using namespace std;
template<class t>
class num{
    public:
    t data;
    num (t a):data(a){}
    void display(void);
};
template<class t>
void num<t> ::display(void){
    cout<<data<<endl;
}
void func(int n){
    cout<<"The func value is :"<<n;
}
template<class t>
void func(t a){
    cout<<"The func template value is :"<<a;
}
int main()
{
    num n(5.5);
    cout<<n.data<<endl;
    n.display();
    func(5.9);
    return 0;
}