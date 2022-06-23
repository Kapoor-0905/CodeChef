#include <iostream>
using namespace std
  
int main() {
	int t,i,a,b,rank=0;
  cin>>t;
  for(i=0;i<t;i++){
      cin>>a>>b;
      rank = (a*10) + (b*90);
      cout<<rank<<"\m"
    }
	return 0;
}
