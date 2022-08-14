#include <iostream>
using namespace std;

int main() {
	int t,i,x;
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>x;
	    if(x<=100) cout<<x<<"\n";
	    else if(x>100 && x<=1000) cout<<x-25<<"\n";
	    else if(x>1000 && x<=5000) cout<<x-100<<"\n";
	    else if(x>5000) cout<<x-500<<"\n";
	}
	return 0;
}
