#include <iostream>
using namespace std

int main() {
	int t,i,a,b,c;
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>a>>b>>c;
	    if(a > b && a>c) cout<<"ALICE"<<"\n";
	    else if(b>a && b>c) cout<<"BOB"<<"\n";
	    else cout<<"CHARLIE"<<"\n";
	}
	return 0;
}
