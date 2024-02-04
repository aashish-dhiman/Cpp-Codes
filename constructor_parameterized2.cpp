#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b) // declaring and initialising the constructor at same time
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    // implicit call
    Point p(1, 1);
    p.displayPoint();

    Point q(4, 6);
    q.displayPoint();
    return 0;
}
