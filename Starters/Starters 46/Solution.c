#include <stdio.h>
int main(){
  int t,i,m,n;
  scanf("%d",&t);
  for(i=0;i<t;i++){
    scanf("%d%d",&m,&n);
    printf("%d\n",m*n);
  }
  return 0;
}
