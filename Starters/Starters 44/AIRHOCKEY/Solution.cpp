#include <iostream>
using namespace std;

int main() {
	int t,i,a,b;
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>a>>b;
	    if(a==b){
	        cout<<7-a<<"\n";
	    }
	    else if(a>b){
	        cout<<7-a<<"\n";
	    }
	    else{
	        cout<<7-b<<"\n";
	    }
	}
	return 0;
}
