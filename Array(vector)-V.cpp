#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define forcin(n) for(auto &x : n) cin >> x
#define forcout(n) for(auto x : n) cout << x << " "

void printVec(vector<int> v , string s=""){
    cout << s;
    for(int i=0;i<(int)v.size();i++)
        cout << v[i] << " ";
    cout << "\n";
}

void solve(){
    int n,m,i;
    cin >>n>>m;
    vi arr(n),vrr(100100,0);
    vi :: iterator it;
    forcin(arr);

    for(it=arr.begin() ; it-arr.begin()<n;it++){
        vrr[*it]++;
    }
    for(it=vrr.begin()+1;it-vrr.begin()<=m;it++){
        cout << *it << endl;
    }

}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}