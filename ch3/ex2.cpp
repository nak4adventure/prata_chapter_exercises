#include <iostream>

using namespace std;

int main()
{
    int feet, inches;
    cout << "Enter Height (feet inches): ";
    cin >> feet >> inches;
    cout << "Height: " << feet << "\" " << inches << "\'" << endl;
    const short feet2inches = 12;
    int total_inches = feet * feet2inches + inches;
    const double inches2meters = 0.0254;
    double total_meters = double (total_inches) * inches2meters;
    double pounds;
    cout << "Enter Weight (lbs): ";
    cin >> pounds;
    const double pounds2kilograms = 1/2.2;
    double total_kilograms = pounds * pounds2kilograms;
    double bmi = total_kilograms / (total_meters * total_meters);
    cout << "BMI: " << bmi << endl;
    return 0;
}
