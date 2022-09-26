// program to calculate retirement savings
#include <iostream>
#include <iomanip>
#include "compoundCalc.h"
using namespace std;

int main()
{
        double P, r, t; // variables used to calculate savings

        cout << "Please enter your principal / present value: ";
        cin >> P;

        cout << "Please enter your interest rate: ";
        cin >> r;

        cout << "Please enter the number of years the money will be left in the account: ";
        cin >> t;

        cout << fixed << showpoint << setprecision(2) << "Your retirement savings will be $" << compoundCalc(P, r, t) << endl;
                /* sets precision to 2 decimal points                        performs function seen in compoundCalc.h */
        return 0;
}