// https://www.acmicpc.net/problem/1932
#include <stdio.h>
#include <algorithm>

using namespace std;

int DP[501][501], triangle[501][501] = {0,};

int main()
{
	int n;
	scanf("%d", &n);

	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=i; j++)
			scanf("%d", &triangle[i][j]);
	}

	DP[1][1] = triangle[1][1];

	for (int i=2; i<=n; i++)
	{	
		for (int j=1; j<=i; j++)
			DP[i][j] = max(DP[i-1][j], DP[i-1][j-1]) + triangle[i][j]; 
	}

	int max = 0;

	for (int i=1; i<=n; i++)
		if (max < DP[n][i]) max = DP[n][i];

	printf("%d\n", max);
	return 0;
}
