#include<iostream> 
#include<string>
using namespace std;

void init(){
	string s;
	cin >> s;
	int i = s.length();
	while(i-- && s[i] == '1') s[i] = '0'; 
	if(i >= 0) s[i] = '1'; 
	cout << s << endl; 
} 
int main(){
	int t;
	cin >> t;
	while(t--){
		init();
	}
	return 0; 
}

//void init(){
//	string s;
//	cin >> s;
//	int n = s.length();
//	while(n--){
//		if(s[n] == '1') s[n] = '0';
//		else{
//			s[n] = '1';
//			break;
//		} 
//	}
//}
