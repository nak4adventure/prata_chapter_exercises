#include <iostream>

using namespace std;
double celsius_2_fahrenheit(double);

int main() 
{
   cout << "Please enter a Celsius value:  ";
   double celsius, fahrenheit;
   cin >> celsius;
   fahrenheit = celsius_2_fahrenheit(celsius);
   cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << endl;
   return 0;
}

double celsius_2_fahrenheit(double c)
{
   return 1.8*c + 32;
}

