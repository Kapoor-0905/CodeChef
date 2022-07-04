#include <stdio.h>

int main(){
  int t,i,x,res,ult,fi;
  scanf("%d",&t);
  for(i=0;i<t;i++){
    scanf("%d",&x);
    if(x==0 || x%3==0){
      printf("0");
    }
    else{
      res = x/3;
      ult = res+1;
      fi = ult*3;
      printf("%d",fi-x);
    }
  }
  return 0;
}
