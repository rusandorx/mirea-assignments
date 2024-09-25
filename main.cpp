#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <map>
#include <math.h>

using namespace std;

// 1

// int main(int argc, char *argv[]) {
//   setlocale(0, "");
//
//   srand((unsigned int)time(NULL));
//
//   ofstream out("sum.txt");
//   for (int i = 0; i < 10; i++) {
//     out << rand() % int(pow(2, 6)) << endl;
//   }
//   out.close();
//
//   ifstream in("sum.txt");
//   string line;
//
//   long long sum = 0;
//   while (getline(in, line)) {
//     sum += atoi(line.c_str());
//   }
//   in.close();
//   cout << sum;
//   return 0;
// }

// 2

// int sign(float n) {
//   if (n == 0) {
//     return 0;
//   }
//
//   return n > 0 ? 1 : -1;
// }
//
// int main(int argc, char *argv[]) {
//   float n;
//   cout << "n = ";
//   cin >> n;
//
//   cout << sign(n);
//   return 0;
// }

// 3

// float rectangleArea(float a, float b) {
//   return a * b;
// }
//
// float triangleArea(float a, float h) {
//   return (1 / 2) * a * h;
// }
//
// float circleArea(float r) {
//   return M_PI * pow(r, 2);
// }
//
// int main (int argc, char *argv[]) {
//   cout << "rectangle, triangle or circle?" << endl;
//   string figure;
//   cin >> figure;
//
//   switch(figure) {
//     case "rectangle":
//       float a, b;
//       cout << "a" << endl;
//       cin >> a;
//       cout << "b" << endl;
//       cin >> b;
//       cout << rectangleArea(a, b);
//       break;
//     case "triangle":
//       float a, h;
//       cout << "a" << endl;
//       cin >> a;
//       cout << "h" << endl;
//       cin >> h;
//       cout << triangleArea(a, h);
//       break;
//     case "circle":
//       float r;
//       cout << "r" << endl;
//       cin >> r;
//       cout << circleArea(r);
//       break;
//     default:
//       cout << "Not a figure dumbass";
//       break;
//   }
//   return 0;
// }

// 4

// int main(int argc, char *argv[]) {
//   for (int i = 0; i < 8; i++) {
//     for (int j = 0; j < 28; j++) {
//       if (i < 4 && j < 8) {
//         cout << "*";
//       } else {
//         cout << "_";
//       }
//     }
//     cout << endl;
//   }
//
//   return 0;
// }

// 5

// int main(int argc, char *argv[]) {
//   // TODO: on windows
// }

// 6

int main(int argc, char *argv[]) {
  map<string, int> romanToArabic{
      pair{"I", 1},   pair{"V", 5},   pair{"X", 10},   pair{"L", 50},
      pair{"C", 100}, pair{"D", 500}, pair{"M", 1000},
  };
  // Initialize result
  int res = 0;

  return 0;
}
