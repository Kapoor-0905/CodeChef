#include <iostream>
using namespace std;

int main() {
    int t,i,x,y,work;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>x>>y;
        work = x*4 + y;
        cout<<work<<"\n";
    }
	return 0;
}
