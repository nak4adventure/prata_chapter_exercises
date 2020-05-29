#include <iostream>

using namespace std;

int main()
{
    double mpg;
    cout << "Enter Automobile Gas Consumption Figure (mpg): ";
    cin >> mpg;
    double euro =  mpg*(1.00/3.875)*(1.00/62.14); // 100 km/L  
    cout << mpg << " mpg = " << 1.00/euro << " L/100 km" << endl;
    return 0;
}
