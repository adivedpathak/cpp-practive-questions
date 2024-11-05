#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
     int long long n,mx=INT_MIN,mn=INT_MAX,sum1=0,sum2=0;
     cin>>n;
     int long long a[n];
     for(int i=0;i<n;i++){
         cin>>a[i];
         if(i%2==1){
             sum1+=abs(a[i]);
             mx=max(mx,abs(a[i]));
         } else {
             sum2+=abs(a[i]);
             mn=min(mn,abs(a[i]));
         }
     }
     
     
    //  Sum = odd - even ;
    //  alterSum = max(Sum , Sum + 2*(maxo - mine) )   //answer
     
     if(mx<=mn)
     cout<<(sum2-sum1)<<endl;
     else cout<<(sum2-sum1)+(2*(mx-mn))<<endl;
    }
	return 0;
}