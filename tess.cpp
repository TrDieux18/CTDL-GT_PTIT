#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;

int demle(long long n){
    int cnt = 0;
    while(n != 0){
        int so =  n%10;
        if(so % 2 != 0){
            cnt++;
        }
        n /= 10;
    }
    return cnt;
}

bool cmp(int a, int b){
    if(demle(a) != demle(b)){
        return demle(a) > demle(b);
    }
    else return a < b;
}

int main(){
    int n; cin >> n;
    long long a[n];
    for(int i = 0; i < n ; i++) cin >>a[i];
    stable_sort(a, a+n, cmp);
    for(int i = 0; i < n; i++){
        cout << a[i] <<" ";
    }
    return 0;
}