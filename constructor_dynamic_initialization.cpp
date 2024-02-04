// Dynamic initialization of constructor depending upon the value of interest rate whether float or int
#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, float r); // r can be a value like 0.04
    BankDeposit(int p, int y, int r);   // r can be a value like 14
    void show();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < years; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100; // typecasting to float
    returnValue = principal;
    for (int i = 0; i < years; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposit ::show()
{
    cout << endl
         << "Principal amount was " << principal << endl
         << "Return value after " << years
         << " years is " << returnValue << endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p, y and r (0.xy type)" << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r); // aliter we can call as BankDeposit bd1(p, y, r);
    bd1.show();

    cout << endl;

    cout << "Enter the value of p, y and R (x type)" << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R); // aliter we can call as BankDeposit bd2(p, y, R);
    bd2.show();
    return 0;
}
