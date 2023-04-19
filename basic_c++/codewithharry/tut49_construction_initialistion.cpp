#include<iostream>
using namespace std;
class test{
    int b,a;
    public:
        test(int i,int j):a(i),b(j+a){
            cout<<"The construction is:"<<endl;
            cout<<"The value of a is:"<<a<<endl;
            cout<<"The value of b is:"<<b<<endl;
        }
};
int main()
{
    test t(4,5);

    return 0;
}