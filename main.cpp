#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <map>
#include <regex>
#include <unordered_map>

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
//       cout << "a: ";
//       cin >> a;
//       cout << endl << "b: ";
//       cin >> b;
//       cout << endl << rectangleArea(a, b);
//       break;
//     case "triangle":
//       float a, h;
//       cout << "a: ";
//       cin >> a;
//       cout << endl << "h";
//       cin >> h;
//       cout << endl << triangleArea(a, h);
//       break;
//     case "circle":
//       float r;
//       cout << "r: ";
//       cin >> r;
//       cout << endl << circleArea(r);
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

// #include <windows.h>
// #define WIDTH 200
// #define HEIGHT 170

// int main(int argc, char *argv[]) {
//   HWND hwnd = GetConsoleWindow();
//   HDC hdc = GetDC(hwnd);
//   HPEN pen = CreatePen(PS_SOLID, 2, RGB(255, 255, 255));
//   SelectObject(hdc, pen);
//
//   MoveToEx(hdc, WIDTH / 2, 0, NULL);
//   LineTo(hdc, WIDTH / 2, HEIGHT);
//   MoveToEx(hdc, 0, HEIGHT / 2, NULL);
//   LineTo(hdc, WIDTH, HEIGHT / 2);
//
//   MoveToEx(hdc, WIDTH / 2, HEIGHT / 2, NULL);
//
//   SetDCPenColor(hdc, RGB(255, 0, 0));
//   for (float x = -8.0f; x <= 8.0f; x += 0.01f) {
//     MoveToEx(hdc, 10 * x + WIDTH / 2, -10 * sin(x) + HEIGHT / 2, NULL);
//     LineTo(hdc, 10 * x + WIDTH / 2, -10 * sin(x) + HEIGHT / 2);
//   }
//
//   ReleaseDC(hwnd, hdc);
//   cin.get();
//
//   return 0;
// }

// 6

// bool isValidRoman(const string &roman) {
//   regex romanRegex(
//       "^(M{0,3})(CM|CD|D?C{0,3})(XC|XL|L?X{0,3})(IX|IV|V?I{0,3})$");
//   return regex_match(roman, romanRegex);
// }
//
// int romanToArabic(const string &roman) {
//   unordered_map<char, int> romanValues = {{'I', 1},   {'V', 5},   {'X', 10},
//                                           {'L', 50},  {'C', 100}, {'D', 500},
//                                           {'M', 1000}};
//
//   int total = 0;
//   int prevValue = 0;
//
//   for (char c : roman) {
//     int value = romanValues[c];
//     total += (value > prevValue) ? (value - 2 * prevValue) : value;
//     prevValue = value;
//   }
//
//   return total;
// }
//
// int main() {
//   string roman;
//   cout << "Enter a roman numeral: ";
//   cin >> roman;
//
//   if (isValidRoman(roman)) {
//     int arabic = romanToArabic(roman);
//     cout << "Arabic number: " << arabic << endl;
//   } else {
//     cout << "Invalid Roman numeral." << endl;
//   }
//
//   return 0;
// }

// 7

int getRandom() {}
