#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int max_val = -1, min_val = 1001, v;
        for (int i = 0; i < n; i++) {
            cin >> v;
            max_val = max(max_val, v);
            min_val = min(min_val, v);
        }
        cout << (max_val - min_val) * (n - 1) << endl;
    }
    return 0;
}
