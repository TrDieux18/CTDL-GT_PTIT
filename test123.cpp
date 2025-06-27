#include<iostream>
#include<math.h>
using namespace std;
int find(int a[], int low ,int high){
	int p = a[high];
	int r = high - 1, l = low;
	while(1){
		while( l <= r && a[l] < p) l++;
		while(r >= l && a[r] > p) r--;
		if(l >= r) break;
		swap(a[l],a[r]);
		l++; r--;
	}
	swap(a[l],a[high]);
	return l;
}

void quick(int a[], int low, int high){
	if(low < high){
		int index = find(a,low,high);
		quick(a,low,index-1);
		quick(a,index+1,high);
	}
}
void check(int a[],int n){
	
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[100001];
		for(int i = 0; i < n; i++){
		    cin >> a[i];
	    }
	    quick(a,0,n-1);
	    int min1 = 1e8 ;
    	for(int i = 1; i < n;i++){
		  min1 = min(min1,a[i] - a[i-1]); 
	    }
	    cout << min1;
		cout << endl;
	}
	return 0;
}
