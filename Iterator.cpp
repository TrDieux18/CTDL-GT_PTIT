#include<iostream>
#include<vector>

using namespace std;

int sum(vector<int> v){
    int kq=0;
    vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); it++){
        if(*it % 2 != 0){
            kq += *it;
        }
    }
    return kq;
}

int main(){
    vector<int> arr;
    int n; cin >> n;int a[n+1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        arr.push_back(a[i]);
    }
    cout << sum(arr);
}