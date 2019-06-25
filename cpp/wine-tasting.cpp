// https://www.acmicpc.net/problem/2156
#include <stdio.h>
#include <algorithm>

int n,wine[10001],DP[10001];

int main()
{
	scanf("%d", &n);
	for (int i=1; i<=n; i++)
		scanf("%d", &wine[i]);	

	DP[1] = wine[1];
	DP[2] = wine[2]+wine[1];
	
	for (int i=3; i<=n; i++)
	{
		// i-1를 마셨을 때 & 마시지 않았을 때
		DP[i] = std::max(DP[i-2]+wine[i], DP[i-3]+wine[i-1]+wine[i]);
		// 두 번 연속 안먹을 때
		DP[i] = std::max(DP[i-1], DP[i]);
	}	
	printf("%d\n", DP[n]);
	return 0;
}
