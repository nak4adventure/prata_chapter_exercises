#include <iostream>

using namespace std;
void sing_verse_1(int);
void sing_verse_2(int);

int main() 
{
   cout << "Song" << endl;
   cout << "How many lines of verse 1? ";
   int verse_1, verse_2;
   cin >> verse_1;
   cout << "How many lines of verse 2? ";
   cin >> verse_2;
   cout << endl;
   sing_verse_1(verse_1);
   sing_verse_2(verse_2);
   return 0;
}

void sing_verse_1(int n)
{
   for(int i = 0; i < n; i++)
   {
      cout << "Three blind mice" << endl;
   }
}

void sing_verse_2(int j)
{
   for(int k = 0; k < j; k++)
   {
      cout << "See how they run" << endl;
   }
}

