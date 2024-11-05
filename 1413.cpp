#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int one=0;
    int zero =0;
    for(int i=0;i<n;i++){
        if(s[i]=='0') {
            zero++;
        }else{
            one++;
        }
    }
    
int pairs =min(zero,one);
if(pairs ==0 ){
    cout<<"ramos"<<endl;
}else if(pairs %2 == 0){  //even pairs
 cout<<"ramos" <<endl;
 
}else{
     cout<<"zlatan" <<endl;
}
}
}
// pairing check keli