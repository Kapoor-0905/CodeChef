#include <stdio.h>

int main() {
	int t,i,n,chess;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&n);
	    chess = (n*60)/20;
	    printf("%d\n",chess);
	}
	return 0;
}
