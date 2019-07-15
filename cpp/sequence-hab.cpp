// https://www.acmicpc.net/problem/1912
#include <iostream>

using namespace std;

int N, sequence[100001], DP[100000], M=-1000;

int main()
{
	ios::sync_with_stdio(false), cin.tie(0);

	cin >> N;
	for (int i=1; i<=N; i++)
		cin >> sequence[i];

	for (int i=1; i<=N; i++)
	{
		if (i == 1)
		{
			for (int a=1; a<=N; a++)
			{
				DP[a] = sequence[a];
				if (DP[a] > M) M = DP[a];	
			}
		}
		else if (i == 2)
		{
			for (int j=1; j<=N-1; j++)
			{
				DP[j] = sequence[j] + sequence[j+1];	
				if (DP[j] > M) M = DP[j];
			}
		}
		else
		{
			for (int bundle=i, h=1; bundle<=N; bundle++, h++)
			{
				DP[h] = DP[h] + sequence[bundle];
				if (DP[h] > M) M = DP[h];
			}
		}	
	}

	cout << M << '\n';

	return 0;
}
