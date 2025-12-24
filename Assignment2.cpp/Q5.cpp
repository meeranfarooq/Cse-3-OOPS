#include <iostream>
using namespace std;

int main()
{
    int pollutant;
    double gramsPerMile, odometer, limit;

    cout << "(1) Carbon monoxide\n";
    cout << "(2) Hydrocarbons\n";
    cout << "(3) Nitrogen oxides\n";
    cout << "(4) Nonmethane hydrocarbons\n";
    cout << "Enter pollutant number >> ";
    cin >> pollutant;

    cout << "Enter number of grams emitted per mile >> ";
    cin >> gramsPerMile;
    cout << "Enter odometer reading >> ";
    cin >> odometer;

    switch (pollutant)
    {
    case 1:
        limit = (odometer <= 50000) ? 3.4 : 4.2;
        break;
    case 2:
        limit = (odometer <= 50000) ? 0.31 : 0.39;
        break;
    case 3:
        limit = (odometer <= 50000) ? 0.40 : 0.50;
        break;
    case 4:
        limit = (odometer <= 50000) ? 0.25 : 0.31;
        break;
    default:
        cout << "Invalid pollutant number!";
        return 0;
    }

    if (gramsPerMile > limit)
        cout << "Emissions exceed permitted level of " << limit << " grams/mile.";
    else
        cout << "Emissions are within the permitted level of " << limit << " grams/mile.";

    return 0;
}
