#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

const int mod = 1e9+7;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        long long res = 0;
        for(int i = 0; i < n; i++){
            res = (res+a[i]*i)%mod;
        }
        cout << res << endl;
    }
    return 0;
}