#include <stdio.h>

int main() {
	int t,i,k,a,x;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d%d",&k,&x);
	    a = 7*k -x;
	    printf("%d\n",a);
	}
	return 0;
}

