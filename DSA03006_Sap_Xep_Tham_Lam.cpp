#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

void in(){
    int n; cin >> n;
    int a[n], b[n];
    for(int  i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b+n);
    for(int i = 0; i < n; i++){
        if((a[i] !=b[i] && a[n-i-1]!= b[i])){
            cout<<"No"<< endl;
            return;
        }
    }
    cout << "Yes" << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        in();
    }
    return 0;
}