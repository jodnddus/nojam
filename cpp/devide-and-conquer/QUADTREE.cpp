// https://algospot.com/judge/problem/read/QUADTREE
#include <iostream>
#include <string>

using namespace std;

string solve(string::iterator& it)
{
	char head = *it;
	++it;
	if (head == 'b' || head == 'w')
		return string(1, head);
	string upperLeft = solve(it);
	string upperRight = solve(it);
	string lowerLeft = solve(it);
	string lowerRight = solve(it);
	return string("x") + lowerLeft + lowerRight + upperLeft + upperRight;
}


int main()
{
	int C,QUAD[50];
	string quadString;
	string::iterator iter;

	cin >> C;
	for (int i=0; i<C; i++)
	{
		cin >> quadString;
		iter = quadString.begin();
		cout << solve(iter) << '\n';
	}

	return 0;
}
