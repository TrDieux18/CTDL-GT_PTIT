#include<iostream>
#include<cctype> 
#include<cstring>
using namespace std;
int cnt[1000001]={0};
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int check = 0;
		for(int i = 0; i < n; i++){
			if(cnt[a[i]] == 1){
				cout << a[i]<<endl;
				check = 1;
				break;
			}
			cnt[a[i]] = 1;
		}
		if(check == 0) cout <<"NO"<<endl;
		memset(cnt,0,sizeof(cnt));
	}
}
