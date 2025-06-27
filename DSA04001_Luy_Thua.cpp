#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;
const int m = 1000000007;
int main(){
    int t; cin >>t;
    while(t--){
        long long n, k;
        cin >>n >> k;
        if(k == 0) cout << "1";
        if(k == 1) cout << n;
        long long x = pow(n, k/ 2);
        long long y = (x*x) % m;
        if(k % 2 == 0) cout <<y;
        else cout <<(n*y) % m;
        cout << endl;
    }
    return 0;
}