// noj.am #1074 Z
#include <stdio.h>
#include <math.h>

int N,r,c;
int ans = 0;

void Z(int x, int y, int size)
{
	if (size == 1)
	{
		if (x==r && y==c)
			printf("%d\n", ans);
		ans++;
		return;		
	}

	int s = size/2;

	Z(x,y,s);
	Z(x,y+s,s);
	Z(x+s,y,s);
	Z(x+s,y+s,s);
}

int main()
{
	scanf("%d %d %d", &N, &r, &c);
	
	Z(0,0,pow(2,N));

	return 0;
}
