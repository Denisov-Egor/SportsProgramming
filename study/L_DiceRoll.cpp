#include <iostream>
#include <numeric>

using namespace std;

int main()
{
  long long y, w;

  cin >> y >> w;

  long long m = max(y, w);
  long long c = 6 - m + 1;
  long long p = 6;

  int g = gcd(c, p);
  cout << c / g << '/' << p / g;
}