// https://www.acmicpc.net/problem/5543
#include <stdio.h>

int main()
{
	int input=0,result;
	int min = 2000;

	for (int i=0; i<5; i++)
	{
		scanf("%d", &input);
		if (input < min) min = input;
		if (i == 2)
		{
			result += min;
			min = 2000;
		}
		if (i == 4)
			result += min;
		printf("%d %d\n", min, result);
	}
	printf("%d\n", result-50);
	return 0;
}
