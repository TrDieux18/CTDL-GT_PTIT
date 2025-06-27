#include <bits/stdc++.h>
using namespace std;

char c;
int k;
string s;

void Try(char i) {
    for (char j = i; j <= c; ++j) {
        s.push_back(j);
        if (s.length() == k) cout << s << endl;
        else Try(j);
        s.pop_back();
    }
}

void testCase() {
    cin >> c >> k;
    Try('A');
}

int main() {
    testCase();
    return 0;
}
