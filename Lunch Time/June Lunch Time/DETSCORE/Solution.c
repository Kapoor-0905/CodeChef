#include <stdio.h>

int main(void) {
	int t,i,arr[2],j,score=0;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    for(j=0;j<2;j++){
	        scanf("%d",&arr[j]);
	    }
	    score = (arr[0]/10) * arr[1];
	    printf("%d\n",score);
	}
	return 0;
}

