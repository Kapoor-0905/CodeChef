#include <stdio.h>

int main() {
    int t,i,x,y,work;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d",&x,&y);
        work = x*4 + y;
        printf("%d\n",work);
    }
	return 0;
}
