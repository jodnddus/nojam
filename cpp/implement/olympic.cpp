#include <iostream>

using namespace std;

int N,K,ans=1;
long long point[1001];

int main() {
  cin >> N >> K;  

  for (int i=1; i<=N; i++) {
    int n, g, s, b;
    cin >> n >> g >> s >> b;
    point[n] = (g*1e12) + (s*1e6) + b;
  }

  for (int i=1; i<=N; i++)
    if (point[i] > point[K]) ans++;

  cout << ans << "\n";
  return 0;
}
