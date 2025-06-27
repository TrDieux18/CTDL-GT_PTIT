#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>

using namespace std;

void in(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    vector<int> v;
    v.push_back(a[0] * a[1]);
    v.push_back(a[n-1] * a[n-2]);
    v.push_back(a[0] * a[1] * a[n-1]);
    v.push_back(a[n-1] * a[n-2] * a[n-3]);
    sort(v.rbegin(), v.rend());
    cout << v[0];
}
int main(){
    in();
    return 0;
}