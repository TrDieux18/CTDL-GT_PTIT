#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>

using namespace std;

struct work
{
    int s, f;
};work a[1005];

bool cmp(work a, work b){
    return a.f < b.f;
}

long long n;
void in(){
    cin >> n;
    int res = 1, tmp = 0;
    for(int i = 0; i < n; i++) cin >> a[i].s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].f;
    }
    sort(a, a+n, cmp);
    
    for(int i = 1; i < n; i++){
        if(a[i].s >= a[tmp].f){
            res++;
            tmp = i;
        }
    }
    cout << res << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        in();
    }
    return 0;
}