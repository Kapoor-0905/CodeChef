#include <iostream>
using namespace std;
int main() {
	int t,i,n,m,rem,dem;
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>n>>m;
	    rem = n%m;
	    dem = n/m;
	    if(rem==0 && dem%2==0) cout<<"YES"<<"\n";
	    else cout<<"NO"<<"\n";
	}
	return 0;
}
