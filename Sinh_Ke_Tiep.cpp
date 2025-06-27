#include<bits/stdc++.h>


using namespace std;

int n, k, a[1001] , ok;

void ktao(){
    for(int i = 1; i <= n; i++){
        a[i] = i;
    }
}

void next(){
    int i = n-1;
    while(i > 0 && a[i] > a[i+1]){
        i--;
    }   
    if(i == 0){
        ok = 0;
    }
    else{
        int k = n;
        while(a[i] > a[k]) k--;
        swap(a[i], a[k]);
        int l = i + 1, r = n;
        while(l <= r){
            swap(a[l], a[r]);
            l++; r--;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        vector<int> v;
        ok = 1;
        ktao();
        while(ok){
            for(int i = 1; i  <= n; i++){
                v.push_back(a[i]);
            }
            sort(v.rbegin(), v.rend());
            for(int i = 0; i < v.size(); i++){
                cout << v[i];
            }
            next();
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}