#include <iostream>
using namespace std;

int main() {
	int t,i,n,chess;
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>n;
	    chess = (n*60)/20;
	    cout<<chess<<"\n";
	}
	return 0;
}
