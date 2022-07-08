#include <stdio.h>

int main() {
	int t,i,a,b,c,tot;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d%d%d",&a,&b,&c);
	    tot=a+b+c;
	    if(tot >= 100 && a>=10 && b>=10 && c>=10) printf("PASS\n");
	    else printf("FAIL\n");
	}
	return 0;
}
