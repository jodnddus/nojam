// https://www.acmicpc.net/problem/1107
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;
int n,m,ans;
bool broken[10];

int canMove(int channel)
{
	int length = 0;

	if (channel == 0) return broken[0] ? 0 : 1;
	while (channel > 0)
	{
		if (broken[channel % 10]) return 0;
		length++;
		channel /= 10;
	}
	return length;
}

int main()
{
	cin >> n >> m;
	
	for (int i=0, b; i<m; i++)
	{
		cin >> b;
		broken[b] = true;
	}

	// +,- 버튼만 이용해서 이동하기
	ans = abs(n - 100);	

	for (int i=0; i<=1000000; i++)
	{
		int c = i;
		int length = canMove(c);
		if (length > 0)
		{
			int press = abs(c - n);
			if (ans > length + press) ans = length + press;
		}
	}

	cout << ans << '\n';

	return 0;
}
