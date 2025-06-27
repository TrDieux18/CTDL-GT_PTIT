#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second){
        return a.first > b.first;
    }
    return a.second < b.second;
}

void in(){
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), cmp);
    
    int ans = 1, pos = a[0].second;
    for(int i = 1; i < n; i++){
        if(a[i].first >= pos ){
            ans++;
            pos = a[i].second;
        }
    }
    cout << ans << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        in();
    }
    return 0;
}