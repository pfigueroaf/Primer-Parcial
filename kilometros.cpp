#include <iostream>
#include <string>
using namespace std;

int main()
{
  double x = 0.0;
  cout << "Escribe una distancia en millas\n";
  cin >> x;
  cout << "Tu distancia en Km es:" << x*1.609 << "Km" << endl;
  return 0;

}
