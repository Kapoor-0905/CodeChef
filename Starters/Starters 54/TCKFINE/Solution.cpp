#include <iostream>
using namespace std;

int main(){
    int t,i,x,p,q;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>x>>p>>q;
        cout<<(p-q)*x<<"\n";
    }
    return 0;
}