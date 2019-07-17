// https://www.acmicpc.net/problem/11066
#include <stdio.h>
#include <limits.h>
#include <vector>
#include <algorithm>

using namespace std;

int DP[501][501];
int cost[501];
int sum[501];

int main()
{
	int T,K;
	scanf("%d", &T);
	for (int i=0; i<T; i++)
	{
		scanf("%d", &K);
		for (int j=1; j<=K; j++)
		{
			scanf("%d", &cost[j]);
			sum[j] = sum[j-1] + cost[j];
		}
		for (int d=1; d<K; d++)
		{
			for (int x=1; x+d<=K; x++)
			{
				int y = x+d;
				DP[x][y] = INT_MAX; 
				for (int mid=x; mid<y; mid++)
					DP[x][y] = min(DP[x][y], DP[x][mid] + DP[mid+1][y] + sum[y] - sum[x-1]);
					//DP[x][y] = x~mid 와 mid+1~y 까지 각각의 최솟값을 이용해서 구함
			}
		}
		printf("%d\n", DP[1][K]);
	}
	return 0;
}
