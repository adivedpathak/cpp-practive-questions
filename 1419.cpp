#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t;
cin>>t;
while(t--){
    int n ;
    cin>>n;
    std::vector<int>arr(n) ;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int minG =arr[0];
    bool found  = false;
    int maxdif = 0;
            
    for(int  i=0;i<n;i++){
        if(arr[i] >  minG){
            maxdif = max(maxdif ,  arr[i] - minG);
            found =true;
        }
        minG = min(minG , arr[i]);
    }        
           
           if(found ){
               cout<<maxdif <<endl;
           }else{
               cout<<"UNFIT"<<endl;
           }
                
}
}
//   take record of minG and maxdif