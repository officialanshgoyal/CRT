// Electricity Bill of A house Calculation
// 0 to 100 units  : 200rs
// 101 to 200 : 2 rs per unit
// 201 to 300 : 3 rs per unit
// 301 to 400 : 5 rs per unit
// 401 and above : 7rs per unit
// and add 200rs at last final

//i5yc4xw
#include <iostream>
using namespace std;

class bill
{
public:
    int total_units;
    int amount;
    int Calculate()
    {

        cout << " Enter the units ";
        cin >> total_units;
        if (total_units <= 100)
        {
            amount = 200;
        }
        else if (total_units > 100 && total_units <= 200)
        {
            total_units = total_units - 100;

            amount = 200 + (total_units * 2);
        }
        else if (total_units > 200 && total_units <= 300)
        {
            total_units = total_units - 200;
            amount = 400 + (total_units * 3);
        }
        else if (total_units > 300 && total_units <= 400)
        {
            total_units = total_units - 300;

            amount = 700 + (total_units * 5);
        }
        else if (total_units > 400)
        {
            total_units = total_units - 400;
            amount = 1200 + (total_units * 7);
        }
        amount = amount + 200;
        cout << " total bill " << amount;
        return amount;
    }
};

int main()
{
    bill b1;
    b1.Calculate();
    return 0;
}
