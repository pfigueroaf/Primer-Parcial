#include <iostream>

int max(int a, int b)
{
  int m = a;
  if(b>= a)
    {
      m = b;
    }
  return m;
  // return (a>b) ? a : b;
}

int main (void)
{
  std::cout << max( 9, -3) << std::endl;
  std::cout << max( -9, 3) << std::endl;
  return 0;
}
