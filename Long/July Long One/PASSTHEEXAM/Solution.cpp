#include <iostream>
using namespace std;

int main() {
	int t,i,a,b,c,tot;
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>a>>b>>c;
	    tot=a+b+c;
	    if(tot >= 100 && a>=10 && b>=10 && c>=10) cout<<"PASS"<<"\n";
	    else cout<<"FAIL"<<"\n";
	}
	return 0;
}
