// https://www.acmicpc.net/problem/11055
#include <iostream>
#include <algorithm>

using namespace std;

int N,m=0,A[1000],DP[1000];
int main()
{
	cin >> N;

	for (int i=0; i<N; i++) cin >> A[i];
	DP[0] = 1;	

	for (int i=1; i<N; i++)
	{
		DP[i] = 1;
		for (int j=0; j<i; j++)
			if (A[i]>A[j] && DP[i]<(DP[j] + 1)) DP[i] = DP[j] + 1;

		m = max(m,DP[i]);
		cout << m << " ";
	}

	cout << m << '\n';

	return 0;
}
