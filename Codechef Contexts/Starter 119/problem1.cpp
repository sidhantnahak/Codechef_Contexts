#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t; 
    while(t--){
    long long N;  
    cin >> N;
    long long totalCost = 0;
    while (true) {
        string binary = bitset<64>(N).to_string();  
        size_t pos = binary.find("101");  
        if (pos == string::npos) break;  
        int k = 0;
        for (size_t i = pos - 1; i >= 0 && binary[i] == '1'; --i) {
            ++k;
        }
        int x = 0;
        while ((1LL << (x + 1)) <= k) {
            ++x;
        }
        N += (1LL << x);
        totalCost += (1LL << x);
    }

    cout << totalCost << endl;
    }
    return 0;
}