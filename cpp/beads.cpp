#include <stdio.h>
#include <vector>

using namespace std;

vector<int> beads;
vector<int> flag;

int a(int index, int step, int start)
{
	if (index == beads[index]) return 0;
	else if (beads[index] == start) return step;
	else return a(beads[index], ++step, start);
}

int solution(vector<int> &A)
{
	beads = A;
	int N = A.size();
	int h=0, max=0;

	for (int i=0; i<N; i++)
	{
		h = a(i, 1, i);
		if (max < h) max = h;
	}

	return max;
}

int main()
{
	int input, N;
	vector<int> beadsss;

	scanf("%d", &N);
	for (int i=0; i<N; i++)
	{
		scanf("%d", &input);
		beadsss.push_back(input);
	}

	printf("%d\n", solution(beadsss));
	return 0;
}
