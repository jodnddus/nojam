// https://www.acmicpc.net/problem/1904
#include <iostream>

int N,DP[1000001];

int main()
{
	std::cin >> N;		
	
	for (int i=1; i<=N; i++)
	{
		if (i == 1)
			DP[i] = 1;
		else if (i == 2)
			DP[i] = 2;
		else
			DP[i] = (DP[i-2] + DP[i-1]) % 15746;
	}

	std::cout << DP[N] << '\n';
	return 0;
}
