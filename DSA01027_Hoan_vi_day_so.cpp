#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;

int n;  
vector<int> a,check,b;
vector<vector<int>> res;

void Try(int i){
	for(int j = 0 ;j < n; j++){
		if(check[j] == 0){
			 b[i] = a[j];
			 check[j] = 1;
			 if(i == n - 1) res.push_back(b);
			 else Try(i+1);
			 check[j] = 0;
		}
	}
}

void in(){
	cin >> n;
	a.resize(n);
	b.resize(n);
	check.resize(n,0);
	for(int &i : a) cin >> i;
	sort(a.begin(),a.end());
	Try(0);
	sort(res.begin(),res.end());
	for(auto i : res){
		for(int j : i){
			cout << j <<" ";
		}
		cout << endl;
	}
}
int main(){
	in();
	return 0;
} 
 
