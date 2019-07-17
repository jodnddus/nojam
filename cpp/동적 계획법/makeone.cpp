// 작은 연산부터 차례대로 저장해서
// 큰 수에 대한 문제를 푸는 방법
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int N, arr[1000001];
    cin >> N;
    arr[0] = arr[1] = 0; //0과 1은 1로 만들때 연산을 0번함
    for(int i=2; i<=N; i++)
    {
        arr[i] = arr[i-1] + 1;
        if(i%2==0) arr[i] = min(arr[i], arr[i/2] + 1);
        if(i%3==0) arr[i] = min(arr[i], arr[i/3] + 1);
    }

    cout << arr[N] << endl;
    return 0;
}
