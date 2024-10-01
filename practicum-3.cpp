#include <cmath>
#include <fstream>
#include <iostream>
#include <math.h>
#include <regex>
#include <string>
#include <utility>

using namespace std;

// 1

int main(int argc, char *argv[]) {
  float S, p;
  int n;
  cout << "S " << endl;
  cin >> S;
  cout << "p " << endl;
  cin >> p;
  cout << "n " << endl;
  cin >> n;

  float r = p / 100;
  float del = 12 * (pow(1 + r, n) - 1);
  if (del == 0) {
    cout << "Delimiter == 0";
    return 0;
  }
  float m = S * r * pow(1 + r, n) / del;
  cout << "m = " << m << endl;

  return 0;
}

// 2

// int main(int argc, char *argv[]) {
//   float S, m;
//   int n;
//   cout << "S " << endl;
//   cin >> S;
//   cout << "m " << endl;
//   cin >> m;
//   cout << "n " << endl;
//   cin >> n;
//
//   for (float p = 0.01; p < 1000; p += 0.01) {
//     float r = float(p) / 100;
//     float del = 12 * (pow(1 + r, n) - 1);
//
//     if (del == 0) {
//       continue;
//     }
//
//     if (fabs(m - S * r * pow(1 + r, n) / del) <= 0.001) {
//       cout << std::fixed;
//       cout.precision(2);
//       cout << "p = " << p << "%" << endl;
//
//       return 0;
//     }
//   }
//
//   cout << "Couldn't calculate percentage";
//   return 0;
// }

// 3

// int main(int argc, char *argv[]) {
//   setlocale(0, "");
//
//   std::ofstream out;
//   out.open("test.txt");
//   out << "Hi there" << endl;
//   out << "second line";
//   out.close();
//
//   cout << "Считываем с test.txt: " << endl;
//   std::ifstream in;
//   std::string line;
//
//   in.open("test.txt");
//
//   while (std::getline(in, line)) {
//     cout << line << endl;
//   }
//
//   in.close();
//
//   return 0;
// }

// 4
//
// int main(int argc, char *argv[]) {
//   using namespace std::regex_constants;
//   setlocale(0, "");
//
//   cout << "Считываем с test4.txt: " << endl;
//   std::ifstream in;
//   std::string line;
//   std::string text;
//
//   in.open("test4.txt");
//
//   while (std::getline(in, line)) {
//     text += line;
//   }
//
//   const std::regex r("[0-9]+");
//
//   std::smatch match;
//
//   while (std::regex_search(text, match, r)) {
//     cout << match.str(0) << endl;
//     text = match.suffix().str();
//   }
//
//   in.close();
//
//   return 0;
// }

// 5

int main(int argc, char *argv[]) {
  std::string test = "efsalbjauemszcuasdiewqembutwfdsa";
  int n = test.length();

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (test[j] > test[j + 1]) {
        std::swap(test[j], test[j + 1]);
      }
    }
  }

  cout << test;

  return 0;
}
