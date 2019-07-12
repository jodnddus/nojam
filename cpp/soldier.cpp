#include <stdio.h>

int solution(int ranks[], int N)
{
    int soldier[100001] = {0,};
    int max = 0, result = 0;

    for (int i=0; i<N; i++)
    {
        if (max < ranks[i])
            max = ranks[i];
    }

    for (int i=0; i<N; i++)
    {
        int temp = ranks[i];
        soldier[temp]++;
    }

    for (int i=0; i<=max; i++)
    {
        if (soldier[i] == 0)
            continue;
        else if (soldier[i+1] == 0)
            continue;
        else
            result += soldier[i];
    }

    return result;
}

int main()
{
   	int ranks[1000001] = {0,};
	int N;

	scanf("%d", &N);
	for (int i=0; i<N; i++)
		scanf("%d", &ranks[i]);

	solution(ranks, N);
	return 0;
}
