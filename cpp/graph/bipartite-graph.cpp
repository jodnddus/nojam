// https://www.acmicpc.net/problem/1707
#include <iostream>
#include <vector>
#define RED 1
#define BULE -1

using namespace std;

int K,V,E,visited[200001] = { 0, };
vector<int> graph[200001];
bool checkBipartite;

void dfs(int now, int color)
{
	visited[now] = color;
	for (int next : graph[now]) 
	{
		if (visited[next] == color)
		{
			checkBipartite = false;
	   		return;
		}
		
		if (!visited[next]) dfs(next, -color); 
	}
}

int main()
{
	cin >> K;
	
	while (K-- > 0)
	{
		cin >> V >> E;

		checkBipartite = true;
		
		for (int i=1; i<=V; i++)
		{
			graph[i].clear();
			visited[i] = 0;
		}

		for (int i=0,u,v; i<E; i++)
		{
			cin >> u >> v;	
			graph[u].push_back(v), graph[v].push_back(u);
		}

		for (int i=1; i<=V; i++)
		{
			if (!checkBipartite) break;
			if (!visited[i]) dfs(i, RED);
		}

		printf("%s\n",checkBipartite ? "YES" : "NO");
	}

	return 0;
}
