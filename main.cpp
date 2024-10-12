#include <algorithm>
#include <cmath>
#include <iostream>

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

// 3

// int main(int argc, char *argv[]) {
//   int *pointer{new int};
//
//   cout << *pointer;
//
//   delete pointer;
//   pointer = nullptr;
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

int main(int argc, char *argv[]) {
  int another_var{44};
  int age{27};
  const int &ref_age{age};

  const int *const p_age = &age;

  return 0;
}
