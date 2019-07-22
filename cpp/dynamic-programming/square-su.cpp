// https://www.acmicpc.net/problem/1699
#include <iostream>
#include <algorithm>

using namespace std;

int N,p,dp[100001];
int main()
{
	cin >> N;

	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 3;

	for (int j=4; j<=N; j++)
	{
		dp[j] = j;
		for (int i=1; j>=i*i; i++)
			dp[j] = min(dp[j], dp[j-(i*i)] + 1);
	}

	cout << dp[N] << "\n";
	return 0;
}
