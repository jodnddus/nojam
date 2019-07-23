// https://www.acmicpc.net/problem/11055
#include <iostream>

using namespace std;

int N,m=0,A[1000],DP[1000];
int main()
{
	cin >> N;

	for (int i=0; i<N; i++)
	{
		cin >> A[i];
		DP[i] = A[i];

		for (int j=0; j<i; j++)
			if (A[i]>A[j] && DP[i]<(DP[j]+A[i])) DP[i] = DP[j]+A[i];

		m = m > DP[i] ? m : DP[i];
	}

	cout << m << '\n';

	return 0;
}
