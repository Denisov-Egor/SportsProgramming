#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
  string s;
  int n;

  bool allFound = true;

  cin >> n >> s;

  for (char latte = 'a'; latte <= 'z'; latte++)
  {
    bool found = false;

    for (size_t i = 0; i < s.size(); i++)
    {
      if (tolower(s[i]) == latte)
      {
        found = true;
        break;
      }
    }
   
    if (!found)
    {
      allFound = found;
    }
    
  }

  if (allFound)
    cout << "YES";
  else
    cout << "NO";
  
}
