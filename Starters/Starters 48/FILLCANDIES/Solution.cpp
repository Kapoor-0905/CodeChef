#include <iostream>

int main() {
    int t,i,n,k,m,bags,quo,rem;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>k>>m;
        bags = k*m;
        quo = n/bags;
        rem = n%bags;
        if(rem==0) cout<<quo<<"\n";
        else if(rem!=0) cout<<quo+1<<"\n";
    }
	return 0;
}
