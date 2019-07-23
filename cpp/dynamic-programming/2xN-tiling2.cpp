// https://www.acmicpc.net/problem/11727
#include <stdio.h>

int n,DP[1001];

int main()
{
	scanf("%d", &n);
	DP[0] = 1;
	DP[1] = 1;

	for (int i=2; i<=n; i++)
		DP[i] = (DP[i-1] + DP[i-2]*2) % 10007;

	printf("%d\n", DP[n]);
	return 0;
}
