#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int T;
	int cost[1001][3];
	int DP[1001][3];
	
	cin >> T;
	for (int i=1; i<=T; i++)
	{
		int r,g,b;
		cin >> r >> g >> b;

		cost[i][0] = r;
		cost[i][1] = g;
		cost[i][2] = b;		
	}

	DP[1][0] = cost[1][0];
	DP[1][1] = cost[1][1];
	DP[1][2] = cost[1][2];

	for (int j=2; j<=T; j++)
	{
		DP[j][0] = min(DP[j-1][1], DP[j-1][2]) + cost[j][0];
		DP[j][1] = min(DP[j-1][0], DP[j-1][2]) + cost[j][1];
		DP[j][2] = min(DP[j-1][0], DP[j-1][1]) + cost[j][2];
	}

	int min = DP[T][0];
	if (DP[T][1] < min) min = DP[T][1];
	if (DP[T][2] < min) min = DP[T][2];

	cout << min << '\n';
	return 0;
}
