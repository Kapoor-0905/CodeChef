#include <stdio.h>

int main(){
  int t,i,x,y,z,ab;
  scanf("%d",&t);
  for(i=0;i<t;i++){
    scanf("%d%d%d",&x,&y,&z);
    printf("%d",(x*z - y*z));
  }
  return 0;
}
