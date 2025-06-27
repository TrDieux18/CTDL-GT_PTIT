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
	for(int i = 0; i < n; i++){
		int k = a[i];
		int j = i - 1;
		while(j >= 0 && a[j] > k){
			a[j+1] = a[j];
			j--;
		} 
		a[j+1] = k;
		st.push(a);
	}
	while(!st.empty()){
		a = st.top();
		st.pop();
		cout <<"Buoc "<<b--<<": ";
		for(int j = 0; j <= b+1; j++){
			cout << a[j] <<" ";
		}
		cout << endl;
	}
}
int main(){
	in();
	return 0;
} 
