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
    cout << "Enter the numbers of which you want to find HCF: ";
    cin >> number1 >> number2;
    int answer = HCF(number1, number2);
    cout << "The HCF of the numbers is: " << answer;
    return 0;
}