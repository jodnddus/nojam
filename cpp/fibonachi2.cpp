#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	long long fibo[10000]={0,};
	int N=0;
	fibo[0]=0;
	fibo[1]=1;

	scanf("%d", &N);

	for(int i=2;i<=N;i++)
		fibo[i]=fibo[i-2]+fibo[i-1];

	printf("%lld\n", fibo[N]);
	return 0;
}
