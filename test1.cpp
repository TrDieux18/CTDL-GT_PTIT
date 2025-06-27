#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int maxx=max_element(a[0],a[n-1]);
    cout << *maxx;
}