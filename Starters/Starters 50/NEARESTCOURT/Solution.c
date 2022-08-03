#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int t,i,x,y,dif;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d",&x,&y);
        dif = abs(x-y);
        if(dif%2==0){
            printf("%d\n",dif/2);
        }
        else{
            printf("%d\n",(dif/2)+1);
        }
    }
	return 0;
}
