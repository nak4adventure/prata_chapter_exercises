#include <iostream>

using namespace std;

int main()
{
    long long seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    cout << seconds << " seconds = " << int (seconds/86400) << " days, " << int (seconds%86400)/3600 << " hours "
         << int ((seconds%86400)%3600)/60 << " minutes, " << int (((seconds%86400)%3600)%60) << " seconds" << endl; 
    return 0;
}
