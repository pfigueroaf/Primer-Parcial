#include <iostream>

int max( int a, int b)
{
  int m = a;
    if(b>=a)
      {
	m = b;
      }
  return m;
}

int min ( int a, int b)
{
  int m = a;
    if(b<=a)
      {
	m = b;
      }
  return m;
}

int sum( int a, int b)
{
  int s;
  s = a + b;
  return s;
}

int dif (int a, int b)
{
  int d;
  d = a - b;
  return d;
}

int pro (int a, int b)
{
  int p;
  p = a*b;
  return p;
}

int main (void)
{
  std::cout << "El máximo es" << " " << max( 9, -3) << std::endl;
  std::cout << "El mínimo es" <<  " " << min( 9, -3) << std::endl;
  std::cout << "La suma  es" << " " << max( 9, -3) << std::endl;
  std::cout << "La diferencia es" << " " << dif( 9, -3) << std::endl;
  std::cout << "El Producto  es" << " " << pro( 9, -3) << std::endl;
  return 0;
}

