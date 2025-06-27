#include<iostream>

using namespace std;
//duong cheo xuoi: i - j+ n
// duong cheo nguoc: i+j-1
int n;
int cot[11]= {0},d1[11] ={0},d2[11] = {0};
int x[11];
void in(){
	for(int i = 1; i <= n; i++){
		cout <<i <<" " <<x[i]<<endl;
	}
}
int cnt = 0;
void Try(int i){
	for(int j = 1; j <= n; j++){
		if(cot[j] == 0 && d1[i - j + n] == 0 && d2[i + j - 1] == 0){
			cot[j] = d1[i - j + n] = d2[i + j - 1] = 1;
			x[i] = j;
			if(i == n) cnt++;
			else Try(i+1);
			cot[j] = d1[i - j + n] = d2[i + j - 1] = 0;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		Try(1);
		cout << cnt;
		cout << endl;
	}
	return 0;
}
