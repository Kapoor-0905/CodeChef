#include <iostream>
using namespace std;

int main() {
	int t,i,a,b,c,d;
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>a>>b>>c>>d;
	    if(a-c < b-d){
	        cout<<"First"<<"\n";
	    }
	    else if(a-c > b-d){
	        cout<<"Second"<<"\n";
	    }
	    else cout<<"Any"<<"\n";
	}
	return 0;
}
