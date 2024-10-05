
#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

double funTenCC(string line, int base_num = 2) { // перевод в 10 с.с.
  unordered_map<char, int> char_to_int = {
      {'0', 0},  {'1', 1},  {'2', 2},  {'3', 3}, {'4', 4},  {'5', 5},
      {'6', 6},  {'7', 7},  {'8', 8},  {'9', 9}, {'A', 10}, {'B', 11},
      {'C', 12}, {'D', 13}, {'E', 14}, {'F', 15}};

  double new_x = 0; // полученное число в 10 с.с.

  for (int i = 0; i < line.size(); i++) { // пробегание по всем цифрам
    int symbol = char_to_int[line[i]]; // конвертированный символ в цифру
    new_x += symbol *
             pow(base_num, line.size() - i - 1); // запись в число цифры line[i]
  }

  return new_x;
}

string funNewCC(int num, int base_num = 2) { // перевод в нужную с.с.
  unordered_map<int, string> int_to_char = {
      {0, "0"},  {1, "1"},  {2, "2"},  {3, "3"}, {4, "4"},  {5, "5"},
      {6, "6"},  {7, "7"},  {8, "8"},  {9, "9"}, {10, "A"}, {11, "B"},
      {12, "C"}, {13, "D"}, {14, "E"}, {15, "F"}};
  string new_x = int_to_char[num % base_num];

  if (num > 0) {
    return funNewCC(num / base_num) + new_x;
  }

  new_x = "";
  return new_x;
}

int main() {
  string x;
  int old_ss, new_ss;
  cout << "Number: ";
  cin >> x;
  cout << "Old CC: ";
  cin >> old_ss;
  cout << "New CC: ";
  cin >> new_ss;

  int num = funTenCC(x, old_ss);
  cout << "Number: " << num << endl;
  cout << "Number: " << funNewCC(num, new_ss) << endl;
  return 0;
}
