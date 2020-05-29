#include <iostream>

using namespace std;

int main()
{
    cout << "Enter Height (inches): __\b\b";
    int in;
    cin >> in;
    int ft = in/12;
    cout << "Height: " << ft << " feet, " << in % 12 << " inches" << endl;
    return 0;
}
