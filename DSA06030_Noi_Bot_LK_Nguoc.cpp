#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>

using namespace std;

void in(){
	int n,b; cin >> n;
	vector<int> a(n);
	stack<vector<int>> st;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n-1; i++){
		int k = 0;
		for(int j = 0; j < n - i -1; j++){
			if(a[j] > a[j+1]){
				swap(a[j],a[j+1]);
				k = 1;
			}
		}
		if(k==0) break;
		st.push(a);
	}
	b = st.size();
	while(!st.empty()){
		a = st.top();
		st.pop();
		cout <<"Buoc "<<b--<<": ";
		for(int j = 0; j < n; j++){
			cout << a[j] <<" ";
		}
		cout << endl;
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		in();
	}
	return 0;
} 
