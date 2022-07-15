#include <iostream>
using namespace std;

int main() {
    int t,i,x,coin;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>x;
        coin = x%10;
        prcout<<coin<<"\n";
    }
	return 0;
}
