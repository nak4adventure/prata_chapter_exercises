#include <iostream>

using namespace std;

int main()
{
    int miles, gallons;
    cout << "How many miles have you driven? ";
    cin >> miles;
    cout << "How many gallons of gasoline have you used? ";
    cin >> gallons;
    cout << "Your car has gotten " << double(miles)/double(gallons) << " mpg." << endl;
    return 0;
}
