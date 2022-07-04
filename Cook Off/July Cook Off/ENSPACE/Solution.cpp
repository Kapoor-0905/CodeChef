#include <iostream>
using namespace std;
int main(){
  int t,i,n,x,y;
  cin>>t;
  for(i=0;i<t;i++){
    cin>>n>>x>>y;
    if(x+(y*2) <= n) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
  }
  return 0;
}
