#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n;
  string s;

  string mostFrequent;
  int count = 0; 

  cin >> n; 

  cin >> s;

  for (int i = 0; i < n - 1; i++)
  {
    int currentCount = 0;

    for (int j = 0; j < n - 1; j++)
    {
      if (s.substr(i, 2) == s.substr(j, 2))
      {
        currentCount++;
      }
    }

    if (currentCount > count)
    {
      count = currentCount;
      mostFrequent = s.substr(i, 2);
    }
  }

  cout << mostFrequent << '\n';
  
}