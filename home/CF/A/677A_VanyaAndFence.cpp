#include <iostream>

using namespace std;

int main()
{
  int n, h;
  int height;
  int m = 0;

  cin >> n >> h;

  for (int i = 0; i < n; i++)
  {
    cin >> height;

    if (height <= h)
    {
      m++;
    }else
    {
      m += 2;
    }
  }
  
  cout << m;
}