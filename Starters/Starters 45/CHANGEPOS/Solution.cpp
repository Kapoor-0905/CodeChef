#include <iostream>
using namespace std;

int main() {
  int t,i,arr[4],j;
  cin>>t;
  for(i=0;i<t;i++){
    for(j=0;j<4;j++){
      cin>>arr[j];
    }
    if(arr[0] != arr[2] && arr[1] !=arr[3]) cout<<"1"<<"\n";
    else cout<<"2"<<"\n";
  }
	return 0;
}
