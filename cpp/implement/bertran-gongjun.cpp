#include <iostream>

int n,arr[123456];

void getPrime(int num) {
  for (int i=2; i<=num; i++) arr[i] = i;

  for (int i=2; i<=num; i++) {
    if (arr[i] == 0) continue;
    for (int j=i+i; j<=num; j+=i) arr[j] = 0;
  }
}

int main()
{
  do {
    std::cin >> n; 
    getPrime(n);
  } while(n != 0)

  return 0;
}
