#include<bits/stdc++.h>

using namespace std;

void init(){
    int n; cin >> n;
    string s; cin >> s;
    int i =  s.length() - 1;
    int k  = s.length() - 1;
    while(s[i] <= s[i-1] && i > 0) i--;
    if(i < 0) {
        cout << n << "BIGGEST\n";
        return;
    }
    else{
        while(s[k] <= s[i]) k--;
        swap(s[i],s[k]);
        sort(s.begin()+i+1,s.end());
        cout << n <<" ";
        for( int i = 0; i < s.length(); i++) cout << s[i];
    }
    
}
int main(){
    int t; cin >> t;
    while(t--){
        init();
        cout << endl;
    }
    return 0;
}
