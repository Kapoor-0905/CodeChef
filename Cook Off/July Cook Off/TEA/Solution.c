#include <stdio.h>
int main(){
  int t,i,x,y,z;
  scanf("%d",&t);
  for(i=0;i<t;i++){
    scanf("%d%d%d",&x,&y,&z);
    if (x%y == 0){
			printf((x / y) * z);
		} 
    else{
			printf(((x / y) + 1) * z);
		}
  }
  return 0;
}	
