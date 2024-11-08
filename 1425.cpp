#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
std::vector<int >arr(n) ;
for(int i=0;i<n;i++){
cin>>arr[i];
}
 ll i=0, j=n-1 ,p1=0 , p2=0;
 
 while(i<= j ){
     if(p1 <  p2 ){
         p1 += arr[i++];
     }else{
         p2 += arr[j--];
     }
 }
    cout<< max(p1 ,p2)<<endl;
    
}
}
// another approch is below 

