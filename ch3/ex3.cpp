#include <iostream>

using namespace std;

const double s2d = 1.0/3600.0;

int main()
{
    int degrees, minutes, seconds;
    cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
    cout << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;
    double total_degrees = double (degrees) + double (minutes * 60 + seconds) * s2d;
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << total_degrees << " degrees" << endl; 
    return 0;
}
