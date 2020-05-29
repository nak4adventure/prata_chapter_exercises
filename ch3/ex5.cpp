#include <iostream>

using namespace std;

int main()
{
    long long world_population, usa_population;
    cout << "Enter the world's population: ";
    cin >> world_population;
    cout << "Enter the population of the US: ";
    cin >> usa_population;
    cout << "The population of the US is " << double(usa_population)*100.00/double(world_population)
         << "% of the world population." << endl;
    return 0;
}
