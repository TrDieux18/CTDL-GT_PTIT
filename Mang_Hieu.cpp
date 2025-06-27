#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int main(){
    int n, q; cin >> n >> q;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    long long D[n+5];
    for(int i = 0; i < n; i++){
        if(i == 0) D[0] = a[0];
        else{
            D[i] = a[i] - a[i-1];
        }
    }
    while(q--){
        int l, r, k;
        cin >> l >> r >> k;
        D[l] += k;
        D[r+1] -= k;
    }
    long long sum = 0;
    for(int i = 0; i < n; i++){
        sum += D[i];
        cout << sum <<" ";
    }
    return 0;
}