#include <algorithm>
#include <cctype>
#include <cmath>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 1

// int euclid(int a, int b) {
//   if (a < b) {
//     swap(a, b);
//   }
//
//   while (a % b != 0) {
//     a %= b;
//     if (a < b) {
//       swap(a, b);
//     }
//   }
//
//   return min(a, b);
// }
//
// int main(int argc, char *argv[]) {
//   int a, b;
//   cout << "Number 1: ";
//   cin >> a;
//
//   cout << endl << "Number 2: ";
//   cin >> b;
//
//   cout << endl << euclid(a, b);
//   return 0;
// }

// 2

// int main(int argc, char *argv[]) {
//   size_t number;
//   cout << "Number: ";
//   cin >> number;
//
//   int nums[number + 1];
//
//   for (int i = 0; i <= number; i++) {
//     if (i < 2) {
//       nums[i] = 0;
//     } else {
//       nums[i] = i;
//     }
//   }
//
//   for (int i = 2; i <= number; i++) {
//     if (nums[i] != 0) {
//       for (int j = 2 * i; j <= number; j += i) {
//         nums[j] = 0;
//       }
//     }
//   }
//
//   for (int num : nums) {
//     if (num != 0) {
//       cout << num << endl;
//     }
//   }
//   return 0;
// }

// 3.1 (10)

// bool isVowel(char c) { return string("aeiouyAEIOUY").find(c) != string::npos;
// }
//
// vector<string> separateSyllables(const string &word) {
//   vector<string> syllables;
//   string syllable;
//
//   if (word.empty())
//     return syllables;
//
//   for (size_t i = 0; i < word.length(); i++) {
//     syllable += word[i];
//
//     if (isVowel(word[i])) {
//       while (i + 1 < word.length() && !isVowel(word[i + 1])) {
//         syllable += word[++i];
//       }
//       syllables.push_back(syllable);
//       syllable.clear();
//     }
//   }
//
//   if (!syllable.empty()) {
//     syllables.push_back(syllable);
//   }
//
//   return syllables;
// }
//
// void processFiles(const string &inputFileName, const string &outputFileName)
// {
//   ifstream inputFile(inputFileName);
//   ofstream outputFile(outputFileName);
//
//   string line;
//   while (getline(inputFile, line)) {
//     string result;
//     string word;
//
//     for (size_t i = 0; i <= line.length(); i++) {
//       if (i < line.length() && isalnum(line[i])) {
//         word += line[i];
//       } else {
//         if (!word.empty()) {
//           vector<string> syllables = separateSyllables(word);
//           for (size_t j = 0; j < syllables.size(); j++) {
//             result += syllables[j];
//             if (j < syllables.size() - 1) {
//               result += '-';
//             }
//           }
//           word.clear();
//         }
//         result += line[i];
//       }
//     }
//
//     outputFile << result << endl;
//   }
//
//   inputFile.close();
//   outputFile.close();
// }
//
// int main() {
//   string inputFileName = "input.txt";
//   string outputFileName = "output.txt";
//
//   processFiles(inputFileName, outputFileName);
//   cout << "Syllables have been separated and written to " << outputFileName
//        << endl;
//
//   return 0;
// }

// 3.2 (1)

// void processFiles(const string &inputFileName, const string &outputFileName,
//                   const string &replaceTo) {
//   ifstream inputFile(inputFileName);
//   ofstream outputFile(outputFileName);
//
//   string line;
//   while (getline(inputFile, line)) {
//     string result;
//
//     for (size_t i = 0; i <= line.length(); i++) {
//       if (line[i] == ' ') {
//         result += replaceTo;
//       } else {
//         result += line[i];
//       }
//     }
//
//     outputFile << result << endl;
//   }
//
//   inputFile.close();
//   outputFile.close();
// }
//
// int main(int argc, char *argv[]) {
//   string inputFileName = "input-3-2.txt";
//   string outputFileName = "output-3-2.txt";
//
//   string replaceTo;
//   cout << "Replace space with: ";
//   getline(std::cin, replaceTo);
//   cout << endl;
//
//   processFiles(inputFileName, outputFileName, replaceTo);
//
//   cout << "Spaces have been replaced with " << replaceTo << " and written to
//   "
//        << outputFileName << endl;
//
//   return 0;
// }

// 4.1 (10)

// int main(int argc, char *argv[]) {
//   size_t n;
//   cout << "n: ";
//   cin >> n;
//
//   double y = 0;
//   double sinSum = 0;
//   for (int i = 1; i <= n; i++) {
//     sinSum += sin(12 + 2 * (i - 1));
//     y += tgamma((n - i + 1) + 1) / pow(sinSum, i);
//   }
//
//   cout << endl << y;
//   return 0;
// }

// 4.2 (51)

// int main(int argc, char *argv[]) {
//   vector<vector<double>> matrix;
//
//   cout << "Enter rows, each on it's own line, separated by spaces. \n When "
//           "you're done type \"done\" instead. "
//        << endl;
//
//   while (true) {
//     vector<double> row;
//     string line;
//     string current;
//
//     getline(cin, line);
//     if (line == "done") {
//       break;
//     }
//
//     for (auto character : line) {
//       if (character == ' ' && !current.empty()) {
//         row.push_back(atof(current.c_str()));
//         current.clear();
//       } else {
//         current += character;
//       }
//     }
//
//     if (!current.empty()) {
//       row.push_back(atof(current.c_str()));
//     }
//
//     current.clear();
//     matrix.push_back(row);
//     row.clear();
//     cout << endl;
//   }
//
//   if (matrix.empty()) {
//     cout << "Empty matrix";
//     return 0;
//   }
//
//   if (matrix[0].empty()) {
//     cout << "Empty row";
//     return 0;
//   }
//
//   size_t rows = matrix.size();
//   size_t cols = matrix[0].size();
//
//   for (size_t i = 0; i < rows; i++) {
//     if (matrix[i].size() != cols) {
//       cout << "Row #" << i + 1 << " has " << matrix[i].size()
//            << " columns when first row has " << cols << " columns" << endl;
//       return 0;
//     }
//   }
//
//   double totalSum = 0;
//
//   for (size_t i = 0; i < cols; i++) {
//     double sum = 0;
//
//     for (size_t j = 0; j < rows; j++) {
//       sum += matrix[j][i];
//     }
//     cout << "Sum of " << i + 1 << " column = " << sum << endl;
//
//     totalSum += sum;
//   }
//
//   cout << "Total sum = " << totalSum << endl;
//
//   return 0;
// }

// 5.1 (10)

// int main (int argc, char *argv[]) {
//
//   return 0;
// }
