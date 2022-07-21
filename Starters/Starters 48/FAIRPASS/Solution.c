#include <stdio.h>

int main() {
	int t,i,n,k;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d%d",&n,&k);
	    if(k>n) printf("YES\n");
	    else printf("NO\n");
	}
	return 0;
}
