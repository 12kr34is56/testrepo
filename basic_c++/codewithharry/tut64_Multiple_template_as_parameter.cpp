#include<iostream>
using namespace std;
template <class t1,class t2>
class myclass {
    public:
    t1 data1;
    t2 data2;
    myclass(t1 a,t2 b){
        data1=a;
        data2=b;
    }
    void display(void){
        //what's difference it is making here
        cout<<data1<<this->data2<<endl;
    }
};
int main()
{
    // myclass<int ,char> my(4,'c');
    //why this is working 
    myclass my(4,'c');
    my.display();
    return 0;
}