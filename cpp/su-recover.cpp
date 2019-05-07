// https://www.acmicpc.net/problem/2312
// 수 복원하기

#include <iostream>

using namespace std;

int main()
{
	int N = 0;
	int inSu = 0;
	int soinSUcnt = 0;

	cin >> N;
	for (int i=0; i<N; i++)
	{
		cin >> inSu;
		for (int soinSu=2; soinSu<=inSu; soinSu++)
		{
			soinSUcnt = 0;

			while (inSu % soinSu == 0)
			{
				inSu /= soinSu;
				soinSUcnt++;
			}

			if (soinSUcnt)
				cout << soinSu << " " << soinSUcnt << endl;
		}
	}

	return 0;
}
