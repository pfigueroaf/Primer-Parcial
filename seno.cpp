#include <iostream>
#include <cmath>

int main (void)
{
  double x = -M_PI;
  for(x = -M_PI; x < M_PI; x = x + 0.1)
    {
      std::cout << x << "\t" << std::sin(x) << "\n";
    }
  return 0;
}
