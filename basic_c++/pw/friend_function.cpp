#include<iostream>
using namespace std;
class base{
    int a;
    friend class base2;
    public:
        void set_data(int x){
            a=x;
        }
        void get_data(void){
            cout<<"The a value is :"<<a<<endl;
        }
};
class base2{
    int b;
    public:
        void set_data(int y)
        {
            b = y;
        }
        // void add(set_data(),b){

        };

int main()
{
    
    return 0;
}