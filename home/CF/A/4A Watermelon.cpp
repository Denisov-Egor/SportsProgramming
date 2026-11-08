#include <iostream>

using namespace std;

int main()
{
  int waltermelon;

  cin >> waltermelon;

  if (waltermelon % 2 == 0 && waltermelon >= 4)
  {
    cout << "YES";
  }else
  {
    cout << "NO";
  }
}