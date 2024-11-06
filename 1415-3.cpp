#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
cin>>t;
while(t--){
    int x,y,z;
    cin>>x>>y>>z;
std::vector<int> arr = {x,y,z} ;
int cnt=0;
for(int i=0 ;i<arr.size();i++){
    if(arr[i] > 0) {
        cnt++;
        arr[i]--;
    }
}

sort(arr.begin(),arr.end(),greater<int>());
//now max is at 0th index
if(arr[0] > 0 && arr[1] >0 ){
    cnt++;
    arr[0]--;
    arr[1]--;
}
if(arr[1] > 0 && arr[2] >0 ){
    cnt++;
    arr[2]--;
    arr[1]--;
}
if(arr[0] > 0 && arr[2] >0 ){
    cnt++;
    arr[0]--;
    arr[2]--;
}






cout<<cnt<<endl;
    
} 
}
