#include<iostream>

using namespace std;

void initsolwe(){
    int n; cin >> n;
    int a[n+1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int i = n - 1;
    while(a[i] > a[i+1] && i > 0) i--;
    if(i < 0) for(int i = 1; i <= n; i++) cout << i << ' ';
    else {
        int k = n;
        while(a[i] > a[k]) k--;
        swap(a[i],a[k]);
        int l = i +1, r= n;
        while(l <= r){
            swap(a[l],a[r]);
            l++;
            r--;
        }
        for(int i = 1; i <= n; i++) cout << a[i] << ' ';
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        initsolwe();
        cout << endl;
    }
    return 0;
}
