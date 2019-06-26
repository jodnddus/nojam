// https://www.acmicpc.net/problem/10039
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
	int result=0, input=0;
	vector<int> point;

	for (int i=0; i<5; i++)
	{
		scanf("%d", &input);
		if (input <= 40) input = 40;
		point.push_back(input);
		result += input;
	}

	printf("%d\n", result/5);
	return 0;
}
