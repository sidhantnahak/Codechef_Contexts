#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N;
    cin >> N;

    vector<int> A(N + 1);
    for (int i = 1; i <= N; ++i) {
      cin >> A[i];
    }

    long long count = 0;

    for (int i = 1; i <= N; ++i) {
      long long left = static_cast<long long>(A[i]);
      if (left == 1) {
        count += static_cast<long long>(N);
      } else {
        long long power = 1;
        for (int j = 1; j <= N; ++j) {
          if (power > numeric_limits<long long>::max() / left) {
            power = numeric_limits<long long>::max();
            break;
          }
          power *= left;
          long long right = static_cast<long long>(A[j]);
          if (power <= right) {
            count++;
          }
        }
      }
    }

    cout << count << endl;
  }

  return 0;
}