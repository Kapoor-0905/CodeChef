#include <iostream>
using namespace std;

int main() {
	int t,i,n,x,quo,quo1;
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>n>>x;
	    quo = n/x;
	    quo1 = quo/3;
	    cout<<quo1<<"\n";
	}
	return 0;
}

