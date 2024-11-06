#include <bits/stdc++.h>
using namespace std;

int main() {
	
int t;
cin>>t;
while(t--){
    int n;
    int k;
    cin>>n>>k;
    std::vector<int>arr (n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    sort(arr.begin() ,arr.end());
int mx =arr[n-1];
int mn = arr[0];

if(n==1 || mx + mn <= k){
    cout<<"yes"<<endl;
}else{
    cout<<"no"<<endl;
}
   
    
}
//just check mini + maxi <= k and size of an array

}
