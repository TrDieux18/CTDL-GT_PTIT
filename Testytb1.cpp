#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
//lower_bound(a,a+n,x) => trả về con trỏ
//lower_bound(a.begin(), a.end(),x) => trả về interator
int check(int n){
    if(n == 2|| n == 3 || n == 5 || n == 7){
        return 1;
    }
    else return 0;
}

int dem(int n){
    int cnt = 0;
    while( n != 0){
        int so = n% 10;
        if(check(so) == 1){
            cnt++;
        }
        n /= 10;
    }
    return cnt;
}

bool cmp(int a, int b){{
    return dem(a) > dem(b);
}}
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    stable_sort(a,a+n,cmp);
    for(int i = 0; i < n; i++){
        cout << a[i] <<" ";
    }
    return 0;
}