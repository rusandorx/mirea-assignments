#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <regex>
#include <string>
#include <unordered_map>

using namespace std;

// 1

// int main(int argc, char *argv[]) {
//   setlocale(0, "");
//
//   ofstream out("sum.txt");
//   cout << "Enter 10 numbers: " << endl;
//   for (int i = 0; i < 10; i++) {
//     int number;
//
//     cin >> number;
//     out << number << endl;
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

//   cout << endl << sign(n);
//   return 0;
// }

// 3

// float rectangleArea(float a, float b) { return a * b; }

// float triangleArea(float a, float h) { return (1 / 2) * a * h; }

// float circleArea(float r) { return M_PI * pow(r, 2); }

// int main(int argc, char *argv[]) {
//   cout << "1) rectangle 2) triangle 3) circle?" << endl;
//   int figure;
//   cin >> figure;
//
//   switch (figure) {
//   case 1:
//     float a, b;
//     cout << "a: ";
//     cin >> a;
//     cout << endl << "b: ";
//     cin >> b;
//     cout << endl << rectangleArea(a, b);
//     break;
//   case 2:
//     float a, h;
//     cout << "a: ";
//     cin >> a;
//     cout << endl << "h";
//     cin >> h;
//     cout << endl << triangleArea(a, h);
//     break;
//   case 3:
//     float r;
//     cout << "r: ";
//     cin >> r;
//     cout << endl << circleArea(r);
//     break;
//   default:
//     cout << "Not a figure dumbass";
//     break;
//   }
//   return 0;
// }

// 4

// int main(int argc, char *argv[]) {
//   for (int i = 0; i < 8; i++) {
//     for (int j = 0; j < 28; j++) {
//       if (i < 4 && j < 12) {
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

// int main() {
//   int m1 = 37;
//   int i1 = 3;
//   int c1 = 64;
//
//   int m2 = 25173;
//   int i2 = 13849;
//   int c2 = 65537;
//
//   int c;
//   cout << "count: ";
//   cin >> c;
//   cout << endl;
//
//   int last = 0;
//
//   for (int i = 0; i <= c; i++) {
//     cout << i << ": " << last << endl;
//     last = (m1 * last + i1) % c1;
//   }
//
//   last = 0;
//
//   for (int i = 0; i <= c; i++) {
//     cout << i << ": " << last << endl;
//     last = (m2 * last + i2) % c2;
//   }
//
//   return 0;
// }

// 8

// int main(int argc, char *argv[]) {
//
//   double A[3][4] = {// 3x4
//                     {5, 2, 0, 10},
//                     {3, 5, 2, 5},
//                     {20, 0, 0, 0}};
//
//   double B[4][2] = {// 4x2
//                     {1.20, 0.50},
//                     {2.80, 0.40},
//                     {5.00, 1.00},
//                     {2.00, 1.50}};
//   double C[3][2];
//
//   for (int row = 0; row < size(A); row++) {
//     for (int col = 0; col < size(B[0]); col++) {
//       float sum = 0;
//       for (int i = 0; i < size(A[0]); i++) {
//         sum += A[row][i] * B[i][col];
//       }
//       C[row][col] = sum;
//     }
//   }
//
//   for (int row = 0; row < size(C); row++) {
//     for (int col = 0; col < size(C[0]); col++) {
//       cout << C[row][col] << "   ";
//     }
//     cout << endl;
//   }
//
//   int maxMoney = 0;
//   int minMoney = 0;
//
//   for (int i = 1; i < 3; i++) {
//     if (C[i][0] > C[maxMoney][0]) {
//       maxMoney = i;
//     }
//     if (C[i][0] < C[minMoney][0]) {
//       minMoney = i;
//     }
//   }
//
//   cout << "Max Seller: #" << maxMoney + 1 << " - " << C[maxMoney][0] << endl;
//   cout << "Min Seller: #" << minMoney + 1 << " - " << C[minMoney][0] << endl;
//
//   int maxCommissions = 0;
//   int minCommissions = 0;
//
//   for (int i = 1; i < 3; i++) {
//     if (C[i][1] > C[maxCommissions][1]) {
//       maxCommissions = i;
//     }
//     if (C[i][1] < C[minCommissions][1]) {
//       minCommissions = i;
//     }
//   }
//
//   cout << "Max Commisions: #" << maxCommissions + 1 << " - "
//        << C[maxCommissions][1] << endl;
//   cout << "Min Commisions: #" << minCommissions + 1 << " - "
//        << C[minCommissions][1] << endl;
//
//   double sumMoney = 0;
//   for (int row = 0; row < size(C); row++) {
//     sumMoney += C[row][0];
//   }
//
//   cout << "Sum money: " << sumMoney << endl;
//
//   double sumCommissions = 0;
//
//   for (int row = 0; row < size(C); row++) {
//     sumCommissions += C[row][1];
//   }
//
//   cout << "Sum commissions: " << sumCommissions << endl;
//
//   double fullMoney = 0;
//
//   for (int row = 0; row < size(C); row++) {
//     fullMoney += C[row][0] + C[row][1];
//   }
//
//   cout << "Full money: " << fullMoney << endl;
//   return 0;
// }

// 9

// int getValue(string s, int base) {
//   unordered_map<char, int> char_to_int = {
//       {'0', 0},  {'1', 1},  {'2', 2},  {'3', 3}, {'4', 4},  {'5', 5},
//       {'6', 6},  {'7', 7},  {'8', 8},  {'9', 9}, {'A', 10}, {'B', 11},
//       {'C', 12}, {'D', 13}, {'E', 14}, {'F', 15}};
//
//   int n = 0;
//
//   for (int i = 0; i < size(s); i++) {
//     n += char_to_int[s[size(s) - 1 - i]] * pow(base, i);
//     cout << n << endl;
//   }
//
//   return n;
// }
//
// string toNewBase(int number, int base) {
//   unordered_map<int, string> int_to_char = {
//       {0, "0"},  {1, "1"},  {2, "2"},  {3, "3"}, {4, "4"},  {5, "5"},
//       {6, "6"},  {7, "7"},  {8, "8"},  {9, "9"}, {10, "A"}, {11, "B"},
//       {12, "C"}, {13, "D"}, {14, "E"}, {15, "F"}};
//
//   string newNumber = "";
//   while (number) {
//     newNumber += int_to_char[number % base];
//     number /= base;
//   }
//
//   reverse(newNumber.begin(), newNumber.end());
//   return newNumber;
// }
//
// int main(int argc, char *argv[]) {
//   string line;
//   cout << "Number: ";
//   cin >> line;
//   int base;
//   cout << endl << "Base: ";
//   cin >> base;
//   int value = getValue(line, base);
//   cout << endl << "Value: " << value << endl;
//   int newBase;
//   cout << "New base: ";
//   cin >> newBase;
//   cout << endl << "Number in new base: " << toNewBase(value, newBase);
//
//   return 0;
// }
