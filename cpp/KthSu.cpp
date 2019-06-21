#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> A;
	int N,K,input;

	scanf("%d %d", &N, &K);

	for (int i=0;i<N;i++)
	{
		scanf("%d", &input);	
		A.push_back(input);
	}

	sort(A.begin(), A.end());

	printf("%d\n", A[K-1]);
	return 0;
}
