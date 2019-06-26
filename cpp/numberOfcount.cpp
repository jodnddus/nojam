// https://www.acmicpc.net/problem/2577
#include <stdio.h>

int a,b,c,result;
int arr[10] = {0,};

int main()
{
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	result = a*b*c;

	while (result != 0)
	{
		arr[result % 10]++;
		result /= 10;
	}

	for (int i=0; i<10; i++)
		printf("%d\n", arr[i]);
	
	return 0;
}
