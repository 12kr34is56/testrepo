#include<iostream>
using namespace std;
template <class t1=int,class t2=float>
class num{
    public:
    t1 number;
    t2 decimal;
    num(t1 a,t2 b): number(a),decimal(b){}
    void display(void){
        cout<<this->number<<endl;
        cout<<this->decimal<<endl;
    }
};
int main()
{
    num <>n(5,6.5);
    n.display();
    return 0;
}