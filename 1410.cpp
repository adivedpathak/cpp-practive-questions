#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long D,d,p,Q;
	    cin>>D>>d>>p>>Q;
	    
	    long x = D/d;  //total increse 
	    long y = D%d;  //rem days that are less than d 
	    
	    //Formula of AP
	    //sum = n/2*((2*a+(n-1)*d))
	    
	    long long ans = (x*(2*p+(x-1)*Q))/2;
	    ans = ans*d; //money 
	    ans+=(p+x*Q)*y;   //rem days 
	    cout<<ans;
	    cout<<endl;
	}

}