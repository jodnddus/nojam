#include <iostream>

using namespace std;

int main()
{
	int N;
	int arr[1000] = {0,};
	cin >> N;

	arr[1] = 1;
	arr[2] = 2;

	for (int iter = 3; iter <= N; iter++)
	{
		arr[iter] = (arr[iter - 1] + arr[iter - 2]) % 10007;
	}	

	cout << arr[N] << '\n';
	return 0;
}
