#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iostream>
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
