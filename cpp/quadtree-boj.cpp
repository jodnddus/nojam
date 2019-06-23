// https://www.acmicpc.net/problem/1992
#include <stdio.h>
#include <string>

using namespace std;

int quad[64][64];

void solve(int x, int y, int size)
{
	if (size == 1)
	{
		printf("%d", quad[x][y]);
		return;
	}

	bool same = true;
	for (int i=x;i<x+size;i++)
	{
		if (!same) break;
		for (int j=y;j<y+size;j++)
		{
			if (quad[x][y] != quad[i][j])
			{
				// 한개라도 다른 요소가 있으면 분할해야 함
				same = false;
				break;
			}	
		}
	}

	if (same)
	{
		printf("%d", quad[x][y]);
		return;
	}

	size /= 2;

	printf("(");
	solve(x,y,size);
	solve(x,y+size,size);
	solve(x+size,y,size);
	solve(x+size,y+size,size);
	printf(")");
}

int main()
{
	int quadsize;
	scanf("%d", &quadsize);
	for (int i=0;i<quadsize;i++)
		for (int j=0;j<quadsize;j++)
			scanf("%1d", &quad[i][j]);

	solve(0,0,quadsize);
	printf("\n");
	return 0;
}
