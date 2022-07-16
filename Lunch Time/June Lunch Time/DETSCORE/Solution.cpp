#include <iostream>

int main() {
	int t,i,arr[2],j,score=0;
	cin>>t;
	for(i=0;i<t;i++){
	    for(j=0;j<2;j++){
	        cin>>arr[j];
	    }
	    score = (arr[0]/10) * arr[1];
	    cout<<score<<"\n";
	}
	return 0;
}
