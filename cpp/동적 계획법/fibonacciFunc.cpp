#include <iostream>

using namespace std;

int main()
{
	int T,N, memo[42] = { 1,0,1 };
	for (int i=3; i<42; i++)
		memo[i] = memo[i-1] + memo[i-2];

	cin >> T;

	for (int i=0; i<T; i++)
	{
		cin >> N;
		cout << memo[N] << " " << memo[N+1] << '\n';
	}

	return 0;
}

