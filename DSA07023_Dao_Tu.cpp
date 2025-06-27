#include<iostream>
#include<stack>
#include<algorithm>
#include<sstream>

using namespace std;

void in(){
   string s, str;
   getline(cin, str);
   stringstream ss(str);
   stack<string> st;
   while(ss >> s){
    st.push(s);
   }
   while(!st.empty()){
    cout << st.top() <<" ";
    st.pop();
   }
}
int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        in();
        cout << endl;
    }
    return 0;
}