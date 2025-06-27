#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<cstring>
using namespace std;

void in(){
    int n, f[26];
    string s;
    cin >> n >> s;
    memset(f,0,sizeof(f));
    for(int i = 0; i < s.length(); i++) f[s[i] - 'A']++;
    sort(f,f+26,greater<int>());
    if((f[0]-1)*n + 1 <= s.length()) cout << 1 << endl;
    else cout << -1 << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        in();
    }
    return 0;
}