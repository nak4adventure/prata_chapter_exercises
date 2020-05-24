#include <iostream>

using namespace std;
double furlongs_to_yards(double);

int main() 
{
   cout << "Enter distance in furlongs: ";
   double furlongs, yards;
   cin >> furlongs;
   yards = furlongs_to_yards(furlongs);
   cout << furlongs << " furlongs = " << yards << " yards" << endl;
   return 0;
}

double furlongs_to_yards(double n)
{
   return n*220;
}
