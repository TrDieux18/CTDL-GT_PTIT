#include<iostream>
#include<math.h>

using namespace std;

//void init(){
//	int n, k;
//	cin >> n >> k;
//	int a[k+1], i = k;
//	for(int i = 1; i <= k; i++) cin >> a[i];
//	while(a[i] ==  n - k + i && i > 0) i--;
//	if(i==0) for(int i = 1; i <= k; i++) a[i] = i;
//	else{
//		a[i]++;
//		for(int j = i + 1; j <= k; j++) a[j] = a[i] - i + j;
//	}
//	for(int i = 1; i <= k ; i++) cout << a[i] << ' ';
//	cout << endl;
//}
void init2(){
	int n, k;
	cin >> n >> k;
	int a[k+1],check = 0;
	for(int i = 1; i <= k; i++) cin >> a[i];
	for(int i = k; i > 0; i--){
		if(a[i] != n - k + i){
			a[i]++;
			for(int j = i + 1; j <= k; j++) a[j] = a[i] - i + j;
			check = 1;
			break;
		}
	}
	if(check == 1) for(int i = 1; i <= k; i++) cout << a[i] <<' ';
	else for(int i = n - k + 1; i <= k; i++) cout << i << ' ';
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		init2();
	}
	return 0;
}


