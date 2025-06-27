#include<iostream>
//Sap xep chen
using namespace std;

int main(){
    int n; cin >> n;
    int a[n+1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 2; i <= n; i++){
        int x = a[i];
        int j = i- 1;
        while(x < a[j] && j > 0){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = x;
    }
    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
    return 0;
}