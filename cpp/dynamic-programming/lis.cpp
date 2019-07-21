// 최장 증가 수열 공부
#include <iostream>

using namespace std;

// arr = [10, 20, 40, 25, 20, 50, 30, 70, 85]
int arr[10], dp[10];
int main()
{
	for (int i=0; i<10; i++) cin >> arr[i];

	for (int i=0; i<10; i++)
	{
		dp[i] = 1;
		for (int j=0; j<i; j++)
			if (arr[i]>arr[j] && dp[i]<(dp[j]+1)) dp[i] = dp[j]+1;
	}

	for (int i=0; i<10; i++) cout << dp[i] << " " << '\n';
	return 0;
}
