#include <iostream>

int H,M;
int main()
{
  std::cin >> H >> M;

  if (M < 45) {
    if (H == 0) H = 23;
    else H--;

    M = 60 - (45-M);
  } else {
    M = M - 45;
  }

  std::cout << H << " " << M << "\n";

  return 0;
}
