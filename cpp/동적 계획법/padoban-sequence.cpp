// https://www.acmicpc.net/problem/9461
#include <iostream>

using namespace std;

int T, N, j=0;
unsigned long DP[101]; 

int main()
{
	cin >> T;

	DP[1] = 1;
	DP[2] = 1;
	DP[3] = 1;
	DP[4] = 2;
	DP[5] = 2;

	while (j < T)
	{
		cin >> N;

		for (int i=6; i<=N; i++)
			DP[i] = DP[i-1] + DP[i-5];

		cout << DP[N] << '\n';
		j++;
	}
	return 0;
}
