#include <iostream>

using namespace std;

int main()
{
  int p;
  int v;
  int t;
  int count = 0;
  
  int n;
  
  cin >> n;
  
  for (int i = 0; i < n; i++)
  {
    cin >> p >> v >> t;

    if (p + v + t >= 2)
    {
      count++;
    }    
  }

  cout << count;
}