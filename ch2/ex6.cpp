#include <iostream>

using namespace std;
double ly_2_au(double);

int main() 
{
   cout << "Enter the number of light years: ";
   double ly, au; // ly: light years, au: astronomical units
   cin >> ly;
   au = ly_2_au(ly);
   cout << ly << " light years = " << au << " astronomical units." << endl;
   return 0;
}

double ly_2_au(double l)
{
   return l*63240;
}

