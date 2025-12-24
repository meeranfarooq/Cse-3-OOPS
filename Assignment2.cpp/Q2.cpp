#include <iostream>
using namespace std;

int main()
{
    double weight, height, bmi;
    cout << "Enter weight (in pounds): ";
    cin >> weight;
    cout << "Enter height (in inches): ";
    cin >> height;

    bmi = 703 * weight / (height * height);

    cout << "Your BMI is " << bmi << endl;
    if (bmi < 18.5)
        cout << "Weight Status: Underweight";
    else if (bmi < 25.0)
        cout << "Weight Status: Normal";
    else if (bmi < 30.0)
        cout << "Weight Status: Overweight";
    else
        cout << "Weight Status: Obese";

    return 0;
}
