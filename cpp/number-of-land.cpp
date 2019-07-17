#include <stdio.h>

int n,m,map[51][51],ans;
const int dx[] = { 0,1,1,1,0,-1,-1,-1 };
const int dy[] = { 1,1,0,-1,-1,-1,0,1 };

void dfs(int x, int y)
{
	map[x][y] = 0;
	for (int i=0; i<8; i++)
	{
		int nx = x+dx[i], ny = y+dy[i];
		if (nx<0 || nx>=n || ny<0 || ny>=m) continue; 
		if (map[nx][ny]) dfs(nx, ny);
	}	
}

int main()
{
	while (1)
	{
		ans = 0;
		scanf("%d %d", &m, &n);

		if (!n && !m) break;

		for (int i=0; i<n; i++)
			for (int j=0; j<m; j++)
				scanf("%d", &map[i][j]);

		for (int i=0; i<n; i++)
			for (int j=0; j<m; j++)
				if (map[i][j]) dfs(i,j), ans++;

		printf("%d\n", ans);
	}
	return 0;
}

