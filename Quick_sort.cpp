#include<iostream>

using namespace std;
//Complicated: O(nLogn)
int find(int arr[],int low,int high){
    int pivot = arr[high];
    int l = low, r = high - 1;
    while(1){
        while(l <= r && arr[l] < pivot) l++;
        while(r >= l && arr[r] > pivot) r--;
        if(l >= r) break;
        swap(arr[l],arr[r]);
        l++; r--;
    }
    swap(arr[l],arr[high]);
    return l;
}

void Quick_sort(int arr[], int low, int high){
    if(low < high){
        int index = find(arr,low,high);
        Quick_sort(arr,low,index-1);
        Quick_sort(arr,index+1,high);
    }
}
int main(){
    int n; cin >> n;
    int a[n+1];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    Quick_sort(a,0,n-1);
    for(int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
    return 0;
}

//3 9 4 5 7 6 8