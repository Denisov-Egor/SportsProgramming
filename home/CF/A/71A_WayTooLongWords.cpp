#include <iostream>

using namespace std;

int main()
{
  string worlds;
  int n;

  cin >> n;
  
  for (int i = 0; i < n; i++)
  {
    cin >> worlds;

    if (worlds.size() > 10)
    {
      cout << worlds[0];
      int size = worlds.size() - 2;
      cout << size;
      cout << worlds[worlds.size() - 1];
    }else
    {
      cout << worlds;
    }
    cout << '\n';
  }

}