#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int k; string s;
    cin >> k >> s;

    for (int i = 0; i < s.length(); ++i) {
        if (k == 0) break;
        char c = '0';
        for (int j = i + 1; j < s.length(); ++j) {
            c = max(c, s[j]);
        }
        if (c <= s[i]) continue;

        string newz = s;
        for (int j = i + 1; j < s.length(); ++j) {
            // N?u có nhi?u char cùng b?ng c, th? swap các TH và l?y TH max
            if (s[j] == c) {
                string temp = s;
                swap(temp[i], temp[j]);
                newz = max(newz, temp);
            }
        }
        s = newz;
        k--;
    }
    cout << s;
}

int main() {
    int T; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}
