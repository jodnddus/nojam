// https://www.acmicpc.net/problem/11724
#include <iostream>
#include <vector>

using namespace std;

int n,m,ans,visited[1001];
vector<int> graph[1001];

void dfs(int now)
{
	visited[now] = 1;
	for (int nxt : graph[now]) if (!visited[nxt]) dfs(nxt);
}

int main()
{
	cin >> n >> m;

	for (int i=0,u,v; i<m; i++)
	{
		cin >> u >> v;
		graph[u].push_back(v), graph[v].push_back(u);
	}

	for (int i=1; i<=n; i++) if (!visited[i]) ans++, dfs(i);

	cout << ans << '\n';

	return 0;
}
