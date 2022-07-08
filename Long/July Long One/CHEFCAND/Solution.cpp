#include <iostream>
using namespace std;

int main() {
	int t,i,n,x,di,re;
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>n>>x;
	    di = (n-x)/4;
	    re = (n-x)%4;
	    if(n<x) cout<<"0"<<"\n";
	    else if(re == 0) cout<<di<<"\n";
	    else{
	        cout<<di+1<<"\n";
	    }
	}
	return 0;
}
