#include<iostream>
#include<stack>
#include<sstream>

using namespace std;

void in(){
    int t; cin >> t;
    stack<int> st;
    string s;
    while(t--){
        cin >> s;
        int x;
        if(s == "PUSH"){
            cin >> x;
            st.push(x);
        }
        else if(s == "POP"){
            if(!st.empty()){
                st.pop();
            }
        }
        else if(s == "PRINT"){
            if(!st.empty()){
                cout << st.top();
            }
            else cout<<"NONE";
            cout << endl;
        }
    }
}
int main(){
    in();
    return 0;
}