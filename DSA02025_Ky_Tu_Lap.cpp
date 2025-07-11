#include <bits/stdc++.h>
using namespace std;

int n, ans;
string a[15], hv[15];
bool vs[15];

void Try(int i, int cou) {
    if (i > n) {
        ans = min(ans, cou);
        return;
    }
    for (int j = 1; j <= n; ++j) {
        if (!vs[j]) {
            vs[j] = true;
            hv[i] = a[j];

            // Nh�nh c?n
            int dd[127] = {};
            for (char c : hv[i]) dd[c]++;
            for (char c : hv[i - 1]) dd[c]++;
            int dem = 0;
            for (int i = 'A'; i <= 'Z'; ++i) {
                if (dd[i] == 2) dem++;
            }
            if (cou + dem < ans)
                Try(i + 1, cou + dem);

            vs[j] = false;
        }
    }
}

void testCase() {
    ans = INT_MAX;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    Try(1, 0);
    cout << ans;
}

int main() {
    testCase();
    return 0;
}

