#include <iostream>
using namespace std;

int main(){
  int t,i,x,y,z;
  cin>>t;
  for(i=0;i<t;i++){
    cin>>x>>y>>z;
    if (x%y == 0){
			cout<<((x / y) * z)<<"\n";
		} 
    else{
			cout<<(((x / y) + 1) * z)<<"\n";
		}
  }
  return 0;
}	
