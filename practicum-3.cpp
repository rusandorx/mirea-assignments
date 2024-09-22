#include <cmath>
#include <iostream>
#include <math.h>
using std::cin;
using std::cout;

int main(int argc, char *argv[]) {
  float S, p;
  int n;
  cout << "S";
  cin >> S;
  cout << "p";
  cin >> p;
  cout << "n";
  cin >> n;

  float r = p / 100;
  float m = (S * r * pow(1 + r, 2)) / (12 * (pow(1 + r, n) - 1));
  cout << m;

  return 0;
}
