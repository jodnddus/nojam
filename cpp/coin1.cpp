// noj.am 2293
#include <stdio.h>

using namespace std;

int main()
{
	int n,k,coin[101],DP[10001]={0,};

	scanf("%d %d", &n, &k);
	for (int i=0;i<n;i++)
		scanf("%d", &coin[i]);	

	DP[0] = 1;

	for (int i=0;i<n;i++)
	{
		for (int j=1;j<=k;j++)
			if (j >= coin[i]) DP[j] += DP[j - coin[i]];
	}

	printf("%d\n", DP[k]);
	return 0;
}
