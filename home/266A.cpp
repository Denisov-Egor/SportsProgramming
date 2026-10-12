#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n;
  int count = 0;
  string s;

  cin >> n;
  cin >> s;

  for (int i = 1; i < n; i++)
  {
    if (s[i] == s[i - 1])
    {
      count++;
    }
  }

  cout << count;
}