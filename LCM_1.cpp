#include <iostream>
using namespace std;

// recursive approach
// using Euclidean Algorithm
int HCF(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    if (a == b)
    {
        return a;
    }
    else if (a > b)
    {
        return HCF(a - b, b);
    }
    else if (b > a)
    {
        return HCF(a, b - a);
    }
    return 0;
}
int main()
{
    int number1, number2;
    cout << "Enter the numbers of which you want to find LCM: ";
    cin >> number1 >> number2;
    int LCM = (number1 * number2) / HCF(number1, number2);
    cout << "The LCM of the numbers is: " << LCM;
    return 0;
}