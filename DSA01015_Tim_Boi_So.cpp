#include<iostream>
#include<queue>

using namespace std;

void in(){
	int n; cin >> n;
	queue <long long> qu;
	qu.push(9);
	while(1){
		long long x = qu.front();
		if(x % n == 0){
			cout << x << endl;
			break;
		}
		qu.pop();
		qu.push(x*10);
		qu.push(x*10+9);
	}
} 

int main(){
	int t; cin >> t;
	while(t--){
		in();
	}
	return 0;
}
