#include <iostream>

using namespace std;

int main()
{
  int k, n, w;
  int sum = 0;
  cin >> k;
  cin >> n;
  cin >> w;

  for (int i = 1; i <= w; i++)
  {
    sum += i * k;
  }
  
  if (sum > n)
  {
    cout << sum - n;
  }else
  {
    cout << '0';
  }
  
  
}