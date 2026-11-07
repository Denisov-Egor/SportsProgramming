#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n;
  string s, a;

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> s;
    
    a.clear();
    a += s[0];

    for (int j = 1; j < s.size(); j+=2)
    {
      a += s[j];
    }

    cout << a << '\n';
  }

}