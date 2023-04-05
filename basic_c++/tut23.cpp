#include <iostream>
using namespace std;
class shop
{
    int item_id[100];
    int item_price[100];
    int counter;

public:
    void initcounter()
    {
        counter = 0;
    }
    void set_price(void);
    void display_price(void);
};
void shop::set_price(void)
{
    cout << "Enter the Item id:" << counter + 1 << endl;
    cin >> item_id[counter];
    cout << "Enter the Item Price:" << endl;
    cin >> item_price[counter];
    counter++;
}
void shop::display_price(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item number" << item_id[i] << " is:" << item_price[i] << endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.set_price();
    dukaan.set_price();
    dukaan.set_price();
    dukaan.display_price();
    return 0;
}