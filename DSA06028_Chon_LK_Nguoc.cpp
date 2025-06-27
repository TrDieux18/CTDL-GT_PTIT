#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>

using namespace std;

void in(){
	int n; cin >> n;
	int b = n -1;
	vector<int> a(n);
	stack<vector<int>> st;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n -1; i++){
		int k = i;
		for(int j = i+1; j < n; j++){
			if(a[k] > a[j]) k = j;
		}
		swap(a[i],a[k]);
		st.push(a);
	}
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
	in();
	return 0;
} 
