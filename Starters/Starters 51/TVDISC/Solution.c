#include <stdio.h>

int main() {
	int t,i,a,b,c,d;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d%d%d%d",&a,&b,&c,&d);
	    if(a-c < b-d){
	        printf("First\n");
	    }
	    else if(a-c > b-d){
	        printf("Second\n");
	    }
	    else printf("Any\n");
	}
	return 0;
}
