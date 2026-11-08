#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
  string s;
  int count = 0;

  getline(cin, s);

  for (size_t i = 0; i < s.size(); i++)
  {
    if (!isalnum(s[i]))
    {
     continue; 
    }    

    bool found = false;

    for (size_t j = 0; j < i; j++)
    {
      if (s[i] == s[j])
      {
        found = true;
        break;
      }
    }

    if (!found)
    {
      count++;
    }   

  }
  
  cout << count;
}