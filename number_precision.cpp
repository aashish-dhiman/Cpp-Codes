#include <iostream> // std::fixed()
#include <cstdio>   // printf(),scanf()
#include <iomanip>  // std::setprecision()

using namespace std;

int main()
{

    int i;
    long l;
    char c;
    float f;
    double d;
    cin >> i >> l >> c >> f >> d;
    cout << i << endl
         << l << endl
         << c << endl;
    cout << setprecision(3) << f << endl; // setting precision upto 3 numbers
    cout << setprecision(9) << d << endl; // setting precision upto 9 numbers
    return 0;
}
