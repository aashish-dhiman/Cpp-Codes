#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Code of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};
int main()
{
    int size = 3;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr; // assigning the address of ptr to ptrTemp so that we can print data after taking input 
    int p, i;                   // using ptr as ptr will point to different location after taking input 
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "Enter Id and price of item " << i + 1 << endl;
        cin >> p >> q;
        // (*ptr).setData(p, q);
        ptr->setData(p, q);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout << "Item number: " << i + 1 << endl;
        // (*ptrTemp).getData();
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}
