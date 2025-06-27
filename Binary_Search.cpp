#include<iostream>
#include<algorithm>

using namespace std;

bool bbinary_search(int a[], int n, int x){
    int l = 0, r= n-1;
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid] == x){
            return true;
        }
        else if( a[mid] > x){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    return false;
}
int main(){
    int n,x; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> x;
    sort(a, a+n);
    if(bbinary_search(a,n,x) ==  true){// O(logN)
        cout <<"1";
    }
    else cout <<"-1";
    return 0;
}