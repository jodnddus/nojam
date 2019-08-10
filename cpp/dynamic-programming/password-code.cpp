#include <iostream>
#include <string>

using namespace std;

int arr[5000],dp[5000];
string password;

int main()
{
  cin >> password;

  for (size_t i=0; i<password.length(); i++)
    arr[i+1] = password[i] - '0';

  dp[0] = 1;

  for (size_t i=1; i<=password.length(); i++) {
    if (arr[i] != 0)
      dp[i] = (dp[i-1] + dp[i]) % 1000000;

    int x = arr[i] + arr[i-1] * 10;

    if (10 <= x && x <= 26)
      dp[i] = (dp[i-2] + dp[i]) % 1000000;
  }

  cout << dp[password.length()] % 1000000 << '\n';

  return 0;
}
