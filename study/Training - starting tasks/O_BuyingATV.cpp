#include <iostream>
#include <numeric>

using namespace std;

int main()
{
  long long w, h, a, b;

  cin >> w >> h >> a >> b;

  long long g = gcd(a, b);

  a /= g;
  b /= g;

  long long ans = min(w / a, h / b);

  cout << ans << '\n';
}