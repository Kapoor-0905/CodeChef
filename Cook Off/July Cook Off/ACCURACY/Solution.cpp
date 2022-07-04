#include <iostream>
using namespace std;
int main(){
  int t,i,x,res,ult,fi;
  cin>>t;
  for(i=0;i<t;i++){
    cin>>x;
    if(x==0 || x%3==0){
      cout<<"0"<<"\n";
    }
    else{
      res = x/3;
      ult = res+1;
      fi = ult*3;
      cout<<fi-x<<"\n";
    }
  }
  return 0;
}
