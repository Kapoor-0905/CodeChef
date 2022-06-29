#include <iostream>
using namespace std;

int main(){
  int t,i,a,b;
  cin>>t;
  for(i=0;i<t;i++){
    cin>>a>>b;
    if(a==b) cout<<a<<"\n";
    else if (a>b) cout<<a<<"\n";
    else cout<<b<<"\n";
  }
  return 0;
}
