#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int t;
cin >> t;
while (t--) {
    ll n;
    cin>>n;
    vector<ll> v(n+1);
    ll sum = 0;
    for(int i=0;i<=n;i++){
    cin>>v[i];
    sum+=v[i];
    }
    
    ll checker = v[n];  
    
    sort(v.begin(),v.end());
    for(int i=0;i<=n;i++){
    if(v[i]>checker && v[i]<=(2*checker)){
        checker = v[i];
    }
    }
    cout<<sum-checker<<endl;

}
return 0;
}