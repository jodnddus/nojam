// noj.am #1074 Z
#include <stdio.h>
#include <math.h>

int N,r,c;
int ans = 0;

int main()
{
	scanf("%d %d %d", &N, &r, &c);
	
	int n = pow(2,N);
	int x = 0, y = 0;

	while (n > 0)
	{
		n /= 2;

		// 2 사분면
		if (r < x+n && c < y+n) ans += n*n*0;
		// 1 사분면
		else if (r < x+n) 
		{
			ans += n*n*1;
			y += n;
		}
		// 3 사분면
		else if (c < y+n)
		{
			ans += n*n*2;
			x += n;
		}
		else
		{
			ans += n*n*3;
			x += n;
			y += n;
		}

		if (n == 1)
		{
			printf("%d\n", ans);
			break;
		}
	}

	return 0;
}
