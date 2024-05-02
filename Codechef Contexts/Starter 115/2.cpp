#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> tree(n + 1);
        vector<int> leafCount(n + 1, 0);

        for (int i = 1; i < n; ++i) {
            int u, v;
            cin >> u >> v;
            tree[u].push_back(v);
            tree[v].push_back(u);
        }

        vector<bool> isLeaf(n + 1, true);

        for (int i = 1; i <= n; ++i) {
            if (tree[i].size() > 1 || i == 1) {
                isLeaf[i] = false;
            } else {
                leafCount[tree[i][0]]++;
            }
        }

        queue<int> q;

        for (int i = 1; i <= n; ++i) {
            if (isLeaf[i] && leafCount[i] == 0) {
                q.push(i);
            }
        }

        int maxFriends = 0;

        while (!q.empty()) {
            int currentNode = q.front();
            q.pop();

            for (int neighbor : tree[currentNode]) {
                if (!isLeaf[neighbor]) {
                    leafCount[neighbor]--;
                    if (leafCount[neighbor] == 0) {
                        q.push(neighbor);
                    }
                }
            }

            maxFriends++;
        }

        cout << maxFriends << endl;
    }

    return 0;
}