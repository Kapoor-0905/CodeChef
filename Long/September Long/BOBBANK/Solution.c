#include <stdio.h>

int main() {
    int t,i,w,x,y,z;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d%d%d",&w,&x,&y,&z);
        int final = w+(x*z)-(y*z);
        printf("%d\n",final);
    }
	return 0;
}