#include <stdio.h>

int main(void) {
	int t,i,n,x,di,re;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d%d",&n,&x);
	     di = (n-x)/4;
	     re = (n-x)%4;
	    if(n<x) printf("0\n");
	    else if(re == 0) printf("%d\n",di);
	    else{
	        printf("%d\n",di+1);
	    }
	}
	return 0;
}
