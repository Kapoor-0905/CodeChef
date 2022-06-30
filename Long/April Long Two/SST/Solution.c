#include <stdio.h>

int main() {
	int t,i,a,b,x,y;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d%d",&a,&b);
	    x = a*10;
	    y = b*5;
	    if(x == y) printf("ANY\n");
	    else if(x>y) printf("FIRST\n");
	    else printf("SECOND\n");
	}
	return 0;
}
