#include <iostream>

using namespace std;

int main() 
{
   cout << "Enter your age: ";
   int age;
   cin >> age;
   int months = age*12;
   cout << "Your age in months is " << months << "." << endl;
   return 0;
}

