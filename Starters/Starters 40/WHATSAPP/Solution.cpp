#include <iostream>
using namespace std;

int main(){
  int t,i,x,y,z,ab;
  cin>>t;
  for(i=0;i<t;i++){
    cin>>x>>y>>z;
    cout<<(x*z - y*z)<<"\n";
  }
  return 0;
}
