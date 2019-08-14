#include <iostream>

int n,su=0;
int arr[500000];

void getPrime(int num) {
  for (int i=2; i<=(num*2); i++) arr[i] = i;

  for (int i=2; i<=(num*2); i++) {
    if (arr[i] == 0) continue;
    for (int j=i+i; j<=(num*2); j+=i) arr[j] = 0;
  }
}

int getPrimeSu(int num) {
  su=0;

  for (int i=(num+1); i<=(num*2); i++) {
    if (arr[i] != 0) su++;
  }

  return su;
}

int main()
{
  while (1) {
    std::cin >> n; 
    if (n == 0) break;
    getPrime(n);
    std::cout << getPrimeSu(n) << '\n';
  }

  return 0;
}
