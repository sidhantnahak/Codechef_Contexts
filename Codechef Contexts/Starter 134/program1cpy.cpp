#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, Q;
        cin >> N >> Q;

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        vector<int> queries(Q);
        for (int i = 0; i < Q; ++i) {
            cin >> queries[i];
        }

        for (int k : queries) {
            
            vector<int> B(A.begin(), A.begin() + k);
            sort(B.begin(), B.end());

            
            while (B.size() > 1) {
                int n = B.size();

                
                int largest1 = B[n-1];
                int largest2 = B[n-2];
                int smallest = B[0];

                
                B.pop_back();
                B.pop_back();
                B.erase(B.begin());

                
                int new_element = largest1 + largest2 - smallest;

                
                auto pos = lower_bound(B.begin(), B.end(), new_element);
                B.insert(pos, new_element);
            }

            
            cout << B[0] << " ";
        }

        cout << endl;
    }

    return 0;
}