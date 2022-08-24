#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int t,i,a,b,dif;
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>a>>b;
	    dif = abs(a-b);
	    if(dif%2==0) cout<<"YES"<<"\n";
	    else cout<<"NO"<<"\n";
	}
	return 0;
}
