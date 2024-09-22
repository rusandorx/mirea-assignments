#include <cmath>
#include <iostream>
#include <math.h>
using std::cin;
using std::cout;

// 1

// int main(int argc, char *argv[]) {
//   int h, R, r, l;
//   cin >> h >> R >> r >> l;
//   cout << "Объем = "
//        << (float(1) / 3) * M_PI * h * (pow(R, 2) + r * R + pow(r, 2));
//   cout << "Площадь поверхности = "
//        << M_PI * (pow(R, 2) + (R + r) * l + pow(r, 2));
//   return 0;
// }

// 2

// int main(int argc, char *argv[]) {
//   float x, a;
//   cout << "X ";
//   cin >> x;
//   cout << "A ";
//   cin >> a;
//
// cout << "W = " << (fabs(x) >= 1 ? sqrt(a - pow(x, 2)) : a *
// log(std::abs(x))); return 0;
// }
//

// 3

// int main(int argc, char *argv[]) {
//   float x, y, b;
//   cout << "X: ";
//   cin >> x;
//   cout << "Y: ";
//   cin >> y;
//   cout << "B: ";
//   cin >> b;
//
//   if (b - y <= 0) {
//     cout << "Лог от числа <= 0";
//     return 0;
//   }
//
//   if (b - x < 0) {
//     cout << "Корень от числа < 0";
//     return 0;
//   }
//
//   float z = log(b - y) * sqrt(b - x);
//   cout << z;
//
//   return 0;
// }

// 4

// int main(int argc, char *argv[]) {
//   cout << "N: ";
//   uint n;
//   cin >> n;
//   if (n <= 0) {
//     cout << "Число должно быть натуральным";
//   }
//
//   for (int i = n; i < n + 10; i++) {
//     cout << i << '\n';
//   }
//   return 0;
// }

// 5

// int main(int argc, char *argv[]) {
//   cout << "X" << std::setw(10) << "Y" << "\n";
//   for (float x = -4; x <= 4; x += 0.5) {
//     float d = x - 1;
//     if (d == 0) {
//       cout << x << std::setw(10) << "nan" << '\n';
//       continue;
//     }
//     float y = (pow(x, 2) - 2 * x + 2) / d;
//
//     cout << x << std::setw(10) << y << '\n';
//   }
//
//   return 0;
// }
