#include<iostream>
#include<math.h>
#include<string> 
using namespace std;
//gray => np
void in(){
	string s; cin >> s;
	string ans = s;
	for(int i = 1; i < s.length(); i++){
		if((ans[i-1]-'0')^0 == (s[i]-'0')) ans[i] = '0';
		else ans[i] = '1';
	}
	cout <<ans << endl;
} 

int main(){
	int t; cin >> t;
	while(t--){
		in();
	}
	return 0;
}
