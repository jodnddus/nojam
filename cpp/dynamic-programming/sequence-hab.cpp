// https://www.acmicpc.net/problem/1912
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int N, MAX=-1000;
	scanf("%d", &N);
	vector<int> c(N, 0);
	vector<int> d(N, 0);

	for (int i=0; i<N; i++)
		scanf("%d", &c[i]);	
	
	d[0] = c[0];

	for (int i=1; i<N; i++)
	{
		d[i] = max(d[i-1] + c[i], c[i]);
		MAX = max(MAX, d[i]);
	}

	MAX = max(MAX, d[0]);
	printf("%d\n", MAX);
	return 0;
}
