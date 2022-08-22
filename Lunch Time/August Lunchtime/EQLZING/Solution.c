#include <stdio.h>
#include <stdlib.h>

int main() {
	int t,i,a,b,dif;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d%d",&a,&b);
	    dif = abs(a-b);
	    if(dif%2==0) printf("YES\n");
	    else printf("NO\n");
	}
	return 0;
}
