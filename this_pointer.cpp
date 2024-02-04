#include <iostream>
using namespace std;

class Test
{
private:
    int x;
    int y;

public:
    Test(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }
    
    Test &setX(int a) /* Reference to the calling object can be returned */ 
    {
        x = a;
        return *this;
    }
    Test &setY(int b) /* Reference to the calling object can be returned */ 
    {
        y = b;
        return *this;
    }
    void print() { cout << "x = " << x << " y = " << y << endl; }
};

int main()
{
    Test obj1(5, 5);
    obj1.print();
    // Chained function calls.  All calls modify the same object
    // as the same object is returned by reference
    obj1.setX(10).setY(20);
    // When a reference to a local object is returned, the returned reference can be used to chain function calls on a single object.

    obj1.print();
    return 0;
}