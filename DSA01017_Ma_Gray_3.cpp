#include<iostream>
#include<math.h>
#include<string> 
using namespace std;
//NP => Gray

void in(){
	string s; cin >> s;
	cout << s[0];
	for(int i = 1; i < s.length(); i++){
		int ans = (s[i]-'0')^(s[i-1]-'0');
		cout << ans;
	}
	cout << endl;
} 

int main(){
	int t; cin >> t;
	while(t--){
		in();
	}
	return 0;
}
