#include<iostream>
//sap xep chon
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n+1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n - 1; i++){
        int min = i;
        for(int j = i+ 1; j <= n; j++){
            if(a[j] < a[min]) min = j;
        }
        swap(a[i],a[min]);
    }
    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
    return 0;
}