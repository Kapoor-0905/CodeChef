#include <iostream>
using namespace std; 

int main() {
	int t,i,n;
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>n;
	    for(int j=n;j>=1;j--){
	        cout<<j<<" ";
	    }
	}
	return 0;
}
