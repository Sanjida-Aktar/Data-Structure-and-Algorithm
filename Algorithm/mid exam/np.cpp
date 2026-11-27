#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> h(n);

        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }

        int left = 0, right = n - 1;
        int mx = 0, ansL = 0, ansR = 0;

        while (left < right) {
            int water = (right - left) * min(h[left], h[right]);

            if (water > mx) {
                mx = water;
                ansL = left;
                ansR = right;
            }

            if (h[left] < h[right]) {
                left++;
            }
            else {
                right--;
            }
        }

        cout << ansL << " " << ansR << endl;
    }

    return 0;
}