#include<iostream>
#include<vector>
#include<sstream>

using namespace std;

void in(){
    vector<int> v;
    string s;
    while( cin >> s){
        int x;
        if(s == "push"){
            cin >> x;
            v.push_back(x);
        }
        else if(s == "pop"){
            if(!v.empty()){
                v.pop_back();
            }
        }
        else if(s == "show"){
            if(!v.empty()){
                for(auto i : v) cout << i <<" ";
            }
            else{
                cout << "empty";
            }
            cout << endl;
        }
    }
}
int main(){
    in();
    return 0;
}