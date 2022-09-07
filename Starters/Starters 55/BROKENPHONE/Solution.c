#include <stdio.h>

int main() {
	int t,i,x,y;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d%d",&x,&y);
	    if(x>y) printf("NEW PHONE\n");
	    else if(y>x) printf("REPAIR\n");
	    else printf("ANY\n");
	}
	return 0;
}