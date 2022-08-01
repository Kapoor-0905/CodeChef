#include <stdio.h>

int main() {
	int t,i,n,x,quo,quo1;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d%d",&n,&x);
	    quo = n/x;
	    quo1 = quo/3;
	    printf("%d\n",quo1);
	}
	return 0;
}
