#include <bits/stdc++.h>
#include <string.h>
#include <vector>
#include <stack>
#include <array>
#include <algorithm>
#define ll long long int
#define vi vector<ll>
#define vvi vector<vi>
#define pb push_back
using namespace std;
void print(vector<ll> a){
    for(ll i=0;i<a.size();i++){
        cout<<a[i]<<" " ;
    }
    cout<<endl;
}
void printyes(){
    cout<<"YES"<<endl;
}
void printno(){
    cout<<"NO"<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vi v(n);
        ll xo =0;
        for(int i=0;i<n;i++){
            cin>>v[i]; 
            xo = xo^v[i];
        }
        
        
        ll ans=xo;
        for(int i=0;i<n;i++){
            ll mi = xo^v[i];
            
            ans = min(mi,ans);

        }
        cout<<ans<<endl;

    }
    return 0;
}