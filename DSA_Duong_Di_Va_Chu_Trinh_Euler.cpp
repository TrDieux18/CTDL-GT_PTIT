// https://code.ptit.edu.vn/student/question/DSA10004
// ��?NG �I V� CHU TR?NH EULER V?I �? TH? V� H�?NG

#include <bits/stdc++.h>
using namespace std;

int V, E, u, v;
vector<vector<int>> G;

void testCase() {
    cin >> V >> E;
    G.clear(); G.resize(V + 1);
    while (E--) {
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    int odd_deg = 0;
    for (int i = 1; i <= V; ++i) {
        odd_deg += (G[i].size() % 2 == 1);
    }
    if (odd_deg == 0) cout << 2;
    else if (odd_deg == 2) cout << 1;
    else cout << 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
