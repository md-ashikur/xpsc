#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            int r = a[i] - (i + 1);
            if (r > ans) {
                ans = r;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
