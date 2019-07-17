// noj.am 2579

#include <iostream>

using namespace std;

int main()
{
	int T,floor[300],DP[300];
	
	cin >> T;
	for (int i=0;i<T;i++)
		cin >> floor[i];

	DP[0] = floor[0];

	for (int i=1;i<3;i++)
	{
		if (i==1)
			DP[i] = max((DP[i-1] + floor[i]), floor[i]);
		else
			DP[i] = max((DP[i-2] + floor[i]), (floor[i-1] + floor[i]));
	}

	for (int i=3;i<T;i++)
		DP[i] = max((DP[i-3] + floor[i-1] + floor[i]), (DP[i-2] + floor[i]));

	cout << DP[T-1] << '\n';
}
