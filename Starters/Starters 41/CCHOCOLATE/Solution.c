#include <stdio.h>

int main(){
  int t,i,x,y,z;
  scanf("%d",&t);
  for(i=0;i<t;i++){
    scanf("%d%d%d",&x,&y,&z);
    int a = x*5 + y*10;
    printf("%d",a/z);
  }
  return 0;
}
