#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s;
  string w;

  cin >> s;

  for (int i = 0; i < s.size(); i++)
  {
    if (s.substr(i, 3) == "WUB")
    {
      if (!w.empty())
      {
        cout << w << " ";
        w.clear();
      }

      i += 2;
    }else
    {
      w += s[i];
    }    
  }

  cout << w;
  
}