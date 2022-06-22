#include <iostream>
using namespace std;

int main() {
    int t,a,b;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>a>>b;
	    if(a == b){
	        cout<<a<<"\n";
	    }
	    else if(a>b){
	        cout<<b<<"\n";
	    }
	    else{
	        cout<<a<<"\n";
	    }
	}
	return 0;
}
