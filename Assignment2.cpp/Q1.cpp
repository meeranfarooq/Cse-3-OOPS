#include <iostream>
using namespace std;

int main()
{
    double purchaseTotal, discountRate = 0, discount = 0, discountedTotal, salesTax, total;
    char isTeacher;

    cout << "Enter total purchases: $";
    cin >> purchaseTotal;
    cout << "Is the purchaser a teacher? (Y/N): ";
    cin >> isTeacher;

    if (isTeacher == 'Y' || isTeacher == 'y')
    {
        if (purchaseTotal >= 100)
            discountRate = 0.12;
        else
            discountRate = 0.10;

        discount = purchaseTotal * discountRate;
        discountedTotal = purchaseTotal - discount;
        salesTax = discountedTotal * 0.05;
        total = discountedTotal + salesTax;

        cout << "\nTotal purchases     $" << purchaseTotal;
        cout << "\nTeacher's discount (" << discountRate * 100 << "%)  " << discount;
        cout << "\nDiscounted total    " << discountedTotal;
        cout << "\nSales tax (5%)      " << salesTax;
        cout << "\nTotal               $" << total;
    }
    else
    {
        salesTax = purchaseTotal * 0.05;
        total = purchaseTotal + salesTax;

        cout << "\nTotal purchases     $" << purchaseTotal;
        cout << "\nSales tax (5%)      " << salesTax;
        cout << "\nTotal               $" << total;
    }

    return 0;
}
