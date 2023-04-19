#include <iostream>
using namespace std;
class shop
{
    int Id;
    float price;

public:
    // void set_data(int a, float b)
    // {
    //     Id = a;
    //     price = b;
    // }
    shop(){}
    shop(int a,float b):Id(a),price(b){}
    void get_data(void)
    {
        cout << "The ID is:" << Id << endl
             << "The price is:" << price << endl;
    }
};
int main()
{
    // shop k(4,5.5);
    // shop *ptr=&k;
    // ptr->get_data();
    int size=4;
    shop *ptr=new shop[size];
    shop *ptrtemp= ptr;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout<<"The enter the data"<<i+1<<endl;
        cin>>p>>q;
        //TODO solve this query
        // ptr->shop(p,q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        // cout<<"The enter the data"<<i+1<<endl;
        // cin>>p>>q;
        ptrtemp->get_data();
        ptrtemp++;
    }
    
    return 0;
}