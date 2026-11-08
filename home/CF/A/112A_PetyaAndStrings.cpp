#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
  string s1, s2;
  int res = 0;

  cin >> s1 >> s2;

  for (int i = 0; i < s1.size(); i++)
  {    
    if (tolower(s1[i]) < tolower(s2[i]))
    {
      res = -1;
      break;
    }else if (tolower(s1[i]) > tolower(s2[i])) 
    {
      res = 1;
      break;
    }

  }
  
  cout << res;
  
}
