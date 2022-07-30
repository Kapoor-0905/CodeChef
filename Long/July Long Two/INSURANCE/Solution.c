#include <stdio.h>

int main() {
	int t,i,x,y;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d%d",&x,&y);
	    if(y<=x) printf("%d\n",y);
	    else printf("%d\n",x);
	}
	return 0;
}
