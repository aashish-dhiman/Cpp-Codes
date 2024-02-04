#include <iostream>
#include <math.h>
using namespace std;
class Distance
{
    int a, b;

public:
    Distance(int x, int y) // parameterized constructor
    {
        a = x;
        b = y;
    }
    void printPoint()
    {
        cout << "Entered points are (" << a << "," << b << ")" << endl;
    }
};
void calc_distance(int x1, int y1, int x2, int y2)
{
    float d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    cout << "Distance between the points is: " << d << endl;
}
int main()
{
    int x1, y1, x2, y2;
    cout << "Enter the points(x1 , y1): ";
    cin >> x1 >> y1;
    cout << "Enter the points(x2 , y2): ";
    cin >> x2 >> y2;

    Distance p1(x1, y1);
    p1.printPoint();
    Distance p2(x2, y2);
    p2.printPoint();
    calc_distance(x1, y1, x2, y2);

    return 0;
}