#include <stdio.h>
int main(){
  int t,i,n,x,y;
  scanf("%d",&t);
  for(i=0;i<t;i++){
    scanf("%d%d%d",&n,&x,&y);
    if(x+(y*2) <= n) printf("YES");
    else printf("NO");
  }
  return 0;
}
