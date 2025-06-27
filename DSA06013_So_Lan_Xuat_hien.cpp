#include <bits/stdc++.h>
using namespace std;

void in() {
    int n, x;
    cin >> n >> x;
    vector<int> cnt(1e6 + 1, 0);
    for (int i = 0; i < n; ++i) {
        int num; cin >> num;
        cnt[num]++;
    }
    if (cnt[x]) cout << cnt[x];
    else cout << -1;
}

int main(){

    int t; cin >> t;
    while (t--) {
        in();
        cout <<endl;
    }
    return 0;
}
