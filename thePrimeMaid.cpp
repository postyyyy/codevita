#include <bits/stdc++.h>

using namespace std;
int fxn(vector < bool > & v, int n) {
  int c = 0;
  for (int i = 1; i <= n; i++) {
    if (v[i] == 0)
      c++;
  }
  return c;

}
int main() {
  int n;
  cin >> n;

  vector < bool > v(n + 1, 1);
  v[0] = v[1] = 0;
  for (int i = 2; i <= n; i++) {
    if (v[i] == 1) {
      for (int j = 2 * i; j <= n; j = j + i) {
        v[j] = 0;
      }
    }
  }

  int pp, ans = 0;
  while (pp != 1) {
    ans++;
    pp = fxn(v, n);
    n = pp;
  }
  cout << ans + 1;
  return 0;
}
